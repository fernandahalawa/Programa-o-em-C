#include <stdio.h>

int main(){

       char estadoA, estadoB; 
       char codigoCartaA[4], codigoCartaB[4];
       char cidadeA[50], cidadeB[50]; 
       int populacaoA, populacaoB;
       float areaA, areaB;
       float pibA, pibB;//double??????
       int pontosTuristicosA, pontosTuristicosB;
       float densidadePopulacionalA, densidadePopulacionalB; // hab/km²
       float pibPerCapitaA, pibPerCapitaB; //reais
    
       // PRIMEIRA CARTA

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estadoA);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCartaA);

    printf("Digite a cidade: \n");
    scanf("%s", cidadeA);

    printf("Digite a populacao: \n");
    scanf("%d", &populacaoA);

    printf("Digite a area: \n");
    scanf("%f", &areaA);

    printf("Digite o PIB: \n");
    scanf("%f", &pibA);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosA);

    printf("Digite a densidade populacional: \n");
    scanf("%f", &densidadePopulacionalA);

    printf("Digite o valor do PIB per Capita: \n");
    scanf("%f", &pibPerCapitaA);

    // SEGUNDA CARTA

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estadoB);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCartaB);

    printf("Digite a cidade: \n");
    scanf("%s", cidadeB);

    printf("Digite a populacao: \n");
    scanf("%d", &populacaoB);

    printf("Digite a area: \n");
    scanf("%f", &areaB);

    printf("Digite o PIB: \n");
    scanf("%f", &pibB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosB);

    printf("Digite a densidade populacional: \n");
    scanf("%f", &densidadePopulacionalB);

    printf("Digite o valor do PIB per Capita: \n");
    scanf("%f", &pibPerCapitaB);

    // IMPRESSÃO DOS DADOS

    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estadoA, estadoB);
    printf("Codigo da carta: %s\n", codigoCartaA, codigoCartaB);
    printf("Cidade: %s\n", cidadeA, cidadeB);
    printf("Populacao: %d\n", populacaoA, populacaoB);
    printf("Area: %f \n", areaA, areaB);//km²
    printf("PIB: %f bilhões\n", pibA, pibB);// bilhão
    printf("Pontos Turisticos: %d\n", pontosTuristicosA, pontosTuristicosB);
    printf("Densidade populacional: %f \n", densidadePopulacionalA, densidadePopulacionalB);
    printf("PIB per Capita: %f \n", pibPerCapitaA, pibPerCapitaB);


    return 0;

   }