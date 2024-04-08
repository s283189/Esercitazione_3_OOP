#pragma once

#include <string>

class NumeroComplesso
{
private:
    double reale;
    double immaginario;

public:
    // Costruttore
    NumeroComplesso(double re, double im);

    // Metodo per ottenere la rappresentazione del numero complesso come stringa
    std::string rappresentazione() const;

    // Operatore di somma
    NumeroComplesso operator+(const NumeroComplesso& altro) const;

    // Operatore di confronto ==
    bool operator==(const NumeroComplesso& altro) const;

    // Funzione per calcolare il coniugato
    NumeroComplesso coniugato() const;
};


