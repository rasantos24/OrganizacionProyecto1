#ifndef INODOTABLA_H
#define INODOTABLA_H

#include <iostream>
#include <string.h>

class INodoTabla
{
public:
    INodoTabla();
    char nombre[30];
    int INodo;
    bool disponible;
    void actualizarINodoTabla(char* nombre,int INodo, bool disponible);
};

#endif // INODETABLE_H
