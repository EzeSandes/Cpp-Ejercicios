#include <string.h>
#include "Cadena.h"

Cadena::Cadena()
{
    this->cad = new char[1];
    this->cad[0] = '\0';
    // *this->cad = '\0';
}

Cadena::~Cadena()
{
    delete [] this->cad;
}

Cadena :: Cadena(const char *cad)
{
    this->cad = new char[strlen(cad + 1)];
    strcpy(this->cad, cad);
}

Cadena :: Cadena(char *c)
{
    this->cad = c;
}

Cadena :: Cadena(const Cadena &obj)
{
    this->cad = new char[strlen(obj.cad) + 1];
    strcpy(this->cad, obj.cad);
}

Cadena :: Cadena(const string &str)
{
    this->cad = new char[str.length() + 1];
    strcpy(this->cad, str.c_str());
}
/////////////////

Cadena& Cadena :: operator = (const Cadena &obj)
{
    size_t nuevaLong = strlen(obj.cad);

    if(nuevaLong != strlen(this->cad))
    {
        delete [] this->cad;
        this->cad = new char [nuevaLong + 1];
    }

    strcpy(this->cad, obj.cad);

    return *this;
}

///////

Cadena& Cadena :: operator += (const Cadena &obj)
{
    char *nuevaCad = new char[strlen(this->cad) + strlen(obj.cad) + 1];

    strcpy(nuevaCad, this->cad);
    strcat(nuevaCad, obj.cad);

    delete [] this->cad;
    this->cad = nuevaCad;

    return *this;
}

/////////

int Cadena :: operator == (const Cadena &obj)
{
    return strcmp(this->cad, obj.cad);
}

/////////

ostream& operator << (ostream& sal, const Cadena &cad)
{
    return sal << cad.cad;
}

istream& operator >> (istream& ent, Cadena &cad)
{

}
/////////
/////////
/////////
