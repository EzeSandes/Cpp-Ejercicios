#include <iostream>

using namespace std;

class Cadena
{
    private:
        char    *cad;

    public:
        Cadena();
        ~Cadena();
        Cadena(const char *cad);
        Cadena(char *c);
        Cadena(const Cadena &obj);
        Cadena(const string &str);


        // OPERATORS
        Cadena& operator = (const Cadena &obj);
        Cadena& operator += (const Cadena &obj);
        int operator == (const Cadena &obj);

        // FRIENDS
        friend ostream& operator << (ostream& sal, const Cadena &cad);
        friend istream& operator >> (istream& ent, Cadena &cad);
};
