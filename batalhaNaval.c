#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Variáveis de tamanho
    int TAM = 10;     // tamanho do tabuleiro
    int NAVIO = 3;    // tamanho dos navios

    // Declaração do tabuleiro
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Vetores dos navios
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    // Coordenadas iniciais
    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 1;

    // =========================
    // NAVIO HORIZONTAL
    // =========================
    if (colunaH + NAVIO <= TAM) {
        int sobreposicao = 0;

        for (int i = 0; i < NAVIO; i++) {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
                sobreposicao = 1;
            }
        }

        if (!sobreposicao) {
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
            }
        } else {
            printf("Erro: Navio horizontal sobrepoe outro!\n");
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites!\n");
    }

    // =========================
    // NAVIO VERTICAL
    // =========================
    if (linhaV + NAVIO <= TAM) {
        int sobreposicao = 0;

        for (int i = 0; i < NAVIO; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                sobreposicao = 1;
            }
        }

        if (!sobreposicao) {
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linhaV + i][colunaV] = navio_vertical[i];
            }
        } else {
            printf("Erro: Navio vertical sobrepoe outro!\n");
        }
    } else {
        printf("Erro: Navio vertical fora dos limites!\n");
    }

    // =========================
    // EXIBIÇÃO DO TABULEIRO
    // =========================
    printf("\nTabuleiro Batalha Naval:\n\n");

    // Letras no topo (A-J)
    printf("   ");
    for (int j = 0; j < TAM; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // Linhas com numeração
    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i + 1);

        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
