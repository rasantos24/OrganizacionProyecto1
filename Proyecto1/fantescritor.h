#ifndef FANTESCRITOR_H
#define FANTESCRITOR_H

#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "bitmap.h"
#include "superblock.h"
#include "inodotabla.h"
#include "inodo.h"
#include "lectura.h"

using namespace std;
class FantEscritor
{
public:
    FantEscritor();
    void crearMiDisco(int numeroBloque, char particion, char* NombreDisco, int tamanioBloque, char* path);
    void crearMiSuperBlock(char particion, char* nombreDisco, int numeroBloques, int tamanioBloques, char* path);

    void escribirEnSuperBlock(char* path, SuperBlock* superBlock, int tamanioBloques);
    void crearMiBitmap(char* path, int numeroBloques, int tamanioBloques);

    void escribirEnBitmap(char* path, Bitmap* bitmap, int tamanioBloques);
    void crearMiINodoTabla(char* path, int numeroInode, int tamanioBloque);

    void escribirEnINodoTabla(char* path, INodoTabla* table, int tamanioBloque);
    void crearMiINodo(char* path, int cantBloques, int tamanioBloque);

    void actualizarEspacio(char* path, int cantBloquesUsados, int tamanioBloque);
    int cantBloquesParaInodo(int numeroBloque);

    ofstream out;
    Lectura*lectores;

};

#endif // FANTESCRITOR_H
