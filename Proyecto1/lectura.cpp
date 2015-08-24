#include "lectura.h"

Lectura::Lectura()
{

}

SuperBlock *Lectura::leerMiSuperBlock(char *path, int tamanioBloque)
{
    in.open(path,ios::in|ios::binary);
    in.seekg(0);

    SuperBlock *superblock = new SuperBlock();
    char *bloqueMemoria = (char*)calloc(1,tamanioBloque);

    in.read(bloqueMemoria, tamanioBloque);
    in.close();

    memcpy(superblock, bloqueMemoria, sizeof(SuperBlock));
    delete []bloqueMemoria;

    return superblock;
}

Bitmap *Lectura::leerMiBitmap(char *path, int tamanioBloque)
{
    in.open(path,ios::in|ios::binary);
    in.seekg(tamanioBloque);

    char *bloqueMemoria=(char*)calloc(1,tamanioBloque);
    in.read(bloqueMemoria, tamanioBloque);

    in.close();
    Bitmap *bitmap = new Bitmap();

    memcpy(bitmap, bloqueMemoria, sizeof(Bitmap));
    delete []bloqueMemoria;

    return bitmap;
}

int Lectura::getTamanoBloque(char *path)
{
    in.open(path,ios::in|ios::binary);
    in.seekg(0);

    SuperBlock *superblock = new SuperBlock();
    in.read((char*)&superblock, sizeof(SuperBlock));

    in.close();
    return superblock->tamanioDeBloques;
}
