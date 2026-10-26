#include <stdio.h>
#include "batalha_naval.h"


int main (){
    //Declara na memória uma matriz de caracteres (meuTabuleiro);
    //de 10x10(definidas pela constante TAMANHO, criada no 'batalha_naval.h');
    char meuTabuleiro[TAMANHO][TAMANHO];   

    inicializarTabuleiro(meuTabuleiro);  //Chamando função - preenche a matriz com água (~);
    
    //Posiciona uma frota predefinida de navios;
    posicionarNavio(meuTabuleiro, 1,  1, 3, 'H'); //Navio de tamanho 3 na horizontal (l 2, col B);
    posicionarNavio(meuTabuleiro, 4, 5, 4, 'V');  //Navio de tamanho 4 na vertical (l 5, col F);
    posicionarNavio(meuTabuleiro, 8, 2, 2, 'H');  //Navio de tamanho 2 na horizontal (l 9, col C); 
    
    desenharTabuleiro(meuTabuleiro);     //Chamando função - desenha o tabuleiro pronto;
    

    return 0;
}