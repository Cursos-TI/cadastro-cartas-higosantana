#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

  // Área para entrada de dados

    //Entrada Carta 1

    printf("Insira os dados da Carta1\n");

    printf("Digite a letra do Estado da Carta1: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o tamanho da populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (km²) da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhoes) da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("Insira os dados da Carta 2\n");

    printf("Digite a letra do Estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o tamanho da populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (km²) da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhoes) da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos2);

    
  // Área para exibição dos dados da cidade

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
