#include <iostream>
#include "VectorEntero.h"

using namespace std;

int main()
{
    int ve1[] = {1,2,3,4,5,6,7,8};
    int ve2[] = {9,10,11,12,13};

    VectorEntero v1;
    VectorEntero v2(ve2, sizeof(ve2) / sizeof(ve2[0]));
    VectorEntero v3;

    cout << v1.agregar(ve1, sizeof(ve1) / sizeof(ve1[0])) << endl;

    v3 = v1 + v2;
    cout << v3 << endl;

    return 0;
}
