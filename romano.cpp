#include "romano.hpp"

// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
int romanos_para_decimal(string num_romano) {
    int acumulador = 0;
    int aux = 0;

    // for (int i = 0; i < num_romano.length(); i++) {
        
    // }

    return 1;
}

int converter_algarismo(char algarismo) {
    if (algarismo == 'I')
        return 1;
    else if (algarismo == 'V')
        return 5;
    else if (algarismo == 'X')
        return 10;
    else if (algarismo == 'L')
        return 50;
    else if (algarismo == 'C')
        return 100;
    else if (algarismo == 'D')
        return 500;
    else if (algarismo == 'M')
        return 1000;
    else
        throw invalid_argument("Argumento invalido.");
}