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
    unsigned long int populacao1; //Declara tamanho população da carta 1
    float area1; //Declara Área territorial em Km² da carta 1
    float pib1; //Declara PIB da carta 1
    int pontos1; //Declara pontos turísticos da carta 1
    float densidade1; //Dados densidade Populacional carta 1
    float pibpercapita1; //Declara Dados PIB per Capita carta 1
    float superpoder1; //Declara superpoder carta1 

  
    //Carta 2

    char estado2; //Declara variavel estado carta 2
    char codigo2[4]; //Declara variavel codigo da carta 2
    char cidade2[50]; //Declara variavel cidade da carta 2
    unsigned long int populacao2; //Declara variavel populacao da carta 2
    float area2; //Declara variavel Área territorial em Km² da carta 2
    float pib2; //Declara variavel PIB da carta 2
    int pontos2; //Declara variavel pontos turísticos da carta 2
    float densidade2; //Dados densidade Populacional carta 2
    float pibpercapita2; //Declara Dados PIB per Capita carta 2
    float superpoder2; //Declara superpoder carta 2

    // Área para entrada de dados

    //Entrada Carta 1
    printf("# # # # SUPER TRUNFO # # # \n");
    printf("Insira os dados da Carta1\n"); //Indica na tela para inserir dados da Carta 1

    printf("Digite a letra do Estado da Carta1: "); //Pede ao usuario que digite a letra do Estado da Carta1
    scanf(" %c", &estado1); //Captura dados inseridos do Estado da Carta 1

    printf("Digite o Codigo da Carta 1: "); //Pede ao usuario que digite o codigo da Carta 1
    scanf("%3s", codigo1); //Captura dados inseridos do codigo da Carta 1

    printf("Digite o nome da Cidade da Carta 1: "); //Pede ao usuario que digite o nome da cidade da Carta 1
    scanf(" %[^\n]", cidade1); //Captura dados inseridos do nome da cidade da Carta 1

    printf("Digite o tamanho da populacao da Carta 1: "); //Pede ao usuario que digite a população da Carta 1
    scanf("%lu", &populacao1); //Captura dados inseridos da população da Carta 1

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
    scanf("%3s", codigo2); //Captura dados inseridos do codigo da Carta 2

    printf("Digite o nome da Cidade da Carta 2: "); //Pede ao usuario que digite o nome da cidade da Carta 2
    scanf(" %[^\n]", cidade2); //Captura dados inseridos nome da cidade da Carta 2

    printf("Digite o tamanho da populacao da Carta 2: "); //Pede ao usuario que digite a população da Carta 2
    scanf("%lu", &populacao2); //Captura dados inseridos da população da Carta 2

    printf("Digite a Area (km²) da Carta 2: "); //Pede ao usuario que digite a area em Km² da Carta 2
    scanf("%f", &area2); //Captura dados inseridos da area em Km² da Carta 2

    printf("Digite o PIB (bilhoes) da Carta 2: "); //Pede ao usuario que digite o PIB da Carta 2
    scanf("%f", &pib2); //Captura dados inseridos do PIB da Carta 2

    printf("Digite o numero de pontos turisticos da Carta 2: "); //Pede que o usuario digite os pontos turisticos da Carta 2
    scanf("%d", &pontos2); //Captura dados inseridos dos pontos turisticos da Carta 2



    // Área para Calculo Resultado Super Poder

    densidade1 = (float) populacao1 / area1; //Calcula populacao carta 1 dividindo pela area da carta 1
    
    densidade2 = (float) populacao2 / area2; //Calcula populacao carta 2 dividindo pela area da carta 2
    
    pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1; //Calcula PIB per capita carta 1 - pib carta 1 dividindo pela populacao da carta 1
    
    pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1; //Calcula PIB per capita carta 2 - pib carta 2 dividindo pela populacao da carta 2
    
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibpercapita1 + (1.0f / densidade1); //Calcula Super poder Carta1
    
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibpercapita2 + (1.0f / densidade2); //Calcula Super poder Carta2

    
    // Área para exibição dos dados da cidade

    printf("\nCarta 1\n"); //Exibe na tela dados Carta 1
    printf("Estado: %c\n", estado1); //Exibe na tela dados do Estado da Carta 1
    printf("Codigo: %s\n", codigo1); //Exibe na tela dados do codigo da Carta 1
    printf("Nome da Cidade: %s\n", cidade1); //Exibe na tela dados nome da cidade Carta 1
    printf("Populacao: %ld\n", populacao1); //Exibe na tela dados da população da Carta 1
    printf("Area: %.2f km²\n", area1); //Exibe na tela dados da area em Km² da Carta 1
    printf("PIB: %.2f bilhões de reais\n", pib1); //Exibe na tela dados do PIB da Carta 1
    printf("Numero de Pontos Turisticos: %d\n", pontos1); //Exibe dados na tela dos pontos turisticos da Carta 1
    
    densidade1 = (float)populacao1 / area1; // Calcula Densidade Populacional Carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); //Exibe dados densidade populacional carta 1
    
    pibpercapita1 = (pib1 * 10000000000.0f) / (float)populacao1; //Calcula PIB per capita carta 1
    printf("PIB per Capita: %.2f reais\n", pibpercapita1); // Exibe dados PIB per capita carta 1

    printf("Super Poder Carta 1: %2f", superpoder1);

    printf("\nCarta 2\n"); //Exibe na tela dados da Carta 2
    printf("Estado: %c\n", estado2); //Exibe na tela dados do estado da Carta 2
    printf("Codigo: %s\n", codigo2); //Exibe na tela dados do codigo da Carta 2
    printf("Nome da Cidade: %s\n", cidade2); //Exibe na tela dados do nome da cidade da Carta 2
    printf("Populacao: %ld\n", populacao2); //Exibe na tela dados da população da Carta 2
    printf("Area: %.2f km²\n", area2); //Exibe na tela dados da area em Km² da Carta 2
    printf("PIB: %.2f bilhões de reais\n", pib2); //Exibe na tela dados do PIB da Carta 2
    printf("Numero de Pontos Turisticos: %d\n", pontos2); //Exibe na tela dados dos pontos turisticos da Carta 2
    
    densidade2 = (float)populacao2 / area2; // Calcula Densidade Populacional Carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); //Exibe dados densidade populacional carta 2
    
    pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2; //Calcula PIB per capita carta 2
    printf("PIB per Capita: %.2f reais\n", pibpercapita2); // Exibe dados PIB per capita carta 2

    printf("Super Poder Carta 2: %2f", superpoder2);



    //Comparação valores entre as Carta 1 e 2
    
    printf("####### COMPARANDO AS CARTAS #######\n"); 
    
    // População - MAIOR vence 
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2); 
    // Área - MAIOR vence 
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2); 
    // PIB - MAIOR vence 
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2); 
    // Pontos Turísticos - MAIOR vence 
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2); 
    // Densidade Populacional - MENOR vence 
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); 
    // PIB per Capita - MAIOR vence 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2); 
    // Super Poder - MAIOR vence 
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

  // MENU DE COMPARAÇÃO DAS CARTAS

    int opcao;

    
    printf("#######################\n");
    printf("###### COMPARAÇÃO DAS CARTAS #######\n");
    printf("\nEscolha um atributo para comparação\n");
    printf("1 - População \n");
    printf("2 - Aréa Territorial \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Populacional \n");
    printf("DIGITE A OPÇÃO \n");
    scanf("%d", &opcao);
    
  //USO SWITCH NAS CARTAS - LOGICA DE COMPARAÇÃO
  
    switch (opcao){
      // População
      case 1: 
      printf("COMPARANDO POPULAÇÃO ENTRES AS CARTAS:\n");
      printf("%s: %lu habitantes\n",cidade1, populacao1);
      printf("%s: %lu habitantes\n",cidade2, populacao2);
      if (populacao1 > populacao2) {
        printf("CARTA VENCEDORA!!: %s\n", cidade1);

      } else if (populacao2 > populacao1) {
        printf("CARTA VENCEDORA!!: %s\n", cidade2);
      } else {
        printf("HOUVE UM EMPATE\n");
      }
      break;

      // Area Territorial

      case 2: 
      printf("COMPARANDO AREA TERRITORIAL ENTRES AS CARTAS:\n");
      printf("%s: %2.f Km2\n",cidade1, area1);
      printf("%s: %2.f Km2\n",cidade2, area2);
      if (area1 > area2) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade1);

      } else if (area2 > area1) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade2);
      } else {
        printf("HOUVE UM EMPATE\n");
      }
      break;

      // PIB

      case 3: 
      printf("COMPARANDO PIB ENTRES AS CARTAS:\n");
      printf("%s: %2.f Bilhoes de Reais\n",cidade1, pib1);
      printf("%s: %2.f Bilhoes de Reais\n",cidade2, pib2);
      if (pib1 > pib2) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade1);

      } else if (pib2 > pib1) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade2);
      } else {
        printf("HOUVE UM EMPATE\n");
      }
      break;


      // PONTOS TURISTICOS

      case 4: 
      printf("COMPARANDO PONTOS TURISTICOS ENTRES AS CARTAS:\n");
      printf("%s: %d Pontos\n",cidade1, pontos1);
      printf("%s: %d Pontos\n",cidade2, pontos2);
      if (pontos1 > pontos2) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade1);

      } else if (pontos2 > pontos1) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade2);
      } else {
        printf("HOUVE UM EMPATE\n");
      }
      break;


      // DENSIDADE DEMOGRAFICA

      case 5: 
      printf("COMPARANDO DENSIDADE DEMOGRAFICA ENTRES AS CARTAS:\n");
      printf("%s: %2.f Habitantes Km2\n",cidade1, densidade1);
      printf("%s: %2.f Habitantes Km2\n",cidade2, densidade2);
      if (densidade1 < densidade2) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade1);

      } else if (densidade2 < densidade1) {
        printf("CIDADE VENCEDORA!!: %s\n", cidade2);
      } else {
        printf("HOUVE UM EMPATE\n");
      }
      break;

      // OPÇÃO INVALIDA

      default:
        printf("\nOPÇÂO INVÁLIDA!\n");
        printf("\nESCOLHA A OPÇÂO ENTRE 1 e 5\n");
        
        break;
      

    }


    return 0;

}