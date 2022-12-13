#ifndef VECTORENTERO_H
#define VECTORENTERO_H

#include <iostream>

using namespace std;

class VectorEntero
{
    private:
        int     *vec;
        int     cantElem;

    public:
        VectorEntero(const int *vec = NULL, int cantElem = 0);
        ~VectorEntero();
        friend ostream& operator << (ostream &sal, const VectorEntero &obj);
        VectorEntero& agregar(const int *vec, int cantElem);
        VectorEntero& operator = (const VectorEntero &obj);
        VectorEntero operator + (const VectorEntero &obj);
};

#endif // VECTORENTERO_H
