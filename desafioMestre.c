#include <stdio.h>

int main() {
    // ---- CADASTRO PRÉVIO DAS CARTAS ----
    char pais1[50] = "Brasil";
    int populacao1 = 214300000;
    double area1 = 8515767.0;
    double pib1 = 1.61; // Em trilhões
    int pontos_turisticos1 = 32;
    double densidade1 = 25.16;

    char pais2[50] = "Argentina";
    int populacao2 = 46200000;
    double area2 = 2780400.0;
    double pib2 = 0.63; // Em trilhões
    int pontos_turisticos2 = 20;
    double densidade2 = 16.61;

    // Variáveis de controle do jogo
    int opcao1, opcao2;
    double val1_c1, val1_c2;
    double val2_c1, val2_c2;
    char *nome_attr1, *nome_attr2;

    // ---- MENU 1: PRIMEIRO ATRIBUTO ----
    printf("=== SUPER TRUNFO: PRIMEIRO ATRIBUTO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o primeiro atributo (1-5): ");
    scanf("%d", &opcao1);

    // Configura as variáveis baseadas na primeira escolha
    switch (opcao1) {
        case 1:
            val1_c1 = populacao1; val1_c2 = populacao2; nome_attr1 = "Populacao"; break;
        case 2:
            val1_c1 = area1; val1_c2 = area2; nome_attr1 = "Area"; break;
        case 3:
            val1_c1 = pib1; val1_c2 = pib2; nome_attr1 = "PIB"; break;
        case 4:
            val1_c1 = pontos_turisticos1; val1_c2 = pontos_turisticos2; nome_attr1 = "Pontos Turisticos"; break;
        case 5:
            val1_c1 = densidade1; val1_c2 = densidade2; nome_attr1 = "Densidade Demografica"; break;
        default:
            printf("Opcao invalida! O jogo foi encerrado.\n");
            return 0;
    }

    // ---- MENU 2: SEGUNDO ATRIBUTO (DINÂMICO) ----
    printf("\n=== SUPER TRUNFO: SEGUNDO ATRIBUTO ===\n");
    // O atributo escolhido anteriormente NÃO aparece na lista abaixo
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Numero de Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    printf("Escolha o segundo atributo (1-5): ");
    scanf("%d", &opcao2);

    // Validação de segurança: impede escolher o mesmo atributo ou número inválido
    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5) {
        printf("Erro: Opcao indisponivel ou repetida! O jogo foi encerrado.\n");
        return 0;
    }

    // Configura as variáveis baseadas na segunda escolha
    switch (opcao2) {
        case 1:
            val2_c1 = populacao1; val2_c2 = populacao2; nome_attr2 = "Populacao"; break;
        case 2:
            val2_c1 = area1; val2_c2 = area2; nome_attr2 = "Area"; break;
        case 3:
            val2_c1 = pib1; val2_c2 = pib2; nome_attr2 = "PIB"; break;
        case 4:
            val2_c1 = pontos_turisticos1; val2_c2 = pontos_turisticos2; nome_attr2 = "Pontos Turisticos"; break;
        case 5:
            val2_c1 = densidade1; val2_c2 = densidade2; nome_attr2 = "Densidade Demografica"; break;
        default:
            printf("Opcao invalida! O jogo foi encerrado.\n");
            return 0;
    }

    // ---- PROCESSAMENTO E EXIBIÇÃO DOS RESULTADOS ----
    printf("\n================ CONFRONTO ================\n");
    printf("Cartas: %s VS %s\n\n", pais1, pais2);

    // 1. Comparação do Atributo 1 (if-else aninhado)
    printf("Atributo 1: %s\n", nome_attr1);
    printf("- %s: %.2f\n", pais1, val1_c1);
    printf("- %s: %.2f\n", pais2, val1_c2);
    
    if (opcao1 == 5) { // Regra invertida para Densidade
        if (val1_c1 < val1_c2) {
            printf("Vencedor no atributo 1: %s\n", pais1);
        } else {
            if (val1_c1 > val1_c2) {
                printf("Vencedor no atributo 1: %s\n", pais2);
            } else {
                printf("Vencedor no atributo 1: Empate!\n");
            }
        }
    } else { // Regra padrão (maior vence)
        if (val1_c1 > val1_c2) {
            printf("Vencedor no atributo 1: %s\n", pais1);
        } else {
            if (val1_c1 < val1_c2) {
                printf("Vencedor no atributo 1: %s\n", pais2);
            } else {
                printf("Vencedor no atributo 1: Empate!\n");
            }
        }
    }

    printf("\n");

    // 2. Comparação do Atributo 2 (if-else aninhado)
    printf("Atributo 2: %s\n", nome_attr2);
    printf("- %s: %.2f\n", pais1, val2_c1);
    printf("- %s: %.2f\n", pais2, val2_c2);
    
    if (opcao2 == 5) { // Regra invertida para Densidade
        if (val2_c1 < val2_c2) {
            printf("Vencedor no atributo 2: %s\n", pais1);
        } else {
            if (val2_c1 > val2_c2) {
                printf("Vencedor no atributo 2: %s\n", pais2);
            } else {
                printf("Vencedor no atributo 2: Empate!\n");
            }
        }
    } else { // Regra padrão (maior vence)
        if (val2_c1 > val2_c2) {
            printf("Vencedor no atributo 2: %s\n", pais1);
        } else {
            if (val2_c1 < val2_c2) {
                printf("Vencedor no atributo 2: %s\n", pais2);
            } else {
                printf("Vencedor no atributo 2: Empate!\n");
            }
        }
    }

    // 3. Soma dos Atributos e Resultado Final
    printf("\n================ TOTALIZAÇÃO ================\n");
    double soma1 = val1_c1 + val2_c1;
    double soma2 = val1_c2 + val2_c2;

    printf("Soma dos atributos de %s: %.2f\n", pais1, soma1);
    printf("Soma dos atributos de %s: %.2f\n", pais2, soma2);

    // Uso do Operador Ternário para decidir o resultado de forma elegante
    printf("\nRESULTADO FINAL DA RODADA: ");
    (soma1 == soma2) ? printf("Empate!\n") : printf("%s venceu a rodada pela maior soma!\n", (soma1 > soma2) ? pais1 : pais2);
    printf("=============================================\n");

    return 0;
}
