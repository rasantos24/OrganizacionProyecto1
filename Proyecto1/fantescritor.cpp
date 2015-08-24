#include "fantescritor.h"

FantEscritor::FantEscritor()
{
    lectores = new Lectura();
}

void FantEscritor::crearMiSuperBlock(char particion, char* nombreDisco, int numeroBloques, int tamanioBloques, char* path)
{
    SuperBlock* superBlock = new SuperBlock();
    superBlock->setSuperBlock(particion, nombreDisco, numeroBloques, tamanioBloques);

    escribirEnSuperBlock(path, superBlock, tamanioBloques);
}

void FantEscritor::escribirEnSuperBlock(char* path, SuperBlock* superBlock, int tamanioBloques)
{
    out.open(path,ios::in|ios::binary);
    out.seekp(0);

    char *bloqueMemoria = (char*)calloc(1,tamanioBloques);
    memcpy(bloqueMemoria, superBlock, sizeof(SuperBlock));

    out.write(bloqueMemoria, tamanioBloques);
    out.close();

    delete []bloqueMemoria;
}

void FantEscritor::escribirEnBitmap(char* path, Bitmap* bitmap, int tamanioBloques)
{
    out.open(path,ios::in|ios::binary);
    out.seekp(tamanioBloques);

    char* bloqueMemoria = (char*)calloc(1,tamanioBloques);
    memcpy(bloqueMemoria, bitmap, sizeof(Bitmap));

    out.write(bloqueMemoria, tamanioBloques);
    out.close();

    delete []bloqueMemoria;
}

void FantEscritor::crearMiINodoTabla(char* path,int numeroInodo, int tamanioBloque)
{
    INodoTabla* tabla = new INodoTabla[numeroInodo];
    escribirEnINodoTabla(path, tabla, tamanioBloque);
}

void FantEscritor::escribirEnINodoTabla(char* path, INodoTabla* tabla,int tamanioBloque )
{
    char* bloqueMemoria = (char*)calloc(1,tamanioBloque);
    memcpy(bloqueMemoria, tabla, sizeof(INodoTabla));

    out.open(path,ios::in|ios::binary);
    out.seekp(2*tamanioBloque);

    out.write(bloqueMemoria, tamanioBloque);
    out.close();

    delete []bloqueMemoria;
}

int FantEscritor::cantBloquesParaInodo(int numeroBloque)
{
    double fValue = numeroBloque*0.01;
    int cantBloque = 0;

    if (fValue - (int)fValue > 0.0)
        cantBloque = (numeroBloque*0.01)+1;
    else
        cantBloque = (numeroBloque*0.01);

    return cantBloque;
}

void FantEscritor::crearMiINodo(char* path, int cantBloques, int tamanioBloque)
{
    out.open(path,ios::in|ios::binary);
    out.seekp(3*tamanioBloque);

    int inodosPorBloque = tamanioBloque/sizeof(INodo);
    char* memblock = (char*)calloc(1,tamanioBloque);

    INodo* nodo = new INodo[inodosPorBloque];
    memcpy(memblock, nodo, sizeof(INodo));

    for (int x=0; x<cantBloques; ++x)
        out.write(memblock, tamanioBloque);

    out.close();

    delete []memblock;
    delete []nodo;
}

void FantEscritor::actualizarEspacio(char* path, int cantDeBloquesUsados, int tamanioBloque)
{
    SuperBlock* superblock = lectores->leerMiSuperBlock(path, tamanioBloque);
    superblock->actualizarEspacioLibre(cantDeBloquesUsados);
    escribirEnSuperBlock(path, superblock, tamanioBloque);
}

void FantEscritor::crearMiBitmap(char* path, int numeroBloques, int tamanioBloques)
{
    Bitmap* bitmap = new Bitmap();
    bitmap->setBitmap(numeroBloques);
    bitmap->apagarBloque(cantBloquesParaInodo(numeroBloques)+3);
    escribirEnBitmap(path, bitmap, tamanioBloques);
}

void FantEscritor::crearMiDisco(int numeroBloque, char particion, char* NombreDisco, int tamanioBloque, char* path)
{
    out.open(path,ios::out|ios::binary|ios::app);
    char* bloqueMemoria = (char*)calloc(1,tamanioBloque);

    int contador = 0;

    while (contador<(numeroBloque*tamanioBloque))
    {
        out.write(bloqueMemoria, tamanioBloque);
        contador += tamanioBloque;
    }

    delete []bloqueMemoria;
    out.close();

    crearMiSuperBlock(particion, NombreDisco, numeroBloque, tamanioBloque, path);
    crearMiBitmap(path, numeroBloque, tamanioBloque);

    crearMiINodoTabla(path, ((tamanioBloque/sizeof(INodo)*cantBloquesParaInodo(numeroBloque))), tamanioBloque);
    crearMiINodo(path, cantBloquesParaInodo(numeroBloque), tamanioBloque);

    actualizarEspacio(path, cantBloquesParaInodo(numeroBloque)+3, tamanioBloque);
}
