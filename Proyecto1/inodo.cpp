#include "inodo.h"

INodo::INodo()
{

}

void INodo::setInodo(int sizeSong, char *album, char *artista, int tamanioBloques)
{
    this->sizeSong=sizeSong;

    strcpy(this->album, album);
    strcpy(this->artista, artista);

    if(sizeSong%tamanioBloques == 0)
        bloquesUsados = sizeSong/tamanioBloques;
    else
        bloquesUsados = (sizeSong/tamanioBloques)+1;
}
