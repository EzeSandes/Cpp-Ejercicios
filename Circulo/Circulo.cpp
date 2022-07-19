#include "Circulo.h"

#define PI  3.14

Circulo::Circulo(float radio)
: radio(radio)
{}

///////////////////////////////////////

Circulo& Circulo :: operator = (float num)
{
    this->radio = num;

    return *this;
}

///////////////////////////////////////

Circulo& Circulo :: operator -- ()
{
    this->radio--;

    return *this;
}

///////////////////////////////////////

float Circulo :: perimetro() const
{
    return 2 * PI * this->radio;
}

///////////////////////////////////////

float Circulo :: area() const
{
    return PI * this->radio * this->radio;
}

///////////////////////////////////////

ostream& operator << (ostream &sal, const Circulo &obj)
{
    return sal << "Radio: " << obj.radio;
}

///////////////////////////////////////
