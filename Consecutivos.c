/*  
    @autor: Kiwiabacaxi
    @data: 14/07/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
https://neps.academy/br/exercise/110
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. 
O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. 
Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores.
30,30,30,30,40,40,40,40,40,30,30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. 
Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

Entrada
A primeira linha da entrada contém um inteiro N , o número de valores sorteados. A segunda linha contém N valores, v1,v2 ... vn.
, na ordem de sorteio, separados por um espaço em branco.

Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante. 
*/

int main (){
    int i, j, n;

    // entrada
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    // processamento
    int pontos = 0;
    int contador = 0;
    int maior = 0;
    
    // ler o vetor e contar o numero de pontos
    for (i = 0; i < n; i++){
        if (vetor[i] == vetor[i+1]){ // se o valor for igual ao proximo
            contador++;
            if (contador > maior){ // se o contador for maior que o maior
                maior = contador;
            }
        } else {
            contador = 0;
        }
    }

    pontos = maior; // atribuir o numero de pontos a variavel pontos
    printf("%d\n", pontos+1);


    return 0;
}