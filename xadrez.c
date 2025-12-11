#include <stdio.h>

// Requisitos Funcionais: Entrada de Dados usando Constantes
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// Nomenclatura das direções (Requisito de Saída de Dados)
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
// Diagonal Superior Direita = CIMA + DIREITA

/**
 * @brief Simula a movimentação das peças Bispo, Torre e Rainha utilizando
 * diferentes estruturas de repetição (for, while, do-while).
 *
 * O objetivo é fornecer blocos de código com loops para avaliação de desempenho
 * e limites de utilização do código dentro do jogo MateCheck.
 *
 * Requisitos:
 * - Uso de #define para constantes de movimento e direção.
 * - Utilização de for, while e do-while.
 * - Saída de dados clara com as direções especificadas.
 * - Código bem documentado e manutenível.
 */
int main() {
    // ----------------------------------------------------
    // 1. Movimentação do BISPO (5 casas na Diagonal Superior Direita)
    // Estrutura de Repetição: FOR
    // Condição do Bispo: printf com combinação de direções básicas.
    // ----------------------------------------------------
    printf("==========================================\n");
    printf("1. SIMULAÇÃO DE MOVIMENTO DO BISPO (FOR)\n");
    printf("==========================================\n");

    int i; // Variável de controle para o loop for

    // Loop for: Executa a movimentação 5 vezes
    for (i = 1; i <= MOVIMENTO_BISPO; i++) {
        // Saída de Dados: Exibe a direção conforme a regra do Bispo
        printf("Casa %d: ", i);

        // Requisito Funcional: Condição de movimentação do Bispo
        // "Utilizamos o comando printf e, em seu valor, colocamos a direção
        // usando a combinação de direções básicas."
        printf(CIMA);     // Cima
        printf(DIREITA);  // Direita
    }
    printf("\n");

    // ----------------------------------------------------
    // 2. Movimentação da TORRE (5 casas para a Direita)
    // Estrutura de Repetição: WHILE
    // ----------------------------------------------------
    printf("==========================================\n");
    printf("2. SIMULAÇÃO DE MOVIMENTO DA TORRE (WHILE)\n");
    printf("==========================================\n");

    int casas_torre = 1; // Variável de controle para o loop while

    // Loop while: Continua enquanto o número de casas for menor ou igual ao movimento máximo
    while (casas_torre <= MOVIMENTO_TORRE) {
        printf("Casa %d: ", casas_torre);

        // Saída de Dados: Exibe a direção "Direita"
        printf(DIREITA);

        // Manutenibilidade: Atualiza a variável de controle para evitar loop infinito
        casas_torre++;
    }
    printf("\n");

    // ----------------------------------------------------
    // 3. Movimentação da RAINHA (8 casas para a Esquerda)
    // Estrutura de Repetição: DO-WHILE
    // ----------------------------------------------------
    printf("===========================================\n");
    printf("3. SIMULAÇÃO DE MOVIMENTO DA RAINHA (DO-WHILE)\n");
    printf("===========================================\n");

    int casas_rainha = 1; // Variável de controle para o loop do-while

    // Loop do-while: Garante que o bloco de código seja executado pelo menos uma vez,
    // então verifica a condição.
    do {
        printf("Casa %d: ", casas_rainha);

        // Saída de Dados: Exibe a direção "Esquerda"
        printf(ESQUERDA);

        // Atualiza a variável de controle
        casas_rainha++;

    } while (casas_rainha <= MOVIMENTO_RAINHA); // Condição para continuar o loop
                                               // (enquanto não atingir 8 casas)
    printf("\n");

    printf("Avaliação de Desempenho Concluída. Blocos de Código Enviados.\n");

    return 0; // Indica que o programa terminou com sucesso
}