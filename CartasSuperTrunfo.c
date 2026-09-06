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
    float densidade1; //Dados densidade Populacional carta 1
    float pibpercapita1; //Dados PIB per Capita carta 1

  //Carta 2

    char estado2; //Declara variavel estado carta 2
    char codigo2[4]; //Declara variavel codigo da carta 2
    char cidade2[50]; //Declara variavel cidade da carta 2
    int populacao2; //Declara variavel populacao da carta 2
    float area2; //Declara variavel Área territorial em Km² da carta 2
    float pib2; //Declara variavel PIB da carta 2
    int pontos2; //Declara variavel pontos turísticos da carta 2
    float densidade2; //Dados densidade Populacional carta 2
    float pibpercapita2; //Dados PIB per Capita carta 2

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
    densidade1 = (float) populacao1 / area1; // Calcula Densidade Populacional Carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); //Exibe dados densidade populacional carta 1
    pibpercapita1 = (float) (pib1 * 1000000000.0) / populacao1; //Calcula PIB per capita carta 1
    printf("PIB per Capita: %.2f reais\n", pibpercapita1); // Exibe dados PIB per capita carta 1



    printf("\nCarta 2\n"); //Exibe na tela dados da Carta 2
    printf("Estado: %c\n", estado2); //Exibe na tela dados do estado da Carta 2
    printf("Codigo: %s\n", codigo2); //Exibe na tela dados do codigo da Carta 2
    printf("Nome da Cidade: %s\n", cidade2); //Exibe na tela dados do nome da cidade da Carta 2
    printf("Populacao: %d\n", populacao2); //Exibe na tela dados da população da Carta 2
    printf("Area: %.2f km²\n", area2); //Exibe na tela dados da area em Km² da Carta 2
    printf("PIB: %.2f bilhões de reais\n", pib2); //Exibe na tela dados do PIB da Carta 2
    printf("Numero de Pontos Turisticos: %d\n", pontos2); //Exibe na tela dados dos pontos turisticos da Carta 2
    densidade2 = (float) populacao2 / area2; // Calcula Densidade Populacional Carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); //Exibe dados densidade populacional carta 2
    pibpercapita2 = (float) (pib2 * 1000000000.0) / populacao2; //Calcula PIB per capita carta 2
    printf("PIB per Capita: %.2f reais\n", pibpercapita2); // Exibe dados PIB per capita carta 2

    //Comparação das Cartas 1 e 2 + Qual Carta venceu!

    //Verifica condição População entre carta 1  e carta 2
    if(populacao1 > populacao2) {
        printf("A População da Carta 1 é maior que da Carta 2!\n");

    } else {
        printf("A População da Carta 1 é menor que da Carta 2!\n");
        
    }

    //Verifica Condição Area Territorial entre carta1 e carta 2
    if(area1 > area2) {
        printf("A Area da Carta 1 é maior que da Carta 2!\n");

    } else {
        printf("A Area da Carta 1 é menor que da Carta 2!\n");
        
    }
    //Verifica Condição PIB entre carta 1 e carta 2
     if(pib1 > pib2) {
        printf("O PIB da Carta 1 é maior que da Carta 2!\n");

    } else {
        printf("O PIB da Carta 1 é menor que da Carta 2!\n");
        
    }
    //Verifica Condição pontos turisticos entre carta 1 e carta 2
     if(pontos1 > pontos2) {
        printf("Carta 1 tem mais pontos turisticos que Carta 2!\n");

    } else {
        printf("Carta 1 tem menos pontos turisticos que Carta 2!\n");
        
    }

    //Verifica condição de todos os atributos, exceto densidade populacional, a carta que tiver maior valor ganha
     if(populacao1 > populacao2, area1 > area2, pib1 > pib2, pontos1 > pontos2) {
        printf("A Carta 1 venceu a Carta 2!\n");

    } else {
        printf("Carta 2 venceu Carta 1!\n");
        
    }

    // Verifica condição entre densidade populacional
     if(densidade1 < densidade2) {
        printf("A Carta1 Venceu!");
        
    } else {
        printf("Menor Densidade populacional: A Carta 2 Venceu"); //Exibe carta ganhadora densidade populacional
        
    }

    return 0;
}