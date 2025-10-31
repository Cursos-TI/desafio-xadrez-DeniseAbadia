#include <stdio.h>

// Recursividade - funções recursivas
void MoverTorre (int casas) {
    if (casas > 0) {
        printf ("Direita \n");
        MoverTorre (casas - 1);
    }
}

void MoverBispo (int casas) {
    if (casas > 0) {
        printf ("Cima, Direita \n");
        MoverBispo (casas - 1);
    }
}

void MoverRainha (int casas) {
    if (casas > 0) {
        printf ("Esquerda \n");
        MoverRainha (casas -1);
    }
}

int main () {
    // Declaração das variáveis
    int movTorre = 5, movBispo = 5, movRainha = 8, movCavalo = 3;

    // Movimentação das peças de xadrez

    // Movimentação da torre por recursividade
    printf ("Movimento da peça: *Torre* \n"); // A torre move-se em linha reta horizontal ou vertical
    // Deve-se mover a torre 5 casas para a direita
        MoverTorre (movTorre);
    
    printf ("\n");

    // Movimentação do bispo por recursividade
    printf ("Movimento da peça: *Bispo* (RECURSIVIDADE) \n"); // O Bispo move-se na diagonal
    // Deve-se mover o bispo 5 casas na diagonal para cima e à direita
        MoverBispo (movBispo);

    printf ("\n");

    // Movimentação do bispo por loops aninhados
    printf ("Movimento da peça: *Bispo* (LOOPS ANINHADOS) \n"); // O Bispo move-se na diagonal
    // Deve-se mover o bispo 5 casas na diagonal para cima e à direita
        for (int CasaVertical = 0; CasaVertical < movBispo; CasaVertical++) {
            for (int CasaHorizontal = 0; CasaHorizontal < 1; CasaHorizontal++) {
                printf ("Cima, Direita \n");
            }
        }
        
    printf ("\n");
    
    // Movimentação da rainha por recursividade
    printf ("Movimento da peça: *Rainha* \n"); // A Rainha move-se em todas as direções
    // Deve-se mover a rainha 8 casas para a esquerda
        MoverRainha (movRainha);

    printf ("\n");

    // Movimentação do cavalo por loops complexos
    printf ("Movimento da peça: *Cavalo* \n"); // O Cavalo move-se em L, 2 casas horizontal ou vertical e 1 casa perpendicular
    // Deve-se mover o cavalo 2 casas para cima e 1 casa para a direita
        for (int casa = 1; casa <= movCavalo; casa++) {
            if (casa <= 2) {
                printf ("Cima \n");
                continue;
            }

            if (casa == 3) {
                printf ("Direita \n");
                break;
            }    
        }

    printf ("\n");
    
    
    return 0;
}