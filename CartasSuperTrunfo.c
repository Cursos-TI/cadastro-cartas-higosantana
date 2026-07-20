#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Carta 1

    char estado1; //Declara variavel estado carta 1
    char codigo1[4]; //Declara variavel codigo da carta 1
    char cidade1[50]; //Declara Nome da cidade da carta 1
    int populacao1; //Declara tamanho população da carta 1
    float area1; //Declara Área territorial em Km² da carta 1
    float pib1; //Declara PIB da carta 1
    int pontos1; //Declara pontos turísticos da carta 1


  //Carta 2

    char estado2; //Declara variavel estado carta 2
    char codigo2[4]; //Declara variavel codigo da carta 2
    char cidade2[50]; //Declara variavel cidade da carta 2
    int populacao2; //Declara variavel populacao da carta 2
    float area2; //Declara variavel Área territorial em Km² da carta 2
    float pib2; //Declara variavel PIB da carta 2
    int pontos2; //Declara variavel pontos turísticos da carta 2


  // Área para entrada de dados

    //Entrada Carta 1

    printf("Insira os dados da Carta1\n"); //Indica na tela para inserir dados da Carta 1

    printf("Digite a letra do Estado da Carta1: "); //Pede ao usuario que digite a letra do Estado da Carta1
    scanf(" %c", &estado1); //Captura dados inseridos do Estado da Carta 1

    printf("Digite o Codigo da Carta 1: "); //Pede ao usuario que digite o codigo da Carta 1
    scanf("%s", codigo1); //Captura dados inseridos do codigo da Carta 1

    printf("Digite o nome da Cidade da Carta 1: "); //Pede ao usuario que digite o nome da cidade da Carta 1
    scanf(" %[^\n]", cidade1); //Captura dados inseridos do nome da cidade da Carta 1

    printf("Digite o tamanho da populacao da Carta 1: "); //Pede ao usuario que digite a população da Carta 1
    scanf("%d", &populacao1); //Captura dados inseridos da população da Carta 1

    printf("Digite a Area (km²) da Carta 1: "); //Pede ao usuario que digite a area em Km² da Carta 1
    scanf("%f", &area1); //Captura dados inseridos da area em Km² da Carta 1

    printf("Digite o PIB (bilhoes) da Carta 1: "); //Pede ao usuario que digite o PIB da Carta 1
    scanf("%f", &pib1); //Captura dados inseridos do PIB da Carta 1

    printf("Digite o numero de pontos turisticos da Carta 1: "); //Pede ao usuario que digite os pontos turisticos da Carta 1
    scanf("%d", &pontos1); //Captura dados inseridos dos pontos turisticos da Carta 1

    // Entrada Carta 2
    printf("Insira os dados da Carta 2\n"); //Indica na tela para inserir dados da Carta 2

    printf("Digite a letra do Estado da Carta 2: "); //Pede ao usuario que digite o Estado da Carta 2
    scanf(" %c", &estado2); //Captura dados inseridos do Estado da Carta 2

    printf("Digite o Codigo da Carta 2: "); //Pede ao usuario que digite o codigo da Carta 2
    scanf("%s", codigo2); //Captura dados inseridos do codigo da Carta 2

    printf("Digite o nome da Cidade da Carta 2: "); //Pede ao usuario que digite o nome da cidade da Carta 2
    scanf(" %[^\n]", cidade2); //Captura dados inseridos nome da cidade da Carta 2

    printf("Digite o tamanho da populacao da Carta 2: "); //Pede ao usuario que digite a população da Carta 2
    scanf("%d", &populacao2); //Captura dados inseridos da população da Carta 2

    printf("Digite a Area (km²) da Carta 2: "); //Pede ao usuario que digite a area em Km² da Carta 2
    scanf("%f", &area2); //Captura dados inseridos da area em Km² da Carta 2

    printf("Digite o PIB (bilhoes) da Carta 2: "); //Pede ao usuario que digite o PIB da Carta 2
    scanf("%f", &pib2); //Captura dados inseridos do PIB da Carta 2

    printf("Digite o numero de pontos turisticos da Carta 2: "); //Pede que o usuario digite os pontos turisticos da Carta 2
    scanf("%d", &pontos2); //Captura dados inseridos dos pontos turisticos da Carta 2

    
  // Área para exibição dos dados da cidade

    printf("\nCarta 1\n"); //Exibe na tela dados Carta 1
    printf("Estado: %c\n", estado1); //Exibe na tela dados do Estado da Carta 1
    printf("Codigo: %s\n", codigo1); //Exibe na tela dados do codigo da Carta 1
    printf("Nome da Cidade: %s\n", cidade1); //Exibe na tela dados nome da cidade Carta 1
    printf("Populacao: %d\n", populacao1); //Exibe na tela dados da população da Carta 1
    printf("Area: %.2f km²\n", area1); //Exibe na tela dados da area em Km² da Carta 1
    printf("PIB: %.2f bilhões de reais\n", pib1); //Exibe na tela dados do PIB da Carta 1
    printf("Numero de Pontos Turisticos: %d\n", pontos1); //Exibe dados na tela dos pontos turisticos da Carta 1

    printf("\nCarta 2\n"); //Exibe na tela dados da Carta 2
    printf("Estado: %c\n", estado2); //Exibe na tela dados do estado da Carta 2
    printf("Codigo: %s\n", codigo2); //Exibe na tela dados do codigo da Carta 2
    printf("Nome da Cidade: %s\n", cidade2); //Exibe na tela dados do nome da cidade da Carta 2
    printf("Populacao: %d\n", populacao2); //Exibe na tela dados da população da Carta 2
    printf("Area: %.2f km²\n", area2); //Exibe na tela dados da area em Km² da Carta 2
    printf("PIB: %.2f bilhões de reais\n", pib2); //Exibe na tela dados do PIB da Carta 2
    printf("Numero de Pontos Turisticos: %d\n", pontos2); //Exibe na tela dados dos pontos turisticos da Carta 2

    return 0;
}