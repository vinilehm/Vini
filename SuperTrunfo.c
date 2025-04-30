#include <stdio.h>
#include <string.h>

int main() {
    printf("Super Trunfo\n");

    // Entrada de dados - Carta 1
    char estado1[127], carta1[127], cidade1[127];
    unsigned long int populacao1;
    float area1, pib1;
    int npt1;
    float densidade1, percapita1, superpoder1;

    printf("----------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Sua carta é de qual estado brasileiro?: ");
    scanf("%s", estado1);
    printf("Qual o código da sua carta?: ");
    scanf("%s", carta1);
    printf("Qual o nome da sua cidade?: ");
    scanf("%s", cidade1);
    printf("Qual a população da cidade?: ");
    scanf("%lu", &populacao1);
    printf("Qual a área aproximada desta cidade?: ");
    scanf("%f", &area1);
    printf("Qual o PIB respectivo desta cidade?: ");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos há nesta cidade?: ");
    scanf("%d", &npt1);
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + percapita1 + (1.0 / densidade1);

    // Entrada de dados - Carta 2
    char estado2[127], carta2[127], cidade2[127];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2, percapita2, superpoder2;

    printf("\n----------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Sua carta é de qual estado brasileiro?: ");
    scanf("%s", estado2);
    printf("Qual o código da sua carta?: ");
    scanf("%s", carta2);
    printf("Qual o nome da sua cidade?: ");
    scanf("%s", cidade2);
    printf("Qual a população da cidade?: ");
    scanf("%lu", &populacao2);
    printf("Qual a área aproximada desta cidade?: ");
    scanf("%f", &area2);
    printf("Qual o PIB respectivo desta cidade?: ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos há nesta cidade?: ");
    scanf("%d", &npt2);
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + percapita2 + (1.0 / densidade2);

    // Escolha dos atributos
    int escolha1 = 0, escolha2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica (MENOR vence)\n6 - PIB per capita\n7 - Super Poder\n");
    scanf("%d", &escolha1);

    do {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 7);

    printf("\n--- COMPARAÇÃO ---\n");
    printf("%s x %s\n", cidade1, cidade2);

    // Função de comparação por atributo 1
    printf("\nPrimeiro atributo: ");
    switch (escolha1) {
        case 1:
            printf("População: %lu x %lu\n", populacao1, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            printf("Pontos Turísticos: %d x %d\n", npt1, npt2);
            soma1 += npt1;
            soma2 += npt2;
            break;
        case 5:
            printf("Densidade: %.2f x %.2f\n", densidade1, densidade2);
            soma1 -= densidade1;  // menor é melhor
            soma2 -= densidade2;
            break;
        case 6:
            printf("PIB per capita: %.2f x %.2f\n", percapita1, percapita2);
            soma1 += percapita1;
            soma2 += percapita2;
            break;
        case 7:
            printf("Super Poder: %.2f x %.2f\n", superpoder1, superpoder2);
            soma1 += superpoder1;
            soma2 += superpoder2;
            break;
    }

    // Função de comparação por atributo 2
    printf("Segundo atributo: ");
    switch (escolha2) {
        case 1:
            printf("População: %lu x %lu\n", populacao1, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            printf("Pontos Turísticos: %d x %d\n", npt1, npt2);
            soma1 += npt1;
            soma2 += npt2;
            break;
        case 5:
            printf("Densidade: %.2f x %.2f\n", densidade1, densidade2);
            soma1 -= densidade1;  // menor é melhor
            soma2 -= densidade2;
            break;
        case 6:
            printf("PIB per capita: %.2f x %.2f\n", percapita1, percapita2);
            soma1 += percapita1;
            soma2 += percapita2;
            break;
        case 7:
            printf("Super Poder: %.2f x %.2f\n", superpoder1, superpoder2);
            soma1 += superpoder1;
            soma2 += superpoder2;
            break;
    }

    // Exibir soma total
    printf("\nSoma total ajustada dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado
    printf("\nResultado final:\n");
    if (soma1 > soma2)
        printf("Vencedor: %s\n", cidade1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}
