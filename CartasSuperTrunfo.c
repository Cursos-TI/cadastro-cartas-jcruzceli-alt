#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[50], estado2[50];
    char cod_carta1[3], cod_carta2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    int pib1, pib2;
    int quant_pontos_tur1, quant_pontos_tur2;
    
  // Área para entrada de dados

    printf ("Digite a letra referente do primeiro Estado: "); scanf("%s", estado1);

    printf ("Digite o código da primeira Carta..........: "); scanf("%s", cod_carta1);

    printf ("Digite o nome da primeira Cidade...........: "); scanf("%s", cidade1);

    printf ("População da 1ª Cidade.....................: "); scanf("%d",&populacao1);

    printf ("Digite a área da Cidade....................: "); scanf("%f",&area1); 

    printf ("Qual é o PIB da Cidade.....................: "); scanf("%f",&pib1);

    printf("Quantos pontos turisticos existem na Cidade.: "); scanf("%d",&quant_pontos_tur1);

    printf ("\n");
    printf ("------------------------------------------------------- \n");
    printf ("\n");

  // Área para exibição dos dados da cidade

      printf("A letra referente ao primeiro Estado é..........: %s\n", estado1);
      printf("O código da primeira Carta é....................: %s\n", cod_carta1);
      printf("O Nome da primeira Caidade é....................: %s\n", cidade1);
      printf("A população da primeira Cidade é................: %d\n", populacao1);
      printf("A área da Cidade é..............................: %f\n", area1);
      printf("O PIB da Cidade é...............................: %f\n", pib1);
      printf("Quantos pontos turisticos existem na Cidade.....: %d\n", quant_pontos_tur1);

 printf ("\n");
    printf ("------------------------------------------------------- \n");
    printf ("\n");

        // Área para entrada de dados

    printf ("Digite a letra referente do segundo Estado.: "); scanf("%s", estado2);

    printf ("Digite o código da segunda Carta...........: "); scanf("%s", cod_carta2);

    printf ("Digite o nome da segunda Cidade............: "); scanf("%s", cidade2);

    
    printf ("População da segunda Cidade................: "); scanf("%d",&populacao2);

    printf ("Digite a área da Cidade....................: "); scanf("%f",&area2); 

    printf ("Qual é o PIB da Cidade.....................: "); scanf("%f",&pib2);

    printf("Quantos pontos turisticos existem na Cidade.: "); scanf("%d",&quant_pontos_tur2);

    printf ("\n");
    printf ("------------------------------------------------------- \n");
    printf ("\n");

// Área para exibição dos dados da cidade

      printf("A letra referente ao segundo Estado é...........: %s\n", estado2);
      printf("O código da primeira Carta é....................: %s\n", cod_carta2);
      printf("O Nome da primeira Caidade é....................: %s\n", cidade2);
      printf("A população da primeira Cidade é................: %d\n", populacao2);
      printf("A área da Cidade é..............................: %f\n", area2);
      printf("O PIB da Cidade é...............................: %f\n", pib2);
      printf("Quantos pontos turisticos existem na Cidade.....: %d\n", quant_pontos_tur2);



return 0;
} 