#include "discoduro.h"

DiscoDuro::DiscoDuro()
{

}

DiscoDuro::~DiscoDuro()
{

}

int DiscoDuro::getDisponibleBloque()
{
    for(int x=0; x<disco.CantBloque; x++)
    {
        if(iNodoTabla[x].dispo == true)
            return x;
    }
    return -1;
}

void DiscoDuro::iniciarBitMap(int taman)
{
    bitmap = new char[taman];
    for(int x=0; x<taman; x++)
        bitmap[x]='0';
}

void DiscoDuro::crearDisco(string nombreDisco, int tamaDisco, int tamaBloque, char partiD)
{
    string nombre = nombreDisco+"("+partiD+")";
    ofstream dd(nombre.c_str(), ios::binary | ios::app | ios::ate);

    strcpy(disco.nombreDelDisco, nombreDisco.c_str());
    disco.tamaBloque = tamaBloque;

    disco.CantBloque = tamaDisco/512;
    disco.particionDelDisco = partiD;

    disco.tama = tamaDisco;
    disco.espacioUsado = 0;

    int num = tamaDisco/512;
    bloques = new char[disco.CantBloque];

    iniciarBitMap(disco.CantBloque);
    dd.write((char*)&disco,sizeof(disco));

    dd.close();
}

void DiscoDuro::pintarBitMap()
{
    for(int x=0; x<disco.CantBloque; x++)
        cout<<bitmap[x]<<endl;
}
