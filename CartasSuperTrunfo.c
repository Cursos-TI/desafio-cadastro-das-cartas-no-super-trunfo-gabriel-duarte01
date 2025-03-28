#include <stdio.h>

int main(){

char estado1;    
int codigo_da_carta1;
char cidade1 [20]; 
unsigned long int populacao1;
float area1;
float numero_pontos_turisticos1;
float pib1;
float densidade_demografica1;
float pib_per_capita1;


char estado2;
int codigo_da_carta2;
char cidade2 [20];
unsigned long int populacao2;
float area2;
float numero_pontos_turisticos2;
float densidade_demografica2;
float pib2;



//Área deve ser em km²

//Carta 1

printf("Digite o estado da carta 1: ");
scanf(" %c", &estado1);

printf("Digite o código da carta 1: ");
scanf("%d", &codigo_da_carta1);

printf("Digite a cidade da carta 1: ");
scanf("%s", cidade1);

printf("Digite a população da carta 1:  ");
scanf("%d", &populacao1);

printf("Digite a área da carta 1:  ");
scanf("%f", &area1);

printf("Digite o número de pontos turísticos da carta 1:  ");
scanf(" %f", &numero_pontos_turisticos1);

printf("Digite o PIB da cidade 1:  ");
scanf(" %f", &pib1);

densidade_demografica1 =  populacao1/area1;
pib_per_capita1 =  pib1/populacao1;

float SuperPoder1 = (populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1) + (area1/populacao1);


printf("A desnidade demográfica da cidade 1 é:  %.2f \n", densidade_demografica1);

printf("O PIB per capita da cidade 1 é:  %.2f \n", pib_per_capita1);

printf("O super poder da cidade 1 é: %.2f \n", SuperPoder1);
//Carta 2

printf("Digite o estado da carta 2: ");
scanf(" %c", &estado2); //espaço para descartar "\n" do buffer

printf("Digite o código da carta 2: ");
scanf("%d", &codigo_da_carta2);

printf("Digite a cidade da carta 2: ");
scanf("%s", cidade2);

printf("Digite a população da carta 2: ");
scanf("%d", &populacao2);

printf("Digite a área da carta 2: ");
scanf("%f", &area2);

printf("Digite o número de pontos turísticos da carta 2: ");
scanf("%f", &numero_pontos_turisticos2);

printf("Digite o PIB da cidade 2: ");
scanf("%f", &pib2);

densidade_demografica2 =  populacao2/area2;
pib2 =  pib2/populacao2;
float SuperPoder2 = (populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib2)+ (area2/populacao2);

printf("A densidade demográfica da cidade 2 é: %.2f \n", densidade_demografica2);

printf("O PIB per capita da cidade 2 é: %.2f \n", pib2);

printf("O super poder da cidade 2 é: %.2f \n", SuperPoder2);


//card comparison

populacao1 > populacao2;
area1 > area2;
pib1 > pib2;
SuperPoder1 > SuperPoder2;
area1/populacao1 > area2/populacao2; // isso é o inverso da densidade demográfica

int resultadoA = populacao1 > populacao2;
float resultadoB = area1 > area2;
float resultadoC = pib1 > pib2;
float resultadoD = SuperPoder1 > SuperPoder2;
float resultadoE = area1/populacao1 > area2/populacao2;

printf("A carta 1 é maior que a carta 2 em população? %lu \n", resultadoA);
printf("A carta 1 é maior que a carta 2 em área? %.2f \n", resultadoB);
printf("A carta 1 é maior que a carta 2 em PIB? %.2f \n", resultadoC);
printf("A carta 1 é maior que a carta 2 em SuperPoder? %.2f  \n", resultadoD);
printf("A carta 1 é maior que a carta 2 em densidade demográfica? %.2f \n", resultadoE);    







}


