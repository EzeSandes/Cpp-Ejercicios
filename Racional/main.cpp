#include <iostream>
#include "Racional.h"

using namespace std;

int main()
{
        //Parte A
    Racional r1;
    cout << "r1: " << r1.mostrarRacional() << endl;

    Racional r2(4,8);
    cout << "r2: " << r2.mostrarRacional() << endl;

    //Parte B:
    Racional r3(0,0); // Se podria crear una clase "Exception" para los errores(ej: dividir por cero)
    cout<< "r3: " << r3.mostrarRacional() << endl;
    Racional r4(3,0);
    cout << "r4: " << r4.mostrarRacional() << endl;
    Racional r5(-5,0);
    cout << "r5: " << r5.mostrarRacional() << endl;

    Racional r6(6, 12);
    cout << "r6: " << r6.mostrarRacional() << endl;
    cout << "r6(simplificar): " << r6.simplificar() << endl;
    cout << "r6(simplificar): " << r6.real() << endl;

//    cin >> r6;
//    cout << "r6: " << r6.mostrarRacional() << endl;

    return 0;
}
