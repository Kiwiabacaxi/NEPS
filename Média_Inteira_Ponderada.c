/*  
    @autor: Kiwiabacaxi
    @data: 22/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>

/* 
https://neps.academy/br/exercise/137

Faça um programa para ler dois valores inteiros A e B e imprima a média ponderada dos dois valores. O peso de A é 4 e o peso de B é 6.

Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro A e a segunda linha contém o inteiro B.

Saída
A saída consiste de uma linha contendo a média ponderada (apenas a parte inteira) dos dois valores. 
*/

int main (){

    int a, b, media;

    // Entrada
    scanf("%d", &a);
    scanf("%d", &b);

    // Processamento
    media = (a * 4 + b * 6) / 10;

    // Saída
    printf("%d\n", media);
    
    return 0;
}