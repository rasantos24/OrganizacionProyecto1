#ifndef INODO_H
#define INODO_H

#include <string.h>

class INodo
{
public:
    INodo();
    void setInodo(int sizeSong, char* album, char* artista, int tamanioBloques);
    int sizeSong;

    char album[30];
    char artista[30];

    int bloquesUsados;
    int directB[10];

    int indirectosSimples;
    int indirectosDobles;
};

#endif // INODE_H
