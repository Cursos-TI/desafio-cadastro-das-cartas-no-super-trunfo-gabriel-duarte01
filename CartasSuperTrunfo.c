//Você é a carta 1!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int primeiroAtributo, segundoAtributo, resultado1, resultado2;

char estado1;    
int codigo_da_carta1;
char cidade1 [20]; 
unsigned long int populacao1;
float area1;
float numero_pontos_turisticos1;
float pib1;



char estado2 [5] = "SP";
int codigo_da_carta2 = 2;
char cidade2 [20] = "São Paulo";
unsigned long int populacao2 = 80000000;
float area2 = 789510;
float numero_pontos_turisticos2 = 200;
float pib2 = 745896321000;



//Área deve ser em km²

//Carta 1

printf("Digite o estado da carta 1:\n");
scanf("%c", &estado1);

printf("Digite o código da carta 1:\n");
scanf("%d", &codigo_da_carta1);

printf("Digite a cidade da carta 1:\n");
scanf("%s", &cidade1);

printf("Digite a população da carta 1:\n");
scanf("%lu", &populacao1);

printf("Digite a área da carta 1:\n");
scanf("%f", &area1);

printf("Digite o número de pontos turísticos da carta 1:\n");
scanf("%f", &numero_pontos_turisticos1);

printf("Digite o PIB da cidade 1:\n");
scanf("%f", &pib1);

float densidade_demografica1 =  populacao1/area1;
float pib_per_capita1 = pib1/populacao1;

double SuperPoder1 = (populacao1 + area1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1) + (area1/populacao1);


printf("A desnidade demográfica da cidade 1 é:  %.2f \n", densidade_demografica1);

printf("O PIB per capita da cidade 1 é:  %.2f \n", pib_per_capita1);

printf("O super poder da cidade 1 é: %.2f \n", SuperPoder1);

//Carta 2

printf("O estado da carta 2:\n");
printf(" %c \n", estado2); //espaço para descartar "\n" do buffer

printf("O código da carta 2: ");
printf("%d \n", codigo_da_carta2);

printf("A cidade da carta 2: ");
printf("%s \n", cidade2);

printf("A população da carta 2: ");
printf("%lu \n", populacao2);

printf("A área da carta 2: ");
printf("%.2f\n", area2);

printf("O número de pontos turísticos da carta 2: ");
printf("%.2f\n", numero_pontos_turisticos2);

printf("O PIB da cidade 2: ");
printf("%.2f\n", pib2);

float densidade_demografica2 =  populacao2/area2;
float pib_per_capita2 =  pib2/populacao2;
double SuperPoder2 = (populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2)+ (area2/populacao2);

printf("A densidade demográfica da cidade 2 é: %.2f \n", densidade_demografica2);

printf("O PIB per capita da cidade 2 é: %.2f \n", pib2);

printf("O super poder da cidade 2 é: %.2f \n", SuperPoder2);


//card comparison
printf("Compare os atributos da sua carta com o da carta do computador!\n");
printf("Observação: você é a carta 1!\n");
printf("Qual o primeiro atributo das cartas você quer comparar?\n");
printf("1. população\n");
printf("2. área\n");
printf("3. PIB\n");
printf("4. super poder\n");
printf("5. desidade demográfica\n");    
scanf("%d", &primeiroAtributo);


switch(primeiroAtributo){

case 1:

printf("Voce escolheu população!\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;

break;

case 2:

printf("Voce escolheu área!\n");
resultado1 = area1 > area2 ? 1 : 0;

break;

case 3:

printf("Voce escolheu PIB!\n");
resultado1 = pib1 > pib2 ? 1 : 0;

break;

case 4:

printf("Voce escolheu super poder!\n");
resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;

break;

case 5:

printf("Voce escolheu densidade demográfica!\n");
resultado1 = densidade_demografica1 < densidade_demografica2 ? 1 : 0;

break;

default:

printf("opção inválida!");

break;

}


printf("Qual o segundo atributo das cartas você quer comparar?\n");
printf("1. população\n");
printf("2. área\n");
printf("3. PIB\n");
printf("4. super poder\n");
printf("5. desidade demográfica\n");
scanf("%d", &segundoAtributo);

if(primeiroAtributo == segundoAtributo){
    printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    return 0;
}

//comparação do segundo atributo

switch(segundoAtributo){

case 1: 
printf("Voce escolheu população!\n");
resultado2 = populacao1 > populacao2 ? 1 : 0;
break;

case 2:
printf("Voce escolheu área!\n");
resultado2 = area1 > area2 ? 1 : 0;
break;

case 3:
printf("Voce escolheu PIB!\n");
resultado2 = pib1 > pib2 ? 1 : 0;
break;

case 4:
printf("Voce escolheu super poder!\n");
resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
break;

case 5:
printf("Voce escolheu densidade demográfica!\n");
resultado2 = densidade_demografica1 < densidade_demografica2 ? 1 : 0;
break;

default:
printf("opção inválida!");
break;
}

if(resultado1 && resultado2){
    printf("venceu!\n");
}else if(resultado1 != resultado2){
    printf("Empatou!\n");
}else{
    printf("Perdeu!\n");
}

}


