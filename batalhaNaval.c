#include <stdio.c>

int main() {
    //Tabuleiro 5x5 para o nivel novato
    int tabuleiro[5][5] = {0};

    // Posicionamento novaios
    // Navio horizontal em (1,1), (1,2), (1,3)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Navio vertical em (3,1), (4,1)
    tabuleiro [3][1] = 3;
    tabuleiro [4][1] = 3;

    //Exibindo as coordenadas dos navios
    prinf("Navio horizontal em: (1,1), (1,2), (1,3)\n");
    printf("Navio vertical em: (3,1), (4,1)\n");

    //Exibindo o tabuleiro
    for (int i=0; i <5; i++) {
        for (int j = 0; j <5; j++){
            printf("%d ", tabuleiro[i][j]);     
        }
        printf ("\n");
    }

    return 0;
}