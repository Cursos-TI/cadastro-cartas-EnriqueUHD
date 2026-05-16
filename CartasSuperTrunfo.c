#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int populacao1, populacao2;
  int numeroDePontos1, numeroDePontos2;
  float area1, area2;
  float pib1, pib2;
  char codigoCarta1[20], codigoCarta2[20];
  char nomeCidade1[20], nomeCidade2[20];
  char estadoCaracter1, estadoCaracter2;

  // Área para entrada de dados

  // carta 1
  printf("Insira as informações da primeira carta.\n");
  printf("Informe uma letra de 'A' a 'H' para representar um dos oitos estados:\n");
  scanf("%c", &estadoCaracter1);

  printf("Informe o codigo entre 01 - 04:\n");
  scanf("%s", codigoCarta1);

  getchar();

  printf("Informa o nome da Cidade:\n");
  fgets(nomeCidade1, 20, stdin);
  nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

  printf("Informe o número de habitantes da cidade:\n");
  scanf("%d", &populacao1);

  printf("Informe a área da cidade em quilômetros quadrados:\n");
  scanf("%f", &area1);

  printf("Informe o Produto Interno Bruto da cidade:\n");
  scanf("%f", &pib1);

  printf("Informe a quantidade de pontos turísticos na cidade:\n");
  scanf("%d", &numeroDePontos1);

  // carta 2
  printf("Insira as informações da segunda carta.\n");
  printf("Informe uma letra de 'A' a 'H' para representar um dos oitos estados:\n");
  scanf(" %c", &estadoCaracter2);

  printf("Informe o codigo entre 01 - 04:\n");
  scanf("%s", codigoCarta2);

  getchar();

  printf("Informa o nome da Cidade:\n");
  fgets(nomeCidade2, 20, stdin);
  nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

  printf("Informe o número de habitantes da cidade:\n");
  scanf("%d", &populacao2);

  printf("Informe a área da cidade em quilômetros quadrados:\n");
  scanf("%f", &area2);

  printf("Informe o Produto Interno Bruto da cidade:\n");
  scanf("%f", &pib2);

  printf("Informe a quantidade de pontos turísticos na cidade:\n\n");
  scanf("%d", &numeroDePontos2);

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c\n", estadoCaracter1);
  printf("Código: %c%s\n", estadoCaracter1, codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n\n", numeroDePontos1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estadoCaracter2);
  printf("Código: %c%s\n", estadoCaracter2, codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numeroDePontos2);

  return 0;

}
