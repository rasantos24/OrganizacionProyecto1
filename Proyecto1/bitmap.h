#ifndef BITMAP_H
#define BITMAP_H

class Bitmap
{
public:
    Bitmap();

    int tamanio;
    char* bitmap;

    void setBitmap(int cantBloques);
    void apagarBloque(int cantBloques);
    void apagarBit(int numeroBit);

    int obtenerBloquesD();
    int obtenerTodosMisBloquesD();
};

#endif // BITMAP_H
