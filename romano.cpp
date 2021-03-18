// Copyright 2021 Rafael Rodrigues

#include "romano.hpp"

// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

int romanos_para_decimal(string num_romano) {
    int atual = 0;
    int anterior = 0;
    int acumulador = 0;

    int count1 = 0;
    int count10 = 0;
    int count100 = 0;
    int count1000 = 0;

    // A função deverá pegar uma string de tamanho até 30 caracteres
    if (num_romano.length() > 30)
        return -1;

    for (int i = num_romano.length() - 1; i >= 0; i--) {
        try {
            atual = converter_algarismo(num_romano[i]);
        }
        catch (invalid_argument &excecao) {
            return -1;
        }

        // A letra I é utilizada somente antes do I, V, e do X
        if (atual == 1 && anterior > 10)
            return -1;

        // A letra X é utilizada somente antes do I, V, X, L e do C
        if (atual == 10 && (anterior == 500 || anterior == 1000))
            return -1;

        // letras V, L e D não podem ser repetidas.
        if ((atual == 5 || atual == 50 || atual == 500) && atual == anterior)
            return -1;

        // As letras I, X, C e M são agrupadas somente seguidas por três vezes
        if (atual == 1)
            count1++;
        else
            count1 = 0;

        if (atual == 10)
            count10++;
        else
            count10 = 0;

        if (atual == 100)
            count100++;
        else
            count100 = 0;

        if (atual == 1000)
            count1000++;
        else
            count1000 = 0;

        if (count1 == 4 || count10 == 4 || count100 == 4 || count1000 == 4)
            return -1;

        if (atual < anterior)
        // Duas letras diferentes com o menor antes do maior, subtraem-se os seus valores.
            acumulador -= atual;
        else
        // Duas letras diferentes com o maior ou igual antes do menor, somam-se os seus valores.
            acumulador += atual;

        anterior = atual;
    }
    
    // O número em algarismos romanos poderá ser no máximo 3000
    if (acumulador > 3000)
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
