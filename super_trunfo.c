/// Desafio Cartas Super Trunfo - Feito por Francisco Dias - 050525
/// Ciência da Computação - Intro a Prog. Ling. C

#include <stdio.h>
#include <locale.h>
void main() {

    setlocale(LC_ALL, "Portuguese")
    /// Início: Declaração de variáveis para a Carta 1 e 2 juntas:
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    /// Inserção de dados p/ CARTA 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1); 

    printf("População: ");
    scanf("%i", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontosTuristicos1);

    printf("\n");

    /// Inserção de dados p/ CARTA 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2); // Leitura simplificada da string

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontosTuristicos2);

    printf("\n");

    /// Mostra os dados CARTA1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);
    printf("\n");

    /// Mostra os dados CARTA2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    printf("\n");
    printf("Fim do Programa.");

}   
///OBS: fiz com void main () ao invés de int main () para não precisar dar o return no final. E também porque aprendi com void main, mas acredito que o mais correto seria int main().
