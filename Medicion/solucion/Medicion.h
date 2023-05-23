#ifndef MEDICION_H
#define MEDICION_H

#include <iostream>

using namespace std;

class Medicion
{
    private:
        float   medicion;
        string  unidadDeMedida;

    public:
        Medicion(float medicion, string unidadDeMedida) :
            medicion(medicion), unidadDeMedida(unidadDeMedida){};

        Medicion operator + (const Medicion &obj);
        friend Medicion operator - (float num, const Medicion &obj);
        friend ostream& operator << (ostream &sal, const Medicion &obj);
};

#endif // MEDICION_H
