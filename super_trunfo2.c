/*
Exercício 2 nível mestre Super Trunfo - Francisco Dias - 260525 - Estácio Ciências da Computação
*/


#include <stdio.h>

int main() {

    char estado1[3], estado2[3]; // sigla do estado
    char codigo1[4], codigo2[4]; // codigo cidade
    char nomeCidade1[50], nomeCidade2[50]; // nome da cidade
    int populacao1, populacao2; // populacao da cidade
    float area1, area2; // area total da cidade
    float pib1, pib2; // riqueza produzida pela cidade
    int pontosTuristicos1, pontosTuristicos2; // quantidade de pontos turisticos na cidade

    int vitorias1 = 0; // quantidade de vitorias carta 1
    int vitorias2 = 0; // quantidade de vitorias carta 2

    //entrada de dados - cadastro das cartas 1 e 2
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: RS): ");
    scanf("%s", estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%i", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%i", &pontosTuristicos1);
    printf("\n");

    printf("Cadastro da Carta 2:\n");
    printf("Estado (ex: SC): ");
    scanf("%s", estado2);
    printf("Codigo da Carta (ex: B01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%i", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%i", &pontosTuristicos2);
    printf("\n");

    // calculo da densidade, que é a populacao dividido pela area
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // calculo de pib por pessoa, per capita, dividindo pib total pela populacao da cidade
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // análise de dados
    printf("==== Comparacao dos Atributos ====\n");

    // Populacao
    if (populacao1 > populacao2) {
        printf("Populacao: %s venceu\n", nomeCidade1);
        vitorias1++;
    } else if (populacao2 > populacao1) {
        printf("Populacao: %s venceu\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("Populacao: Empate\n");
    }

    // Area
    if (area1 > area2) {
        printf("Area: %s venceu\n", nomeCidade1);
        vitorias1++;
    } else if (area2 > area1) {
        printf("Area: %s venceu\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("Area: Empate\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: %s venceu\n", nomeCidade1);
        vitorias1++;
    } else if (pib2 > pib1) {
        printf("PIB: %s venceu\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("PIB: Empate\n");
    }

    // Pontos Turisticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: %s venceu\n", nomeCidade1);
        vitorias1++;
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Pontos Turisticos: %s venceu\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("Pontos Turisticos: Empate\n");
    }

    // Densidade Populacional (neste quesito somente, o menor vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: %s venceu (menor densidade)\n", nomeCidade1);
        vitorias1++;
    } else if (densidade2 < densidade1) {
        printf("Densidade Populacional: %s venceu (menor densidade)\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("Densidade Populacional: Empate\n");
    }

    // PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: %s venceu\n", nomeCidade1);
        vitorias1++;
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("PIB per Capita: %s venceu\n", nomeCidade2);
        vitorias2++;
    } else {
        printf("PIB per Capita: Empate\n");
    }

    printf("\n==== Resultado Final ====\n");
    printf("%s venceu %d atributos.\n", nomeCidade1, vitorias1);
    printf("%s venceu %d atributos.\n", nomeCidade2, vitorias2);

    // análise de vitórias, quem tiver mais vitórias é declarado a carta (cidade) vencedora, ou empate.
    if (vitorias1 > vitorias2) {
        printf("Resultado: %s VENCEU NO GERAL!\n", nomeCidade1);
    } else if (vitorias2 > vitorias1) {
        printf("Resultado: %s VENCEU NO GERAL!\n", nomeCidade2);
    } else {
        printf("Resultado: EMPATE GERAL!\n");
    }

    return 0;
}
