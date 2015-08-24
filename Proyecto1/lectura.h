#ifndef LECTURA_H
#define LECTURA_H

#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "bitmap.h"
#include "superblock.h"
#include "inodotabla.h"
#include "inodo.h"

using namespace std;
class Lectura
{
public:
    Lectura();
    SuperBlock* leerMiSuperBlock(char* path, int tamanioBloque);
    Bitmap* leerMiBitmap(char* path, int tamanioBloque);
    int getTamanoBloque(char* path);
    ifstream in;
};

#endif // LECTURA_H
