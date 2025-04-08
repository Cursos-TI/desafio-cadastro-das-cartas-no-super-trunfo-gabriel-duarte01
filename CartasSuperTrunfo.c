#include <stdio.h>

int main(){

int opcao;

char estado1;    
int codigo_da_carta1;
char cidade1 [20]; 
unsigned long int populacao1;
float area1;
float numero_pontos_turisticos1;
float pib1;


char estado2;
int codigo_da_carta2;
char cidade2 [20];
unsigned long int populacao2;
float area2;
float numero_pontos_turisticos2;
float pib2;



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

printf("Digite o estado da carta 2:\n");
scanf(" %c", &estado2); //espaço para descartar "\n" do buffer

printf("Digite o código da carta 2: ");
scanf("%d", &codigo_da_carta2);

printf("Digite a cidade da carta 2: ");
scanf("%s", &cidade2);

printf("Digite a população da carta 2: ");
scanf("%lu", &populacao2);

printf("Digite a área da carta 2: ");
scanf("%f", &area2);

printf("Digite o número de pontos turísticos da carta 2: ");
scanf("%f", &numero_pontos_turisticos2);

printf("Digite o PIB da cidade 2: ");
scanf("%f", &pib2);

float densidade_demografica2 =  populacao2/area2;
float pib_per_capita2 =  pib2/populacao2;
double SuperPoder2 = (populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2)+ (area2/populacao2);

printf("A densidade demográfica da cidade 2 é: %.2f \n", densidade_demografica2);

printf("O PIB per capita da cidade 2 é: %.2f \n", pib2);

printf("O super poder da cidade 2 é: %.2f \n", SuperPoder2);


//card comparison

printf("Qual atributo das cartas você quer comparar?\n");
printf("1. população\n");
printf("2. área\n");
printf("3. PIB\n");
printf("4. super poder\n");
printf("5. desidade demográfica\n");    
scanf("%d", &opcao);


switch(opcao){

case 1:

if (populacao1 = populacao2){
    printf("Emparam no quesito população!\n");
}
else if( populacao1 > populacao2 ){
    printf("Carta 1 ganhou!\n");
}
else{
    printf("Carta 2 ganhou!\n");
}
break;

case 2:

if( area1 = area2 ){
    printf("Empataram no quesito área!\n");
}
else if( area1 > area2 ){
    printf("Carta 1 ganhou!\n");
}
else{
    printf("Carta 2 ganhou!\n");
}

break;

case 3:

if (pib1 = pib2){
    printf("Empate no quesito PIB!\n");
}
else if (pib1 > pib2){
    printf("Carta 1 ganhou!\n");
}
else{
    printf("Carta 2 ganhou!\n");
}

break;

case 4:

if (SuperPoder1 = SuperPoder2){
    printf("empataram no quesito super poder!\n");
}
else if( SuperPoder1 > SuperPoder2){
    printf("Carta 1 ganhou!\n");
}
else{
    printf("Carta 2 ganhou!\n");
}

break;

case 5:

if(densidade_demografica1 = densidade_demografica2){
    printf("Emmpataram no quesito densidade demográfica!\n");
}                                                 
else if(densidade_demografica1 < densidade_demografica2){
    printf("carta 1 ganhou!\n");
} 
    else{
    printf("carta 2 ganhou!\n");
}

break;

default:

printf("opção inválida!");

break;




}


}


