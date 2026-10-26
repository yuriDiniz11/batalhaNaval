#include <stdio.h>
#include "batalha_naval.h"

//Função abaixo recebe como parâmetro a matriz bidimensional do tabuleiro;
//Dois loops for que percorrem toda a matriz;
//O 'i' controla as linhas e o 'j' controla as colunas (de 0 até 9);
//Em cada posição [i][j], é atribuido o caractere '~' (til), representando a água;
void inicializarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]){
    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            tabuleiro[i][j] = '~';
        }
    }
}
//Função abaixo é responsável por imprimir o tabuleiro no terminal;
//Imprime o cabeçalho superior do tabuleiro;
//Pula uma linha e da um pequeno espaço;
//Usa um loop for com tipo char para imprimir de A até J horizontalmente;
void desenharTabuleiro(char tabuleiro[TAMANHO][TAMANHO]){
    printf("\n   ");
    for(char c = 'A'; c < 'A' + TAMANHO; c++){
        printf("%c", c);
    }
    printf("\n");

    for(int i = 0; i < TAMANHO; i++){ //Loop externo percorre de 0 até 9 (TAMANHO = 10, mas o index de i  0 - 9);
        printf("%2d ", i + 1);        //Imprime o n° correspondente (de 1 a 10), com espaços de largura (%2d);
        for(int j = 0; j < TAMANHO; j++){   //Loop interno percorre cada coluna da linha especifica; 
            printf("%c ", tabuleiro[i][j]); //Imprimindo o char guardado na matriz (%c, que é o '~');
        }
        printf("\n");   //Quebra a linha;
    } 
    printf("\n");       //Quebra a linha;
}

void posicionarNavio(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna){
    if(linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO){
        tabuleiro[linha][coluna] = 'N';
    }
}
