#include "Hora.h"

/*
Como es una clase estatica que no tiene atributos que utilizan memoria dinamica => no es necesario el constructor
por copia, el destructor y el desarrollo del operator "="
*/

Hora::Hora(int segundos)
{
    segundos %= 60 * 60 * 24; // Segundos restantes

    this->hora = segundos / 3600;
    this->minutos = (segundos % 3600) / 60;
    this->segundos = (segundos % 3600) % 60;
}

//Hora::~Hora()
//{
//    //dtor
//}

////////////////////////////////////

ostream& operator << (ostream &sal, const Hora &obj)
{
    return sal << obj.hora << ":" << obj.minutos << ":" << obj.segundos;
}

////////////////////////////////////

Hora Hora :: operator + (const Hora &obj)
{
    int segTotal = (this->hora + obj.hora) * 3600 +
                    (this->minutos + obj.minutos) * 60 +
                    this->segundos + obj.segundos;

    return Hora(segTotal);
}

////////////////////////////////////

Hora& Hora :: operator ++ ()
{
//    Hora aux(this->hora * 3600 + this->minutos * 60 + this->segundos + 1);

//    *this = aux;
    return *this = Hora(this->hora * 3600 + this->minutos * 60 + this->segundos + 1);
}

////////////////////////////////////
