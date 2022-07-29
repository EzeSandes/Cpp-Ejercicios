#include "Racional.h"
#include <stdlib.h>


Racional::Racional()
{
    this->numerador = 1;
    this->denominador = 1;
}

Racional :: Racional(int numerador, int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador ? denominador : 1;
}

///////////////////////////////////////

ostream& operator << (ostream &sal, const Racional &obj)
{
//    return sal << (obj.numerador == 0) ? 0 : (obj.numerador << '/' << obj.denominador);
    return obj.numerador ? sal << obj.numerador << '/' << obj.denominador : sal << 0;
}

///////////////////////////////////////

Racional Racional :: mostrarRacional() const
{
    return *this;
}

///////////////////////////////////////

Racional& Racional :: simplificar()
{
    int i;
    int menor;

    menor = abs(this->denominador) < abs(this->numerador) ? abs(this->denominador) : abs(this->numerador);

    for(i = menor; i > 1; i--)
    {
        if(this->numerador % i == 0 && this->denominador % i == 0)
        {
            this->numerador /= i;
            this->denominador /= i;
        }
    }

    return *this;
}

///////////////////////////////////////

double Racional :: real() const
{
    return (double)this->numerador / this->denominador;
}

///////////////////////////////////////

istream& operator >> (istream &ent, Racional &obj)
{
    ent >> obj.numerador;
    ent >> obj.denominador;

    return ent;
}

///////////////////////////////////////
///////////////////////////////////////
