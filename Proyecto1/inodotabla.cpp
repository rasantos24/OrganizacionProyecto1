#include "inodotabla.h"

INodoTabla::INodoTabla()
{
    INodo = 0;
    disponible = true;
}


void INodoTabla::actualizarINodoTabla(char *nombre, int INodo, bool disponible)
{
    strcpy(this->nombre, nombre);
    this->INodo = INodo;
    this->disponible = disponible;
}
