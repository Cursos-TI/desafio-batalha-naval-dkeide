#include <stdio.h>

int main() {
    char tabela[10][10];
    int i, j;

    // Inicializando a tabela com '0' (representando água ou espaço vazio)
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabela[i][j] = '0';
        }
    }
    // Posicionando os 6 navios nas diagonais (representados por '3')
    tabela[0][0] = '3';  // Navio na posição A1
    tabela[1][1] = '3';  // Navio na posição B2
    tabela[2][2] = '3';  // Navio na posição C3

    tabela[0][9] = '3';  // Navio na posição A10
    tabela[1][8] = '3';  // Navio na posição B9
    tabela[2][7] = '3';  // Navio na posição C8

    // Imprimindo a tabela com letras nas linhas e números nas colunas
    printf("   ");
    for(i = 1; i <= 10; i++) {
        printf("%d  ", i); // Cabeçalho das colunas
    }
    printf("\n");

    for(i = 0; i < 10; i++) {
        printf("%c  ", 'A' + i); // Cabeçalho das linhas com letras
        for(j = 0; j < 10; j++) {
            printf("%c  ", tabela[i][j]); // Mostrando o conteúdo da célula
        }
        printf("\n");
    }

    return 0;
}