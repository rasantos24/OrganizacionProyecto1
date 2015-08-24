#ifndef DISCODURO_H
#define DISCODURO_H
#include <fstream>
#include <string>
#include <string.h>
#include<iostream>

using namespace std;

struct superBlock
{
    char particionDelDisco;
    char nombreDelDisco[25];

    int tama;
    int espacioUsado;

    int tamaBloque;
    int CantBloque;
};

struct iNodo
{
    char perms[2];
    char fechaC[10];

    char fechaM[10];
    int bloqueUsado;

    int indirectoSimple;
    int tamaIN;
};

struct iNodes
{
    char nombre[30];
    int iNodo;
    bool dispo;
};

class DiscoDuro
{
public:
    DiscoDuro();

    void crearDisco(string nombreDisco, int tamaDisco, int tamaBloque, char partiD);
    void escribirDisco(char* nombre);

    void tamaDisco(string nombre);
    void iniciarBitMap(int taman);

    void pintarBitMap();
    superBlock disco;

    iNodes iNodoTabla[100];
    iNodo iNodos[100];

    char* bloques;
    int getDisponibleINodo();

    int getDisponibleBloque();
    int getHabilitar();

    char* bitmap;
    void escribir(char* buffer, int posBuffer, int tama, ofstream escribirDS);

    ~DiscoDuro();
};

#endif // DISCODURO_H
