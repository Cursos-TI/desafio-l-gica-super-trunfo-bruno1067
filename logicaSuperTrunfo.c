#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>

    // SUPER TRUNFO - COMPARAÇÃO ENTRE 2 CARTAS

    // Declaração das variáveis da Carta 1
    char codigo1[10], estado1[30], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração das variáveis da Carta 2
    char codigo2[10], estado2[30], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Cadastro da Carta 1
    printf("Vamos cadastrar a primeira carta:\n");

    printf("Digite o codigo da carta: (ex: A01)\n");
    scanf(" %s", codigo1);

    printf("Digite o estado: (ex: RJ)\n");
    scanf(" %[^\n]", estado1);

    printf("Digite o nome da cidade: (ex: Rio de Janeiro)\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: (ex: 6000000)\n");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): (ex: 1200)\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): (ex: 359.6)\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: (ex: 14)\n");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade e PIB per Capita  da carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\nAgora vamos cadastrar a segunda carta:\n");

    printf("Digite o codigo da carta: (ex: B02)\n");
    scanf(" %s", codigo2);

    printf("Digite o estado: (ex: SP)\n");
    scanf(" %[^\n]", estado2);

    printf("Digite o nome da cidade: (ex: Sao Paulo)\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: (ex: 11500000)\n");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): (ex: 1500)\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): (ex: 828.98)\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: (ex: 22)\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade e PIB per Capita  da carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibindo as cartas
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    // Declarando variavel para atributo escolhido para comparação
    int atributo_escolhido;
    // Comparação por atributo da Carta
    printf("Digite a opcao correspondente ao atributo da carta que deseja comparar:\n");
    printf("Opções: 1 = Populacao, 2 = Area, 3 = PIB, 4 = Densidade, 5 = PIB per capita\n");
    scanf("%d", &atributo_escolhido);


    printf("\n--- RESULTADO DA COMPARACAO ---\n");

    if (atributo_escolhido == 1) {
        printf("Comparacao: Populacao\n");
        if (populacao1 > populacao2) {
            printf("Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
        } else if (populacao2 > populacao1) {
            printf("Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
        } else {
            printf("Empate!\n");
        }
    }

    else if (atributo_escolhido == 2) {
        printf("Comparacao: Area\n");
        if (area1 > area2) {
            printf("Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
        } else if (area2 > area1) {
            printf("Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
        } else {
            printf("Empate!\n");
        }
    }

    else if (atributo_escolhido == 3) {
        printf("Comparacao: PIB\n");
        if (pib1 > pib2) {
            printf("Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
        } else if (pib2 > pib1) {
            printf("Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
        } else {
            printf("Empate!\n");
        }
    }

    else if (atributo_escolhido == 4) {
        printf("Comparacao: Densidade Populacional (menor vence)\n");
        if (densidade1 < densidade2) {
            printf("Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
        } else if (densidade2 < densidade1) {
            printf("Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
        } else {
            printf("Empate!\n");
        }
    }

    else if (atributo_escolhido == 5) {
        printf("Comparacao: PIB per Capita\n");
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Carta 1 (%s - %s) venceu!\n", cidade1, estado1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Carta 2 (%s - %s) venceu!\n", cidade2, estado2);
        } else {
            printf("Empate!\n");
        }
    }

    printf("---------------------------------\n\n\n");

    return 0;
}
