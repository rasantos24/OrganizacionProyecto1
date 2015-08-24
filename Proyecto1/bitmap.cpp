#include "bitmap.h"

Bitmap::Bitmap()
{
    tamanio = 0;
}

void Bitmap::setBitmap(int cantBloques)
{
    if(cantBloques%8 == 0)
        tamanio = cantBloques/8;
    else
        tamanio = (cantBloques/8)+1;

    bitmap = new char[tamanio];

    for(int x=0; x<tamanio; x++)
    {
        for(int y=0; y<8; y++)
            bitmap[x]&=~(1 << y);
    }
}

int Bitmap::obtenerBloquesD()
{
    int disponibles = 0;

    for(int x=0; x<tamanio; x++)
    {
        for(int y=0; y<8; y++)
        {
            if(!(bitmap[x]&(1 << y)))
                return disponibles+1;
            disponibles++;
        }
    }

    return -1;
}

int Bitmap::obtenerTodosMisBloquesD()
{
    int bloques = 0;

    for(int x=0; x<tamanio; x++)
    {
        for(int y=0; y<8; y++)
        {
            if(!(bitmap[x]&(1 << y)))
                bloques++;
        }
    }

    return bloques;
}

void Bitmap::apagarBloque(int cantBloques)
{
    int limite = 0;
    int apagado = 0;
    if(cantBloques%8 == 0)
    {
        limite = cantBloques/8;
        for(int x=0; x<limite; x++)
        {
            for(int y=0; y<8; y++)
            {
                bitmap[x]^=(1 << y);
                apagado++;
            }
        }
    }
    else
    {
        limite = (cantBloques/8)+1;
        int residuo = (cantBloques%8);
        for(int x=0; x<limite; x++)
        {
            if(x == (limite-1))
            {
                for(int y=0; y<residuo; y++)
                {
                    bitmap[x]^=(1 << y);
                    apagado++;
                }
            }
            else
            {
                for(int y=0; y<8; y++)
                {
                    bitmap[x]^=(1 << y);
                    apagado++;
                }
            }
        }
    }
}

void Bitmap::apagarBit(int numeroBit)
{
    int index = 0;
    int bit = 0;
    if(numeroBit%8 == 0)
    {
        index = numeroBit/8;
        bitmap[index-1]^=(1<<7);
    }
    else
    {
        index = (numeroBit/8)+1;
        bit = (numeroBit%8)-1;
        bitmap[index-1]^=(1<<bit);
    }
}
