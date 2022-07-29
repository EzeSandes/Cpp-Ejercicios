#include <iostream>

using namespace std;

class Racional
{
    private:
        int     numerador,
                denominador;
    public:
        Racional();
        Racional(int numerador, int denominador);

        Racional mostrarRacional() const;
        Racional& simplificar();
        double real() const;

    friend ostream& operator << (ostream &sal, const Racional &obj);
    friend istream& operator >> (istream &ent, Racional &obj);
};
