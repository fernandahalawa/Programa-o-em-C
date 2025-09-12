#include <stdio.h>

int main(){

       char estado; 
       char codigoCarta[4];
       char cidade[50]; 
       int populacao;
       float area;
       float pib;//double??????
       int pontosTuristicos;

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f \n", area);//km²
    printf("PIB: %f bilhões\n", pib);// bilhão
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;

   }