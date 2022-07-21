#ifndef HORA_H
#define HORA_H

#include <iostream>

using namespace std;

class Hora
{
    private:
        int     hora;
        int     minutos;
        int     segundos;

    public:
        Hora(int segundos = 0);
//        virtual ~Hora();

        friend ostream& operator << (ostream &sal, const Hora &obj);
        Hora operator + (const Hora &obj);
        Hora& operator ++ ();
};

#endif // HORA_H
