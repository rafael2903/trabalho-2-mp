# Trabalho 2 - Conversão de números romanos - MP

- Para rodar o programa, utilize o comando "make" dentro do diretório src
- Para rodar o programa, juntamente com os programas de verificação, utilize o comando "make verify" dentro do diretório src

## Documentação dos testes

- O TEST_CASE "Algarismo romano" foi implementado para verificar se a função auxiliar "converter_algarismo" funciona corretamente, convertendo os algarismos básicos I, V, X, L, C, D e M em inteiros.

- O TEST_CASE "Numeros romanos de um algarismo" foi implementado para verificar se a função "romanos_para_decimal" funciona corretamente para números com somente um algarismo, utilizando a função auxiliar que já foi testada.

- Igualmente, o TEST_CASE "Numeros romanos de dois algarismos" foi implementado para verificar se a função "romanos_para_decimal" funciona corretamente para números com somente dois algarismos, mostrando que a soma ou subtração dos algarismos estava ou não funcionando.

- De mesmo modo, o TEST_CASE "Numeros romanos de tres algarismos" foi implementado para verificar se a função "romanos_para_decimal" funciona corretamente para números com somente tres algarismos.

- Por fim, no TEST_CASE "Numeros invalidos", temos testes mais específicos, para verificar se cada uma das condições estabelecidas no trabalho e no sistema de numeração romano foram respeitadas. A seguir, tem-se uma análise mais detalhada de cada teste do TEST_CASE:

    - O teste "AAA" verifica se só estão sendo aceitos os algarismos romanos.
    - O teste "xx" verifica se só estão sendo aceitos os algarismos romanos em letras maiúsculas.
    - O teste "MMMI" verifica se só estão sendo aceitos números até 3000.
    - O teste "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" verifica se só estão sendo aceitas strings de até 30 caracteres.
    
    - O teste "IC" verifica se a regra "A letra I é utilizada somente antes do I, V, e do X" está sendo cumprida.
    - O teste "XD" verifica se a regra "A letra X é utilizada somente antes do I, V, X, L e do C" está sendo cumprida.
    - O teste "VV" verifica se a regra "As letras V, L e D não podem ser repetidas" está sendo cumprida.
    - O teste "XXXX" verifica se a regra "As letras I, X, C e M são agrupadas somente seguidas por três vezes" está sendo cumprida.
