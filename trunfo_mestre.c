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
       int opcao1, opcao2;
    
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

    printf("Escolha a primeira opção: \n");
    scanf("%d", &opcao1);

    switch (opcao1){

    case 1: 
        printf("2. Área: \n");
        printf("3. PIB: \n");
        printf("4. Pontos turísticos: \n");
        printf("5. Densidade populacional: \n");
        printf("6. PIB per Capita: \n");
        printf("Escolha a segunda opção:");
        scanf("%d", &opcao2);
    break;
    
    case 2: 
        printf("1. População: \n");
        printf("3. PIB: \n");
        printf("4. Pontos turísticos: \n");
        printf("5. Densidade populacional: \n");
        printf("6. PIB per Capita: \n");
        printf("Escolha a segunda opção:");
        scanf("%d", &opcao2);
    break;

    case 3: 
        printf("1. População: \n");
        printf("2. Área: \n");
        printf("4. Pontos turísticos: \n");
        printf("5. Densidade populacional: \n");
        printf("6. PIB per Capita: \n");
        printf("Escolha a segunda opção:");
        scanf("%d", &opcao2);
    break;
    
    case 4:
        printf("1. População: \n");
        printf("2. Área: \n");
        printf("3. PIB: \n");
        printf("5. Densidade populacional: \n");
        printf("6. PIB per Capita: \n");
        printf("Escolha a segunda opção:");
        scanf("%d", &opcao2);
    break;

    case 5: 
        printf("1. População: \n");
        printf("2. Área: \n");
        printf("3. PIB: \n");
        printf("4. Pontos turísticos: \n");
        printf("6. PIB per Capita: \n");
        printf("Escolha a segunda opção:");
        scanf("%d", &opcao2);
    break;

    case 6: 
        printf("1. População: \n");
        printf("2. Área: \n");
        printf("3. PIB: \n");
        printf("4. Pontos turísticos: \n");
        printf("5. Densidade populacional: \n");
        printf("Escolha a segunda opção:");
        scanf("%d", &opcao2);
    break;
    
    default:
        printf("Opção inválida!");
        break;
    }

    printf("*******************************************\n");

    if (opcao1 == opcao2){
        printf("As opções selecionadas devem ser diferentes. Tente novamente!");
        return 0;
    }

    printf("*******************************************\n");


    switch (opcao1){
    case 1:
        switch (opcao2){
        case 2: 
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram População e Área. \n");
            printf("A área e população de %s é %.2f km² e %d habitantes, e a de %s é %.2f km² e %d habitantes. \n", cidadeA, areaA, populacaoA, cidadeB, areaB, populacaoB);
                if(populacaoA + areaA > populacaoB + areaB){
                            printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                        } else if (populacaoB + areaB > populacaoA + areaA){
                            printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                        } else {
                            printf("As cartas empataram! \n");
                        }
        break;

        case 3:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram População e PIB. \n");           
            printf("O PIB e a população de %s é %.2f bilhão e %d habitantes, e a de %s é %.2f bilhão e %d habitantes. \n", cidadeA, pibA/1000000000, populacaoA, cidadeB, pibB/1000000000, populacaoB);
                if(populacaoA + pibA > populacaoB + pibB){
                            printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                        } else if (populacaoB + pibB > populacaoA + pibA){
                            printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                        } else {
                            printf("As cartas empataram! \n");
                        }
        break;

        case 4:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram População e Pontos turisticos. \n");           
            printf("Os pontos turísticos e a população de %s é %d e %d habitantes, e a de %s é %d e %d habitantes. \n", cidadeA, pontosTuristicosA, populacaoA, cidadeB, pontosTuristicosB, populacaoB);
                if(populacaoA + pontosTuristicosA > populacaoB + pontosTuristicosB){
                            printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                        } else if (populacaoB + pontosTuristicosB > populacaoA + pontosTuristicosA){
                            printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                        } else {
                            printf("As cartas empataram! \n");
                        }
        break;

        case 5:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram População e densidade populaciional. \n");           
            printf("A densidade populacional e a população de %s é %.2f e %d habitantes, e a de %s é %.2f e %d habitantes. \n", cidadeA, densidadePopulacionalA, populacaoA, cidadeB, densidadePopulacionalB, populacaoB);
                if(populacaoA + densidadePopulacionalA < populacaoB + densidadePopulacionalB){
                            printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                        } else if (populacaoB + densidadePopulacionalB < populacaoA + densidadePopulacionalA){
                            printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                        } else {
                            printf("As cartas empataram! \n");
                        }
        break;

        case 6: 
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram População e PIB per capita. \n");           
            printf("O PIB per capita e a população de %s é %.2f e %d habitantes, e a de %s é %.2f e %d habitantes. \n", cidadeA, pibPerCapitaA, populacaoA, cidadeB, pibPerCapitaB, populacaoB);
                if(populacaoA + pibPerCapitaA > populacaoB + pibPerCapitaB){
                            printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                        } else if (populacaoB + pibPerCapitaB > populacaoA + pibPerCapitaA){
                            printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                        } else {
                            printf("As cartas empataram! \n");
                        }
        break;

        default:
            printf("Opção inválida!\n");                
        break;
        }
    break;


    case 2:
        switch (opcao2){
            case 1:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram População e Área. \n");
            printf("A área e população de %s é %.2f km² e %d habitantes, e a de %s é %.2f km² e %d habitantes. \n", cidadeA, areaA, populacaoA, cidadeB, areaB, populacaoB);
                if(populacaoA + areaA > populacaoB + areaB){
                            printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                        } else if (populacaoB + areaB > populacaoA + areaA){
                            printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                        } else {
                            printf("As cartas empataram! \n");
                        }
            break;

            case 3:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram Área e PIB. \n");
            printf("A área e o PIB de %s é %.2f km² e %.2f bilhões e a de %s é %.2f km² e %.2f bilhões. \n", cidadeA, areaA, pibA/1000000000, cidadeB, areaB, pibB/1000000000);
                if(areaA + pibA > areaB + pibB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if (areaB + pibB > areaA + pibA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                } else{
                    printf("As cartas empataram! \n");
                }
            break;

            case 4: 
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram Área e Pontos Turísticos. \n");
            printf("A área e os pontos turísticos de %s é %.2f km² e %d e a de %s é %.2f km² e %d. \n", cidadeA, areaA, pontosTuristicosA, cidadeB, areaB, pontosTuristicosB);
                if(areaA + pontosTuristicosA > areaB + pontosTuristicosB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(areaB + pontosTuristicosB > areaA + pontosTuristicosA) {
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                } else{
                    printf("As cartas empataram! \n");
                }
            break;

            case 5:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram Área e Densidade Populacional \n");
            printf("A Área e a densidade populacional de %s é %.2f km² e %.2f hab/km² e a de %s é %.2f km² e %.2f hab/km². \n", cidadeA, areaA, densidadePopulacionalA, cidadeB, areaB, densidadePopulacionalB);
                if(areaA + densidadePopulacionalA < areaB + densidadePopulacionalB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(areaB + densidadePopulacionalB < areaA + densidadePopulacionalA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                }else{
                    printf("As cartas empataram! \n");
                }
            break;

            case 6:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos usados na comparação foram Área e PIB per capita. \n");
            printf("A Área e o PIB per capita de %s é %.2f km² e R$ %.2f e a de %s é %.2f km² e R$ %.2f", cidadeA, areaA, pibPerCapitaA, cidadeB, areaB, pibPerCapitaB);
                if (areaA + pibPerCapitaA > areaB + pibPerCapitaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(areaB + pibPerCapitaB > areaA + pibPerCapitaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB); 
                } else{
                    printf("As cartas empataram! \n");
                }
            break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    break;
    
    case 3:
        switch (opcao2){
        case 1:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB e População\n");
            printf("O PIB e a População de %s é %.2f bilhões e %d habitantes e a de %s é %.2f bilhões e %d habitantes\n", cidadeA, pibA / 1000000000, populacaoA, cidadeB, pibB / 1000000000, populacaoB);
                if(pibA + populacaoA > pibB + populacaoB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if (pibB + populacaoB > pibA + populacaoA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                } else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 2:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB e Área. \n");
            printf("O PIB e a Área de %s é %.2f bilhões e %.2f km² e a de %s é %.2f bilhões e %.2f km²\n", cidadeA, pibA / 1000000000, areaA, cidadeB, pibB / 1000000000, areaB);
                if(pibA + areaA > pibB + areaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pibB + areaB > pibA + areaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                } else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 4:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB e Pontos Turisticos. \n");
            printf("O PIB e o número de Pontos Turisticos de %s é %.2f bilhões e %d pontos e a de %s é %.2f bilhões e %d pontos\n", cidadeA, pibA / 1000000000, pontosTuristicosA, cidadeB, pibB / 1000000000, pontosTuristicosB);
                if(pibA + pontosTuristicosA > pibB + pontosTuristicosB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pibB + pontosTuristicosB > pibA + pontosTuristicosA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                } else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 5:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB e Densidade Populacional. \n");
            printf("O PIB e a Densidade Populacional de %s é %.2f bilhões e %.2f hab/km² e a de %s é %.2f bilhões e %.2f hab/km²\n", cidadeA, pibA / 1000000000, densidadePopulacionalA, cidadeB, pibB / 1000000000, densidadePopulacionalB); 
                if(pibA + densidadePopulacionalA < pibB + densidadePopulacionalB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pibB + densidadePopulacionalB < pibA + densidadePopulacionalA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 6:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB e PIB per capita\n");
            printf("O PIB e o PIB per Capita de %s é %.2f bilhões e R$ %.2f e a de %s é %.2f bilhões e R$%.2f\n", cidadeA, pibA / 1000000000, pibPerCapitaA, cidadeB, pibB / 1000000000, pibPerCapitaB);
                if(pibA + pibPerCapitaA > pibB + pibPerCapitaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pibB + pibPerCapitaB > pibA + pibPerCapitaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    break;

    case 4:
        switch (opcao2){
        case 1:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Pontos Turisticos e População. \n");
            printf("O número de Pontos Turisticos e a População de %s é %d pontos e %d habitantes e a de %s é %d pontos e %d habitantes\n", cidadeA, pontosTuristicosA, populacaoA, cidadeB, pontosTuristicosB, populacaoB);
                if(pontosTuristicosA + populacaoA > pontosTuristicosB + populacaoB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pontosTuristicosB + populacaoB > pontosTuristicosA + populacaoA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 2:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Pontos Turisticos e Área. \n");
            printf("O número de Pontos Turisticos e a Área de %s é %d pontos e %.2f km² e a de %s é %d pontos e %.2f km²\n", cidadeA, pontosTuristicosA, areaA, cidadeB, pontosTuristicosB, areaB);
               if(pontosTuristicosA + areaA > pontosTuristicosB + areaB){
                printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
               } else if(pontosTuristicosB + areaB > pontosTuristicosA + areaA){
                printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
               }else{
                printf("As cartas empataram! \n");
               }
        break;

        case 3:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Pontos Turisticos e PIB. \n");
            printf("O número de Pontos Turisticos e o PIB de %s é %d pontos e %.2f bilhões e a de %s é %d pontos e %.2f bilhões\n", cidadeA, pontosTuristicosA, pibA / 1000000000, cidadeB, pontosTuristicosB, pibB / 1000000000);
                if(pontosTuristicosA + pibA > pontosTuristicosB + pibB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                }else if(pontosTuristicosB + pibB > pontosTuristicosA + pibA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 5:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Pontos Turisticos e Densidade Populacional. \n");
            printf("O número de Pontos Turisticos e a Densidade Populacional de %s é %d pontos e %.2f hab/km² e a de %s é %d pontos e %.2f hab/km²\n", cidadeA, pontosTuristicosA, densidadePopulacionalA, cidadeB, pontosTuristicosB, densidadePopulacionalB); 
                if(pontosTuristicosA + densidadePopulacionalA < pontosTuristicosB + densidadePopulacionalB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pontosTuristicosB + densidadePopulacionalB < pontosTuristicosA + densidadePopulacionalA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 6:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Pontos Turisticos e PIB per Capita. \n");
            printf("O número de Pontos Turisticos e o PIB per Capita de %s é %d pontos e R$%.2f e a de %s é %d pontos e R$%.2f\n", cidadeA, pontosTuristicosA, pibPerCapitaA, cidadeB, pontosTuristicosB, pibPerCapitaB);
                if(pontosTuristicosA + pibPerCapitaA > pontosTuristicosB + pibPerCapitaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pontosTuristicosB + pibPerCapitaB > pontosTuristicosA + pibPerCapitaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    break;

    case 5:
        switch (opcao2){
        case 1:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Densidade Populacional e População. \n");
            printf("A Densidade Populacional e a População de %s é %.2f hab/km² e %d habitantes e a de %s é %.2f hab/km² e %d habitantes\n", cidadeA, densidadePopulacionalA, populacaoA, cidadeB, densidadePopulacionalB, populacaoB);
                if(densidadePopulacionalA + populacaoA < densidadePopulacionalB + populacaoB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(densidadePopulacionalB + populacaoB < densidadePopulacionalA + populacaoA) {
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                } else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 2:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Densidade Populacional e Área. \n");
            printf("A Densidade Populacional e a Área de %s é %.2f hab/km² e %.2f km² e a de %s é %.2f hab/km² e %.2f km²\n", cidadeA, densidadePopulacionalA, areaA, cidadeB, densidadePopulacionalB, areaB);
                if(densidadePopulacionalA + areaA < densidadePopulacionalB + areaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(densidadePopulacionalB + areaB < densidadePopulacionalA + areaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 3:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Densidade Populacional e PIB. \n");
            printf("A Densidade Populacional e o PIB de %s é %.2f hab/km² e %.2f bilhões e a de %s é %.2f hab/km² e %.2f bilhões\n", cidadeA, densidadePopulacionalA, pibA / 1000000000, cidadeB, densidadePopulacionalB, pibB/ 1000000000);
                if(densidadePopulacionalA + pibA < densidadePopulacionalB + pibB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(densidadePopulacionalB + pibB < densidadePopulacionalA + pibA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 4:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Densidade Populacional e Pontos Turisticos. \n");
            printf("A Densidade Populacional e o número de Pontos Turisticos de %s é %.2f hab/km² e %d pontos e a de %s é %.2f hab/km² e %d pontos\n", cidadeA, densidadePopulacionalA, pontosTuristicosA, cidadeB, densidadePopulacionalB, pontosTuristicosB); 
                if(densidadePopulacionalA + pontosTuristicosA < densidadePopulacionalB + pontosTuristicosB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                }else if(densidadePopulacionalB + pontosTuristicosB < densidadePopulacionalA + pontosTuristicosA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 6:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram Densidade Populacional e PIB per capita. \n");
            printf("A Densidade Populacional e o PIB per Capita de %s é %.2f hab/km² e R$%.2f e a de %s é %.2f hab/km² e R$ %.2f\n", cidadeA, densidadePopulacionalA, pibPerCapitaA, cidadeB, densidadePopulacionalB, pibPerCapitaB);
                if(densidadePopulacionalA + pibPerCapitaA < densidadePopulacionalB + pibPerCapitaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                }else if(densidadePopulacionalB + pibPerCapitaB < densidadePopulacionalA + pibPerCapitaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    break;

    case 6:
        switch (opcao2){
        case 1:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB per capita e População. \n");
            printf("O PIB per Capita e a População de %s é R$%.2f e %d habitantes e a de %s é R$%.2f e %d habitantes\n",cidadeA, pibPerCapitaA, populacaoA, cidadeB, pibPerCapitaB, populacaoB);
                if(pibPerCapitaA + populacaoA > pibPerCapitaB + populacaoB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pibPerCapitaB + populacaoB > pibPerCapitaA + populacaoA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                } else {
                    printf("As cartas empataram! \n");
                }
        break;

        case 2:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB per Capita e Área. \n");
            printf("O PIB per Capita e a Área de %s é R$%.2f e %.2f km² e a de %s é R$%.2f e %.2f km²\n", cidadeA, pibPerCapitaA, areaA, cidadeB, pibPerCapitaB, areaB);
                if(pibPerCapitaA + areaA > pibPerCapitaB + areaB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                }else if(pibPerCapitaB + areaB > pibPerCapitaA + areaA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 3:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB per Capita e PIB\n");
            printf("O PIB per Capita e o PIB de %s é R$%.2f e %.2f bilhões e a de %s é R$%.2f e %.2f bilhões\n", cidadeA, pibPerCapitaA, pibA / 1000000000, cidadeB, pibPerCapitaB, pibB / 1000000000);
                if(pibPerCapitaA + pibA > pibPerCapitaB + pibB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                }else if(pibPerCapitaB + pibB > pibPerCapitaA + pibA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 4:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB per Capita e Pontos Turisticos\n");
            printf("O PIB per Capita e o número de Pontos Turisticos de %s é R$%.2f e %d pontos e a de %s é R$%.2f e %d pontos\n", cidadeA, pibPerCapitaA, pontosTuristicosA, cidadeB, pibPerCapitaB, pontosTuristicosB); 
                if(pibPerCapitaA + pontosTuristicosA > pibPerCapitaB + pontosTuristicosB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                }else if(pibPerCapitaB + pontosTuristicosB > pibPerCapitaA + pontosTuristicosA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        case 5:
            printf("As cidades comparadas são %s e %s. \n", cidadeA, cidadeB);
            printf("Os atributos escolhidos foram PIB per Capita e Densidade Populacional\n");
            printf("O PIB per Capita e a Densidade Populacional de %s é R$%.2f e %.2f hab/km² e a de %s é R$%.2f e %.2f hab/km²\n", cidadeA, pibPerCapitaA, densidadePopulacionalA, cidadeB, pibPerCapitaB, densidadePopulacionalB); 
                if(pibPerCapitaA + densidadePopulacionalA < pibPerCapitaB + densidadePopulacionalB){
                    printf("Carta 1 - %s (%s) é a vencedora! \n", cidadeA, codigoCartaA);
                } else if(pibPerCapitaB + densidadePopulacionalB < pibPerCapitaA + densidadePopulacionalA){
                    printf("Carta 2 - %s (%s) é a vencedora! \n", cidadeB, codigoCartaB);
                }else{
                    printf("As cartas empataram! \n");
                }
        break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    break;

    default:
        printf("Opção inválida!\n");
        break;
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