#include "ComplexNumber.hpp"
#include <iostream>
#include <sstream>

// Implementazione del costruttore
NumeroComplesso::NumeroComplesso(double re, double im) : reale(re), immaginario(im) {}

// Metodo per ottenere la rappresentazione del numero complesso come stringa
std::string NumeroComplesso::rappresentazione() const {
    std::ostringstream oss;
    oss << reale;
    if (immaginario >= 0)
        oss << "+";
    oss << immaginario << "i";
    return oss.str();
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
