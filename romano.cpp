// Copyright 2021 Rafael Rodrigues

#include "romano.hpp"

// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
int romanos_para_decimal(string num_romano) {
    int acumulador = 0;
    int atual = 0;
    int anterior = 0;

    for (int i = num_romano.length() - 1; i >= 0; i--) {
        try {
            atual = converter_algarismo(num_romano[i]);
        }
        catch (...) {
            return -1;
        }

        if (atual < anterior)
            acumulador -= atual;
        else
            acumulador += atual;

        anterior = atual;
    }

    if (acumulador >= 3000)
        return -1;
    else
        return acumulador;
}

int converter_algarismo(char algarismo) {
    switch (algarismo) {
        case 'I': return 1;
            break;
        case 'V': return 5;
            break;
        case 'X': return 10;
            break;
        case 'L': return 50;
            break;
        case 'C': return 100;
            break;
        case 'D': return 500;
            break;
        case 'M': return 1000;
            break;
        default: throw invalid_argument("Argumento invalido.");
    }
}
