#ifndef BATALHA_NAVAL_H
#define BATALHA_NAVAL_H

#define TAMANHO 10

void inicializarTabuleiro(char tabuleiro [TAMANHO][TAMANHO]);
void desenharTabuleiro(char tabuleiro[TAMANHO][TAMANHO]);
void posicionarNavio(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, char direcao);

#endif