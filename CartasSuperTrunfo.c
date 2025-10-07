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

    printf ("Digite a letra referente do 1º Estado: ");
    scanf("%s", estado1);

    printf ("Digite o código da 1ª Carta : ");
    scanf("%s", cod_carta1);

    printf ("Digite o nome da 1ª Cidade : ");
    scanf("%s", cidade1);

    printf ("População da 1ª Cidade : ");
    scanf("%d",&populacao1);


    printf ("\n");
    printf ("------------------------------------------------------- \n");
    printf ("\n");


  // Área para exibição dos dados da cidade

      printf("A letra referente ao 1º Estado é: %s\n", estado1);
      printf("O código da 1º Carta é: %s\n", cod_carta1);
      printf("O Nome da 1ª Caidade é: %s\n", cidade1);
      printf("A população da 1ª Caidade é: %d\n", populacao1);

return 0;
} 