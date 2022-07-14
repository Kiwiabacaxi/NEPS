/*  
    @autor: Kiwiabacaxi
    @data: 20/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>

/* 
https://neps.academy/br/exercise/2
Medalhas
A natação foi um dos esportes mais emocionantes das Olimpíadas do Rio. 
Houve até uma prova na qual três atletas chegaram empatados, cada um recebendo uma medalha de prata! 
Normalmente, porém, os três primeiros colocados terminam a prova em tempos distintos e, portanto, 
temos a distribuição mais comum de medalhas: o nadador que terminou no menor tempo recebe medalha de ouro; 
o nadador que terminou com o segundo menor tempo recebe medalha de prata; 
e o que terminou com o terceiro menor tempo recebe medalha de bronze. 
Neste problema, dados os três tempos distintos de finalização da prova, dos três nadadores que ganharam medalhas, seu programa deve dizer quem ganhou medalha de ouro, quem ganhou prata e quem ganhou bronze.

Entrada
A primeira linha da entrada contém um inteiro T1 indicando o tempo em que o nadador 1 terminou a prova. 
A segunda linha da entrada contém um inteiro T2, indicando o tempo de finalização do nadador 2. 
Por fim, a terceira linha da entrada contém um inteiro T3, indicando o tempo em que o nadador 3 terminou a prova.

Saída
Seu programa deve imprimir três linhas na saída. 
A primeira linha deve conter o número do nadador que ganhou medalha de ouro; 
a segunda linha, o número do nadador que ganhou prata; e a terceira linha, o número do nadador que levou bronze. 
*/

int main (){

    int i, j, t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);

    int ouro, prata, bronze;
    int vetor[3] = {t1, t2, t3};

    // ordenando o vetor
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (vetor[i] < vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    // verificando ouro
    if (vetor[0] == t1){
        ouro = 1;
    } else if (vetor[0] == t2){
        ouro = 2;
    } else {
        ouro = 3;
    }

    // verificando prata
    if (vetor[1] == t1){
        prata = 1;
    } else if (vetor[1] == t2){
        prata = 2;
    } else {
        prata = 3;
    }

    // verificando bronze
    if (vetor[2] == t1){
        bronze = 1;
    } else if (vetor[2] == t2){
        bronze = 2;
    } else {
        bronze = 3;
    }

    printf("%d\n", ouro);
    printf("%d\n", prata);
    printf("%d\n", bronze);



    
    return 0;
}