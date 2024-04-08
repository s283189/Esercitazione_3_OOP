#pragma once

class NumeroComplesso
{
private:
    double reale;
    double immaginario;

public:
    // Costruttore
    NumeroComplesso(double re, double im);

    // Metodo per stampare il numero complesso
    void stampa() const;

    // Operatore di somma
    NumeroComplesso operator+(const NumeroComplesso& altro) const;

    // Operatore di confronto ==
    bool operator==(const NumeroComplesso& altro) const;

    // Funzione per calcolare il coniugato
    NumeroComplesso coniugato() const;
};

