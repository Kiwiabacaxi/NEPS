/*  
    @autor: Kiwiabacaxi
    @data: 22/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>

/* 
https://neps.academy/br/exercise/158

Faça um programa para ler um inteiro N e imprima o valor de N!. N! significa fatorial de N.

Entrada
A entrada consiste de uma linha contendo o valor de N.

Saída
A saída consiste de uma linha contendo o valor de N!. 
*/

int main (){

    int n, fatorial;

    // Entrada
    scanf("%d", &n);

    // Processamento
    fatorial = 1;
    while (n > 0){
        fatorial *= n;
        n--;
    }

    // Saída
    printf("%d\n", fatorial);

    return 0;
}
