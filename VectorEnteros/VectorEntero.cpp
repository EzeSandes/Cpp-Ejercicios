#include "VectorEntero.h"

VectorEntero::VectorEntero(const int *vec, int cantElem)
{
    int i;

    this->cantElem = cantElem;
    this->vec = new int[cantElem];

    for(i = 0; i < cantElem; i++)
        this->vec[i] = vec[i];
}

VectorEntero::~VectorEntero()
{
    delete [] this->vec;
}

/////////////////////////////////////

ostream& operator << (ostream &sal, const VectorEntero &obj)
{
    int i;
    sal << '[';

    for(i = 0; i < obj.cantElem; i++)
        sal << obj.vec[i] << (i == obj.cantElem - 1 ? "" : ", ");

    sal << ']';

    return sal;
}

/////////////////////////////////////

VectorEntero& VectorEntero :: agregar(const int *vec, int cantElem)
{
    int i;

    if(this->vec != NULL)
        delete [] this->vec;

    this->vec = new int[cantElem];
    this->cantElem = cantElem;

    for(i = 0; i < cantElem; i++)
        this->vec[i] = vec[i];


    return *this;
}

/////////////////////////////////////

VectorEntero& VectorEntero :: operator = (const VectorEntero &obj)
{
    int i;


    if(this->vec == NULL || (this->vec != NULL && this->cantElem != obj.cantElem))
    {
        if(this->vec != NULL)
            delete [] this->vec;

        this->vec = new int[obj.cantElem];
    }

    this->cantElem = obj.cantElem;

    for(i = 0; i < obj.cantElem; i++)
        this->vec[i] = obj.vec[i];

    return *this;
}

/////////////////////////////////////

VectorEntero VectorEntero :: operator + (const VectorEntero &obj)
{
    int i;
    int *aux;

    if(obj.cantElem == 0)
        return VectorEntero(this->vec, this->cantElem);


    aux = new int[this->cantElem + obj.cantElem];

    for(i = 0; i < this->cantElem; i++)
        aux[i] = this->vec[i];


    int j;
    for(i = this->cantElem, j = 0; i < this->cantElem + obj.cantElem; i++, j++)
        aux[i] = obj.vec[j];


    return VectorEntero(aux, this->cantElem + obj.cantElem);
}

/////////////////////////////////////
