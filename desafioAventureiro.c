#include <stdio.h>

int main() {
    // ---- CADASTRO PRÉVIO DAS CARTAS (Nível Aventureiro) ----
    
    // Dados da Carta 1
    char pais1[50] = "Brasil";
    int populacao1 = 214300000;
    float area1 = 8515767.0;
    float pib1 = 1.61; // Representado em trilhões
    int pontos_turisticos1 = 32;
    float densidade1 = 25.16; // População dividida pela área

    // Dados da Carta 2
    char pais2[50] = "Argentina";
    int populacao2 = 46200000;
    float area2 = 2780400.0;
    float pib2 = 0.63; // Representado em trilhões
    int pontos_turisticos2 = 20;
    float densidade2 = 16.61; // População dividida pela área

    int opcao;

    // ---- MENU INTERATIVO ----
    printf("=== SUPER TRUNFO: PAÍSES ===\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a sua opcao (1-5): ");
    scanf("%d", &opcao);

    printf("\n========================================\n");

    // ---- ESTRUTURA SWITCH PARA O MENU E COMPARAÇÃO ----
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);

            // Estrutura aninhada: if-else dentro de if-else (Maior valor vence)
            if (populacao1 > populacao2) {
                printf("Resultado: %s Venceu!\n", pais1);
            } else {
                if (populacao1 < populacao2) {
                    printf("Resultado: %s Venceu!\n", pais2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            // Estrutura aninhada (Maior valor vence)
            if (area1 > area2) {
                printf("Resultado: %s Venceu!\n", pais1);
            } else {
                if (area1 < area2) {
                    printf("Resultado: %s Venceu!\n", pais2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f trilhoes de USD\n", pais1, pib1);
            printf("%s: %.2f trilhoes de USD\n", pais2, pib2);

            // Estrutura aninhada (Maior valor vence)
            if (pib1 > pib2) {
                printf("Resultado: %s Venceu!\n", pais1);
            } else {
                if (pib1 < pib2) {
                    printf("Resultado: %s Venceu!\n", pais2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos\n", pais1, pontos_turisticos1);
            printf("%s: %d pontos\n", pais2, pontos_turisticos2);

            // Estrutura aninhada (Maior valor vence)
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s Venceu!\n", pais1);
            } else {
                if (pontos_turisticos1 < pontos_turisticos2) {
                    printf("Resultado: %s Venceu!\n", pais2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            // REGRA INVERTIDA: Na Densidade Demográfica, o MENOR valor vence!
            if (densidade1 < densidade2) {
                printf("Resultado: %s Venceu!\n", pais1);
            } else {
                if (densidade1 > densidade2) {
                    printf("Resultado: %s Venceu!\n", pais2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default:
            // Tratamento de segurança para opções inválidas
            printf("Opcao invalida! Por favor, execute o programa novamente e escolha de 1 a 5.\n");
            break;
    }

    printf("========================================\n");

    return 0;
}
