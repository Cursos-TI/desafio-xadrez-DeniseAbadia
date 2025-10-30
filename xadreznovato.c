#include <stdio.h>

int main () {
    // Movimentação das peças de xadrez    
    int movTorre = 0, movBispo = 0, MovRainha = 0;

    printf ("Movimento da peça: *Torre* \n"); // A torre move-se em linha reta horizontal ou vertical
    // Deve-se mover a torre 5 casas para a direita
    while (movTorre < 5)
    {
        printf ("Direita \n");
        movTorre ++;
    }

    printf ("Movimento da peça: *Bispo* \n"); // O Bispo move-se na diagonal
    // Deve-se mover o bispo 5 casas na diagonal para cima e à direita
    do {
        printf ("Cima e Direita \n");
        movBispo ++;
    } while (movBispo < 5);
    
    printf ("Movimento da peça: *Rainha* \n"); // A Rainha move-se em todas as direções
    // Deve-se mover a rainha 8 casas para a esquerda
    for (MovRainha = 0; MovRainha < 8; MovRainha++)
    {
        printf ("Esquerda \n");
    }
    
    return 0;
}