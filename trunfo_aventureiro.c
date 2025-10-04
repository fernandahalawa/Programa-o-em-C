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
       int opcao;
    
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
    printf("Comparação das cartas: \n");

    printf("1. População: \n");
    printf("2. Área: \n");
    printf("3. PIB: \n");
    printf("4. Pontos turísticos: \n");
    printf("5. Densidade populacional: \n");
    printf("6. PIB per Capita: \n");

    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
        printf("O atributo usado na comparação foi População. \n");
        printf("A população de %s: %d. \n", cidadeA, populacaoA, cidadeB, populacaoB);
            if(populacaoA > populacaoB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
            } else if (populacaoB > populacaoA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
            } else {
                printf("As cartas empataram! \n");
            }
        break;
    
    case 2: 
        printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
        printf("O atributo escohido foi Área. \n");
        printf("A área de %s: %f km² e a de %s: %f km². \n", cidadeA, areaA, cidadeB, areaB); 
            if (areaA > areaB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
            } else if (populacaoB > populacaoA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
            } else {
                printf("As cartas empataram! \n");
            }
        break;    

    case 3: 
        printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
        printf("O atriburo escolhido foi PIB. \n");
        printf("O PIB de %s: %.2f bilhões e o de %s: %.2f bilhões. \n", cidadeA, pibA, cidadeB, pibB);
            if (pibA > pibB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
            } else if (pibB > pibA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
            } else {
                printf("As cartas empataram! \n");
            }
        break;    

    case 4: 
        printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
        printf("O atributo escolhido foi Pontos turísticos. \n");
        printf("O número de pontos turísticos de %s: %d e o de %s: %d", cidadeA, pontosTuristicosA, cidadeB, pontosTuristicosB);
            if (pontosTuristicosA > pontosTuristicosB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
            } else if (pontosTuristicosB > pontosTuristicosA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
            } else {
                printf("As cartas empataram! \n");
            }
        break;    
            
    case 5:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("O atributo escolhido foi Densidade populacional. \n");
            printf("A densidade populacional de %s: %.2f hab/km² e o de %s: %.2f", cidadeA, densidadePopulacionalA, cidadeB, densidadePopulacionalB);
                if (densidadePopulacionalA < densidadePopulacionalB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
            } else if (densidadePopulacionalB > densidadePopulacionalA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
            } else {
                printf("As cartas empataram! \n");
            }
        break;    

    case 6:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("O atributo escolhido foi PIB per capita. \n");
            printf("O PIB per capita de %s: %.2f e o de %s: %.2f", cidadeA, pibPerCapitaA, cidadeB, pibPerCapitaB);
                if (pibPerCapitaA > pibPerCapitaB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
            } else if (pibPerCapitaB > pibPerCapitaA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
            } else {
                printf("As cartas empataram! \n");
            }
        break;    

    default: 
            printf("Opção inválida!");
        break;
    }

    printf("*******************************************\n");

    printf("RESULTADO FINAL: \n");
    if(superpoderA > superpoderB){
      printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, estadoA);
    } else if (superpoderB > superpoderA){
      printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, estadoB);
    } else {
      printf("As cartas empataram! \n");
    }

    return 0;

   }