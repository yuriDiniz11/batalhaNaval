#include <stdio.h>
#include "batalha_naval.h"


int main (){
    //Declara na memória uma matriz de caracteres (meuTabuleiro);
    //de 10x10(definidas pela constante TAMANHO, criada no 'batalha_naval.h');
    char meuTabuleiro[TAMANHO][TAMANHO];   

    inicializarTabuleiro(meuTabuleiro);  //Chamando função - preenche a matriz com água (~);
    posicionarNavio(meuTabuleiro, 2, 2); 
    desenharTabuleiro(meuTabuleiro);     //Chamando função - desenha o tabuleiro pronto;
    

    return 0;
}