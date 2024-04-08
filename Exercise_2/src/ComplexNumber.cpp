#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

// Implementazione del costruttore
NumeroComplesso::NumeroComplesso(double re, double im) : reale(re), immaginario(im) {}

// Implementazione del metodo per stampare il numero complesso
void NumeroComplesso::stampa() const
{
    cout << reale;
    if (immaginario >= 0)
        cout << "+";
    cout << immaginario << "i";
}

// Implementazione dell'operatore di somma
NumeroComplesso NumeroComplesso::operator+(const NumeroComplesso& altro) const
{
    return NumeroComplesso(reale + altro.reale, immaginario + altro.immaginario);
}

// Implementazione dell'operatore di confronto ==
bool NumeroComplesso::operator==(const NumeroComplesso& altro) const
{
    return (reale == altro.reale && immaginario == altro.immaginario);
}

// Implementazione della funzione per calcolare il coniugato
NumeroComplesso NumeroComplesso::coniugato() const
{
    return NumeroComplesso(reale, -immaginario);
}
