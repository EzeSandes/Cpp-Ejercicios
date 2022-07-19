#include <iostream>

using namespace std;

class Circulo
{
    private:
        float   radio;

    public:
        Circulo(float radio = 0);
        Circulo& operator = (float num);
        Circulo& operator -- ();
        float perimetro() const;
        float area() const;
        friend ostream& operator << (ostream &sal, const Circulo &obj);
};
