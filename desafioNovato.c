#include <stdio.h>

int main() {
    // ==========================================
    // 1. CADASTRO DA CARTA 1
    // ==========================================
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "Sáo Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;       // em km²
    float pib1 = 828.98;         // em bilhões de reais
    int pontos_turisticos1 = 50;

    // ==========================================
    // 2. CADASTRO DA CARTA 2
    // ==========================================
    char estado2[] = "RJ";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;       // em km²
    float pib2 = 354.57;         // em bilhões de reais
    int pontos_turisticos2 = 35;

    // ==========================================
    // 3. CÁLCULOS DOS ATRIBUTOS DERIVADOS
    // ==========================================
    // Densidade Populacional = População / Área
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // PIB per capita = PIB / População
    // Multiplicamos o PIB por 1.000.000.000 caso ele esteja representado em bilhões,
    // garantindo que o valor final reflita a moeda real por habitante.
    float pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;
    float pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;


    // ==========================================
    // 4. EXIBIÇÃO DOS DADOS CADASTRADOS
    // ==========================================
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("  Código: %s\n", codigo1);
    printf("  População: %d\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per Capita: R$ %.2f\n\n", pib_per_capita1);

    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("  Código: %s\n", codigo2);
    printf("  População: %d\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita: R$ %.2f\n\n", pib_per_capita2);


    // ==========================================
    // 5. COMPARAÇÃO E DETERMINAÇÃO DA VENCEDORA
    // ==========================================
    // Atributo escolhido para este teste: População (Maior valor vence)
    printf("=== COMPARAÇÃO DE CARTAS (Atributo: População) ===\n\n");
    
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Estrutura de decisão para verificar quem tem a maior população
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}