#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 01
    char estado01[20];
    char codigocarta01[50];
    char nomecidade01[30];
    int populacao01;
    float area01;
    float pib01;
    int numeropontoturistico01;
    float denspop01 = populacao01 / area01;
    float pibpercap01 = pib01 / populacao01;

    //Carta 02
    char estado02[20];
    char codigocarta02[50];
    char nomecidade02[30];
    int populacao02;
    float area02;
    float pib02;
    int numeropontoturistico02;
    float denspop02 = populacao02 / area02;
    float pibpercap02 = pib02 / populacao02;
  // Área para entrada de dados

  //Carta 01
    printf("Digite o Estado da Carta 01: \n");
    scanf("%s", estado01);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", codigocarta01);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade01);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &populacao01);

    printf("Digite a Area: \n");
    scanf("%f", &area01);

    printf("Digite o PIB: \n");
    scanf("%f", &pib01);

    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &numeropontoturistico01);



    //Carta 02

    printf("Digite o Estado da Carta 02: \n");
    scanf("%s", &estado02);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", &codigocarta02);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomecidade02);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &populacao02);

    printf("Digite a Area: \n");
    scanf("%f", &area02);

    printf("Digite o PIB: \n");
    scanf("%f", &pib02);

    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &numeropontoturistico02);
  // Área para exibição dos dados da cidade

    printf("Carta 01\n");

    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigocarta01);
    printf("Cidade: %s\n", nomecidade01);
    printf("Populacao: %d\n", populacao01);
    printf("Area: %f\n", area01);
    printf("PIB: %f\n", pib01);
    printf("Numero de Pontos Turisticos: %d\n", numeropontoturistico01);
    printf("A Densidade Populacional é: %.4f\n", denspop01);
    printf("O PIB Per Capita é: %.4f\n", pibpercap01);



    printf("Carta 02\n");

    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigocarta02);
    printf("Cidade: %s\n", nomecidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %f\n", area02);
    printf("PIB: %f\n", pib02);
    printf("Numero de Pontos Turisticos: %d\n", numeropontoturistico02);
    printf("A Densidade Populacional é: %.4f\n", denspop02);
    printf("O PIB Per Capita é: %.4f\n", pibpercap02);

return 0;
} 
