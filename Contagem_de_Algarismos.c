/*  
    @autor: Kiwiabacaxi
    @data: 22/06/2022
    @instituição: IFTM - Instituto Federal do Triângulo Mineiro 
*/

#include <stdlib.h>
#include <stdio.h>

/*
https://neps.academy/br/exercise/189

Faça um programa para ler um inteiro N, depois X inteiros positivos. 
Imprima a quantidade de cada algarismo que apareceu nos X números lidos.

Entrada
A entrada consiste de múltiplas linhas. 
A primeira linha contém um inteiro N representando a quantidade de número que serão fornecidos. 
Então seguirão N números inteiros.

Saída
A saída consiste de 10 linhas, cada linha contém um algarismo e o número de ocorrências desse algarismo.
*/

int main (){

    int i, j, n, numero, contador;
    char algarismo;

    // Entrada
    scanf("%d", &n);

    int numeros[n];

    for(i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
        
    }

    // Processamento
    // contar ocorrências de cada algarismo
    for(i = 0; i < 10; i++){
        contador = 0;
        for(j = 0; j < n; j++){                 // percorre todos os números
            numero = numeros[j];                // pega o número atual
            while(numero > 0){                  // enquanto o número for maior que 0
                algarismo = numero % 10 + '0';  // pega o algarismo atual
                if(algarismo == i + '0'){       // se o algarismo for o mesmo que o algarismo atual
                    contador++;                 // incrementa o contador

                }
                numero /= 10;                    // divide o número por 10

            }
            
        }
        printf("%d - %d\n", i, contador);        // imprime o algarismo e o número de ocorrências
    
    }

    return 0;
}