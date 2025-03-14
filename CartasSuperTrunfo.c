#include <stdio.h>
int main() {

// Carta 1 - variaveis

char estado1[50];
 int populacao1;
float area1, pib1;
int pontosturisticos1;

//Entrada de dados - Carta 1 

printf("Digite o estado da Carta 1 (A-H):\n");
scanf("%s", &estado1);
printf("Digite a populacao:\n");
scanf("%d", &populacao1);
printf("digite a area (km²):\n");
scanf("%f", &area1);
printf("Digite o PIB:\n");
scanf("%f", &pib1);
printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d", &pontosturisticos1);


// Carta 2 - variaveis
char estado2[20];
int populacao2;
float area2, pib2;
int pontosturisticos2;

// Entrada de dados - Carta 2

printf("Digite o estado da Carta 2 (A-H):\n");
scanf("%s", &estado2);
printf("Digite a populacao:\n");
scanf("%d", &populacao2);
printf("digite a área (km²):\n");
scanf("%f", &area2);
printf("Digite o PIB2:\n");
scanf("%f", &pib2);
printf("Digite a quantidade de pontos turísticos:\n");
scanf("%d", &pontosturisticos2);

return 0;
}
