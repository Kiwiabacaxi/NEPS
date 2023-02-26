/*  
    @autor: Kiwiabacaxi
    @data: 20/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro
*/

#include <stdlib.h>
#include <stdio.h>

/* 
https://neps.academy/br/exercise/241
Campo Minado

Leonardo é um garoto fascinado por jogos de tabuleiro. Nas férias de janeiro, ele aprendeu um jogo chamado Campo minado, 
que é jogado em um tabuleiro com N células dispostas na horizontal. O objetivo desse jogo é determinar, para cada célula do tabuleiro, 
o número de minas explosivas nos arredores da mesma (que são a própria célula e as células imediatamente vizinhas à direita e à esquerda, caso essas existam). 
Por exemplo, a figura abaixo ilustra uma possível configuração de um tabuleiro com 5 células:
01101

A primeira célula não possui nenhuma mina explosiva, mas é vizinha de uma célula que possui uma mina explosiva. 
Nos arredores da segunda célula temos duas minas, e o mesmo acontece para a terceira e quarta células; 
a quinta célula só tem uma mina explosiva em seus arredores. 
A próxima figura ilustra a resposta para esse caso.
12221

Leonardo sabe que você participa da OBI e resolveu lhe pedir para escrever um programa de computador que, dado um tabuleiro, 
imprima o número de minas na vizinhança de cada posição. 
Assim, ele poderá conferir as centenas de tabuleiros que resolveu durante as férias.

Entrada
A primeira linha da entrada contém um inteiro N indicando o número de células no tabuleiro. O tabuleiro é dado nas próximas NN linhas. 
A i-ésima linha seguinte contém 0 se não existe mina na i-ésima célula do tabuleiro e 1 se existe uma mina na i-ésima célula do tabuleiro.

Saída
A saída é composta por N linhas. 
A i-ésima linha da saída contém o número de minas explosivas nos arredores da i-ésima célula do tabuleiro. 
*/

int main (){

    int i, j, n, minas, vizinhos;
    int tabuleiro[100];
    int resposta[100];

    // zerar os tabuleiros
    for (i = 0; i < 100; i++){
        tabuleiro[i] = 0;
        resposta[i] = 0;
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &tabuleiro[i]);
    }

    // contar o numero de minas e armazenar na resposta
    

    return 0;
}