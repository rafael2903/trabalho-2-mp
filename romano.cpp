#include "romano.hpp"

// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
int romanos_para_decimal(string num_romano) {
    int acumulador = 0;
    int aux = 0;

    for (int i = 0; i < num_romano.length(); i++) {
        // try {
        //     converter_algarismo(num_romano[i]);
        // }
        // catch (...) {
        //     return -1;
        // }
    }

    return 1;
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