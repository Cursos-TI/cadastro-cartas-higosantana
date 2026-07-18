#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado[1]; // Declara variavel estado
    char codigo[3]; //Declara variavel codigo da carta
    char cidade[50]; //Declara Nome da Cidade
    int populacao; //Declara tamanho População
    float area; //Declara Área territorial em Km/2
    float pib; //Declara PIB
    int pontos; //Declara pontos turísticos

  // Área para entrada de dados

    printf("Carta 1\n");
    
    printf("Digite a letra do Estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código do Estado: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Digite a Área territorial, \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turístico: \n");
    scanf("%d", &pontos);



  // Área para exibição dos dados da cidade

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área:%f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);



    return 0;
} 
