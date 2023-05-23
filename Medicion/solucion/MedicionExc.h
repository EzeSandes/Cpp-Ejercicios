#ifndef MEDICIONEXC_MEDICIONEXC
#define MEDICIONEXC_MEDICIONEXC

#include <iostream>

using namespace std;

class MedicionExc
{
    private:        string mensaje;

    public:
        MedicionExc(string mensaje = "ERROR Medicion") : mensaje(mensaje){};

};

#endif // MEDICIONEXC_MEDICIONEXC
