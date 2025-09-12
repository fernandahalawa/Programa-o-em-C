#include <stdio.h>

int main(){

       char estadoA[4], estadoB[4]; 
       char codigoCartaA[4], codigoCartaB[4];
       char cidadeA[50], cidadeB[50]; 
       unsigned int populacaoA, populacaoB;
       float areaA, areaB; 
       float pibA, pibB;
       int pontosTuristicosA, pontosTuristicosB;
       float densidadePopulacionalA, densidadePopulacionalB; 
       float pibPerCapitaA, pibPerCapitaB; 
       float superpoderA, superpoderB;
    
       // PRIMEIRA CARTA
    printf("*** INFORME OS DADOS DAS CARTAS\n");
    printf("*** CARTA 01 ***\n");

    printf("Digite a letra do estado: \n");
    scanf("%s", estadoA);

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


    // SEGUNDA CARTA
    printf("*******************************************\n");
    printf("*** CARTA 02 ***\n");

    printf("Digite a letra do estado: \n");
    scanf("%s", estadoB);

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


    // IMPRESSÃO DOS DADOS
      // CARTA 01
    printf("*******************************************\n");
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Estado: %s\n", estadoA);
    printf("Codigo da carta: %s\n", codigoCartaA);
    printf("Cidade: %s\n", cidadeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões\n", pibA);
    printf("Pontos Turisticos: %d\n", pontosTuristicosA);

    densidadePopulacionalA = (float) populacaoA / areaA;
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacionalA);

    pibPerCapitaA = (float) pibA / populacaoA;
    printf("PIB per Capita: R$ %.2f \n", pibPerCapitaA);

    superpoderA = (double) populacaoA + pibA + areaA +  densidadePopulacionalA + pibPerCapitaA;
    printf ("Super poder: %.2f \n", superpoderA / 1000000);  


    // CARTA 02
    printf("*******************************************\n");
    printf("\n--- Dados da Cartas 02 ---\n");
    printf("Estado: %s\n", estadoB);
    printf("Codigo da carta: %s\n", codigoCartaB);
    printf("Cidade: %s\n", cidadeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões\n", pibB);
    printf("Pontos Turisticos: %d\n", pontosTuristicosB);

    densidadePopulacionalB = (float) populacaoB / areaB;
    printf("Densidade populacional: %.2f hab/km² \n", densidadePopulacionalB);

    pibPerCapitaB = (float) pibB / populacaoB;
    printf("PIB per Capita: R$ %.2f \n", pibPerCapitaB);

    superpoderB = (double) populacaoB + pibB + areaB +  densidadePopulacionalB + pibPerCapitaB;
    printf ("Super poder: %.2f \n", superpoderB / 1000000); 
   
    // COMPARAÇÃO DAS CARTAS
    printf("*******************************************\n");
    printf("Comparação das cartas \n");

    printf("População: %d \n", populacaoA > populacaoB);
    printf("Área: %d \n", areaA > areaB);
    printf("PIB: %d \n", pibA > pibB);
    printf("Pontos turísticos: %d \n", pontosTuristicosA > pontosTuristicosB);
    printf("Densidade populacional: %d \n", densidadePopulacionalA < densidadePopulacionalB);
    printf("PIB per Capita: %d \n", pibPerCapitaA > pibPerCapitaB);
    printf("Superpoder Carta: %d \n", superpoderA > superpoderB);


    return 0;

   }