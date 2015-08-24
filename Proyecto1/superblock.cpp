#include "superblock.h"

SuperBlock::SuperBlock()
{
    espacioLibre=0;
    tamanioDeBloques=0;
    numeroDeBloques=0;
}

void SuperBlock::setSuperBlock(char particion, char *NombreDisco, int numeroDeBloques, int tamanioDeBloques)
{
    this->Particion = particion;
    strcpy(this->NombreDisco, NombreDisco);

    this->numeroDeBloques = numeroDeBloques;
    this->tamanioDeBloques = tamanioDeBloques;
}

void SuperBlock::actualizarEspacioLibre(int bloquesUsados)
{
    this->espacioLibre += (bloquesUsados*this->tamanioDeBloques);
}

int SuperBlock::getEspacioLibre()
{
    return espacioLibre;
}
