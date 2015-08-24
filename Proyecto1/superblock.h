#ifndef SUPERBLOCK_H
#define SUPERBLOCK_H

#include <string.h>
#include <iostream>

using namespace std;
class SuperBlock
{
public:
    SuperBlock();
    void setSuperBlock(char particion, char* NombreDisco, int numeroDeBloques, int tamanioDeBloques);
    void actualizarEspacioLibre(int bloquesUsados);

    int getEspacioLibre();
    int espacioLibre;

    char NombreDisco[30];
    char Particion;

    int tamanioDeBloques;
    int numeroDeBloques;
};

#endif // SUPERBLOCK_H
