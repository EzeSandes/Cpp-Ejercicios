#include "Medicion.h"
#include "MedicionExc.h"

Medicion Medicion :: operator + (const Medicion &obj)
{
    if(this->unidadDeMedida != obj.unidadDeMedida)
        throw MedicionExc();

    return Medicion(obj.medicion + this->medicion, this->unidadDeMedida);
}

////////////////////////////

Medicion operator - (float num, const Medicion &obj)
{
    return Medicion(obj.medicion - num, obj.unidadDeMedida);
}

////////////////////////////

ostream& operator << (ostream &sal, const Medicion &obj)
{
    return sal << obj.medicion << " " << obj.unidadDeMedida;
}

////////////////////////////
////////////////////////////
