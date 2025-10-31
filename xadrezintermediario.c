#include <stdio.h>

int main () {
    // Movimentação das peças de xadrez    
    int movTorre = 0, movBispo = 0, MovRainha = 0, MovCavalo = 1;

    printf ("Movimento da peça: *Torre* \n"); // A torre move-se em linha reta horizontal ou vertical
    // Deve-se mover a torre 5 casas para a direita
    while (movTorre < 5)
    {
        printf ("Direita \n");
        movTorre ++;
    }
    printf ("\n");

    printf ("Movimento da peça: *Bispo* \n"); // O Bispo move-se na diagonal
    // Deve-se mover o bispo 5 casas na diagonal para cima e à direita
    do {
        printf ("Cima e Direita \n");
        movBispo ++;
    } while (movBispo < 5);
    printf ("\n");
    
    printf ("Movimento da peça: *Rainha* \n"); // A Rainha move-se em todas as direções
    // Deve-se mover a rainha 8 casas para a esquerda
    for (MovRainha = 0; MovRainha < 8; MovRainha++)
    {
        printf ("Esquerda \n");
    }
    printf ("\n");
    
    printf ("Movimento da peça: *Cavalo* \n"); // O Cavalo move-se em L, 2 casas horizontal ou vertical e 1 casa perpendicular
    // Deve-se mover o cavalo 2 casas para baixo e 1 casa para a esquerda
    while (MovCavalo--) {
        for (int i = 0; i < 2; i++) {
            printf ("Baixo \n");
        }
        printf ("Esquerda \n");
    }
    printf ("\n");
    
    
    return 0;
}