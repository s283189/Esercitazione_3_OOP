#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    // Creazione di due numeri complessi
    NumeroComplesso a(1, 2);
    NumeroComplesso b(1, -2);

    // Stampa dei numeri complessi
    cout << "Numero complesso a: " << a.rappresentazione() << endl;
    cout << "Numero complesso b: " << b.rappresentazione() << endl;

    // Somma dei numeri complessi
    NumeroComplesso somma = a + b;
    cout << "Somma di a e b: " << somma.rappresentazione() << endl;

    // Confronto tra i numeri complessi
    if (a == b)
    {
        cout << "I numeri complessi a e b sono uguali" << endl;
    }
    else
    {
        cout << "I numeri complessi a e b sono diversi" << endl;
    }

    // Calcolo dei coniugati
    NumeroComplesso coniugatoA = a.coniugato();
    NumeroComplesso coniugatoB = b.coniugato();
    cout << "Coniugato di a: " << coniugatoA.rappresentazione() << endl;
    cout << "Coniugato di b: " << coniugatoB.rappresentazione() << endl;

    return 0;
}
