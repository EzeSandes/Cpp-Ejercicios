#include <iostream>
#include "Circulo.h"

using namespace std;

int main()
{
    /*
    Si quiere puede hacer como ejercicio adicional el operator ">>"
    
    cout << "Ingrese el radio del circulo:" << endl;
    cin >> r;
    */
    Circulo  circ1(1);
    //Circulo  circ2();
    Circulo circ2;
    Circulo  circ3(circ1);
    
    circ1 = r; /// da valor al radio del circulo
    circ3 = -- circ1 ; ///decrementa el radio en una unidad
    
    cout << "El perimetro del circulo es:" << circ1.perimetro() << endl;       /// el perimetro del circulo es 2*pi*radio
    cout << "El area del circulo es:" << circ1.area() << endl;
                /// el area de un circulo es pi*radioalcuadrado

    cout << circ3.mostrar(); /// debe mostrar el lado del cuadrado.
    cout << circ1 << endl;
    cout << circ2 << endl;
    cout << circ3 << endl;

    return 0;
}
