#include <iostream>
#include "Cadena.h"

using namespace std;

int main()
{
    Cadena cad1("Hola"), cad2("Hola");

    printf(cad1 == cad2 ? "No son iguales" : "Son iguales");

    cout << "\n\n" << endl;
    return 0;
}
