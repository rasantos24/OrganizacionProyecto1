#ifndef BLOQUESDIRECTOS_H
#define BLOQUESDIRECTOS_H


class bloquesDirectos
{
public:
    bloquesDirectos()
    {

    }
    int bloque[10];
};

class indirectoSimple
{ public:
    indirectoSimple()
    {

    }

    bloquesDirectos bloque1[10];

};

class IndirectoDoble
{ public:
    IndirectoDoble()
    {

    }

    indirectoSimple bloque2[10];
};

class IndirectoTriple
{ public:
    IndirectoTriple()
    {

    }

    IndirectoDoble bloque3[10];
};

#endif // BLOQUESDIRECTOS_H
