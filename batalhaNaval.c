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
    // Posicionando os 6 navios (representados por '3')
    tabela[2][3] = '3';  // Navio na posição C4
    tabela[2][4] = '3';  // Navio na posição C5
    tabela[2][5] = '3';  // Navio na posição C6

    tabela[6][8] = '3';  // Navio na posição G9
    tabela[7][8] = '3';  // Navio na posição H9
    tabela[8][8] = '3';  // Navio na posição I9

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