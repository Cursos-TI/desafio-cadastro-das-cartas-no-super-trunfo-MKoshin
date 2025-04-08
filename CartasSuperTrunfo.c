#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // DECLARAR VARIAVEIS

    char estadoA[40];
    char codigoA[40] = "A";
    char cidadeA[20];
    unsigned long int populacaoA;
    float areakmA; 
    float pibA;
    int pontotA;

    printf("******Carta Número 1*******\n");

    //INSERIR VALORES

    printf("Digite a primeira letra do seu Estado: ");
    scanf("%s", estadoA);

    printf("Digite um código da cidade de 01 a 04: ");
    scanf("%s", codigoA);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidadeA);

    printf("Qual quantidade de população da cidade?: ");
    scanf("%i", &populacaoA);

    printf("Qual a área da cidade?: ");
    scanf("%f", &areakmA);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &pibA);

    printf("Quantos pontos turisticos possui?: ");
    scanf("%i", &pontotA);

    // CALCULAR PIB, DENSIDADE E SUPERPODER

    float densiPopulacionalA = (float) populacaoA / areakmA;
    float pibPerCapitaA = pibA / populacaoA;
    unsigned long superPoderA = (unsigned long) (populacaoA + areakmA + pibA + pontotA + pibPerCapitaA - densiPopulacionalA); 

    // MOSTRAR VALORES DAS CARTAS
    printf("Carta 1: \n");
    printf("Estado: %s\n", estadoA);
    printf("Código: A%s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %lu\n", populacaoA);
    printf("Área : %.2f\n", areakmA);
    printf("Pib: %.2f\n", pibA);
    printf("Pontos turisticos: %i\n", pontotA);
    printf("Densidade populacional: %.2f\n", densiPopulacionalA);
    printf("PIB per Capita: %.2f\n", pibPerCapitaA);
    printf("Super poder: %lu\n", superPoderA);


    // CARTA NUMERO 2
    // B = Bahia
    char estadoB[40]; //
    char codigoB[40]; //
    char cidadeB[40]; //
    unsigned long int populacaoB; //
    float areakmB; //
    float pibB; //
    int pontotB; //

    printf("******Carta número 2****** \n");

    printf("Digite a primeira letra do seu Estado: ");
    scanf("%s", estadoB);

    printf("Digite um código da cidade de 01 a 04: ");
    scanf("%s", codigoB);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidadeB);

    printf("Qual quantidade de população da cidade?: ");
    scanf("%i", &populacaoB);

    printf("Qual a área da cidade?: ");
    scanf("%f", &areakmB);

    printf("Qual o PIB da sua cidade?: ");
    scanf("%f", &pibB);

    printf("Quantos pontos turisticos possui?: ");
    scanf("%i", &pontotB);

    float densiPopulacionalB = (float) populacaoB / areakmB;
    float pibPerCapitaB = pibB / populacaoB;
    unsigned long superPoderB = (unsigned long) (populacaoB + areakmB + pibB + pontotB + pibPerCapitaB - densiPopulacionalB);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoB);
    printf("Código: B%s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %lu\n", populacaoB);
    printf("Área : %.2f\n", areakmB);
    printf("Pib: %.2f\n", pibB);
    printf("Pontos turisticos: %i\n", pontotB);
    printf("Densidade populacional: %.2f\n", densiPopulacionalB);
    printf("PIB per Capita: %.2f\n", pibPerCapitaB);
    printf("Super poder: %lu\n", superPoderB);


    // ESCOLHAS DO JOGADOR : MENU INICIAL
    int escolhaJogador;
    int escolhaJogador2;

    printf("ESCOLHA 2 (DOIS) ATRIBUTOS QUE SERÃO COMPARADOS ENTRE AS CARTAS: \n");
    printf("1. Atributo: População\n");
    printf("2. Atributo: Área\n");
    printf("3. Atributo: Pib\n");
    printf("4. Atributo: Pontos turisticos\n");
    printf("5. Atributo: Densisade Populacional\n");
    printf("6. Atributo: PibPerCapita\n");
    printf("7. Atributo: SuperPoder\n");
    printf("Escolha a primeira opção: ");
    scanf("%d", &escolhaJogador);
    printf("Escolha a segunda opção: ");
    scanf("%d", &escolhaJogador2);


    //variavel

    float resultadoA1 = 0;
    float resultadoA2 = 0;
    float resultadoB1 = 0;
    float resultadoB2 = 0;

    // OPÇÕES A FUNCIONAR
    if( escolhaJogador == escolhaJogador2){
        printf("escolha inválida");
    }else{
        switch (escolhaJogador){

                // CASE 1 irá comparar população
        case 1:

        if(populacaoA > populacaoB){
                printf("Carta 1 - %s (%s) população: %d\n", cidadeA, estadoA, populacaoA);
                    printf("Carta 2 - %s (%s) população: %d\n", cidadeB, estadoB, populacaoB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) população: %d\n", cidadeA, estadoA, populacaoA);
                    printf("Carta 2 - %s (%s) população: %d\n", cidadeB, estadoB, populacaoB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            } 
            resultadoA1 = populacaoA;
            resultadoB1 = populacaoB;

            break;

                // Case 2 irá comparar área
        case 2:
            
        if(areakmA > areakmB){
                printf("Carta 1 - %s (%s) Area: %.2f\n", cidadeA, estadoA, areakmA);
                    printf("Carta 2 - %s (%s) Area: %.2f\n", cidadeB, estadoB, areakmB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) Area: %.2f\n", cidadeA, estadoA, areakmA);
                    printf("Carta 2 - %s (%s) Area: %.2f\n", cidadeB, estadoB, areakmB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
            resultadoA1 = areakmA;
            resultadoB1 = areakmB;

                 break;

                 // CASE 3 irá comparar PIB
        case 3:
         
        if(pibA > pibB){
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
            resultadoA1 = pibA;
            resultadoB1 = pibB;

                break;

                // CASE 4 irá comparar pontos turisticos
        case 4:

        if(pontotA > pontotB){
                printf("Carta 1 - %s (%s) pontos turisticos: %d\n", cidadeA, estadoA, pontotA);
                    printf("Carta 2 - %s (%s) pontos turisticos: %d\n", cidadeB, estadoB, pontotB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) pontos turisticos: %d\n", cidadeA, estadoA, pontotA);
                    printf("Carta 2 - %s (%s) pontos turisticos: %d\n", cidadeB, estadoB, pontotB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
            resultadoA1 = pontotA;
            resultadoB1 = pontotB;

                break;

                // CASE 5 COMPARAR Densidade Populacional
        case 5:

            if(densiPopulacionalA < densiPopulacionalB){
                printf("Carta 1 - %s (%s) Densidade Populacional: %.2f\n", cidadeA, estadoA, densiPopulacionalA);
                    printf("Carta 2 - %s (%s) Densidade Populacional: %.2f\n", cidadeB, estadoB, densiPopulacionalB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) Densidade Populacional: %.2f\n", cidadeA, estadoA, densiPopulacionalA);
                    printf("Carta 2 - %s (%s) Densidade Populacional: %.2f\n", cidadeB, estadoB, densiPopulacionalB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
            resultadoA1 = densiPopulacionalA;
            resultadoB1 = densiPopulacionalB;
                break;

                // CASE 6 COMPARAR Pib Per Capita
        case 6:

            if(pibPerCapitaA > pibPerCapitaB){
                printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", cidadeA, estadoA, pibPerCapitaA);
                    printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", cidadeB, estadoB, pibPerCapitaB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", cidadeA, estadoA, pibPerCapitaA);
                    printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", cidadeB, estadoB, pibPerCapitaB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
            resultadoA1 = pibPerCapitaA;
            resultadoB1 = pibPerCapitaB;

                break;

            // CASE 7 COMPARAR SUPERPODER
        case 7:

            if(superPoderA > superPoderB){
                printf("Carta 1 - %s (%s) SuperPoder: %lu\n", cidadeA, estadoA, superPoderA);
                    printf("Carta 2 - %s (%s) SuperPoder: %lu\n", cidadeB, estadoB, superPoderB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) SuperPoder: %lu\n", cidadeA, estadoA, superPoderA);
                    printf("Carta 2 - %s (%s) SuperPoder: %lu\n", cidadeB, estadoB, superPoderB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
            resultadoA1 = superPoderA;
            resultadoB1 = superPoderB;
                break;

        // DEFAULT IRÁ DEFINIR QUALQUER ERRO NA SELEÇÃO
        default:
        printf("Opção inválida");
    }

    switch(escolhaJogador2){

        case 1:
            
        if(populacaoA > populacaoB){
                printf("Carta 1 - %s (%s) população: %d\n", cidadeA, estadoA, populacaoA);
                    printf("Carta 2 - %s (%s) população: %d\n", cidadeB, estadoB, populacaoB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) população: %d\n", cidadeA, estadoA, populacaoA);
                    printf("Carta 2 - %s (%s) população: %d\n", cidadeB, estadoB, populacaoB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
    }
        resultadoA2 = populacaoA;
        resultadoB2 = populacaoB;
        

        break;
        case 2:
            
        if(areakmA > areakmB){
                    printf("Carta 1 - %s (%s) Area: %.2f\n", cidadeA, estadoA, areakmA);
                        printf("Carta 2 - %s (%s) Area: %.2f\n", cidadeB, estadoB, areakmB);
                            printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
                }else {
                    printf("Carta 1 - %s (%s) Area: %.2f\n", cidadeA, estadoA, areakmA);
                        printf("Carta 2 - %s (%s) Area: %.2f\n", cidadeB, estadoB, areakmB);
                            printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
                }
        resultadoA2 = areakmA;
        resultadoB2 = areakmB;

        break;
        case 3:
            
        if(pibA > pibB){
                    printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibA);
                        printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibB);
                            printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
                }else {
                    printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibA);
                        printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibB);
                            printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
                }
        resultadoA2 = pibA;
        resultadoB2 = pibB;

        break;
        case 4:
        
        if(pontotA > pontotB){
                printf("Carta 1 - %s (%s) pontos turisticos: %d\n", cidadeA, estadoA, pontotA);
                    printf("Carta 2 - %s (%s) pontos turisticos: %d\n", cidadeB, estadoB, pontotB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) pontos turisticos: %d\n", cidadeA, estadoA, pontotA);
                    printf("Carta 2 - %s (%s) pontos turisticos: %d\n", cidadeB, estadoB, pontotB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
            }
        resultadoA2 = pontotA;
        resultadoB2 = pontotB;

        break;
        case 5:
        
        if(densiPopulacionalA < densiPopulacionalB){
            printf("Carta 1 - %s (%s) Densidade Populacional: %.2f\n", cidadeA, estadoA, densiPopulacionalA);
                printf("Carta 2 - %s (%s) Densidade Populacional: %.2f\n", cidadeB, estadoB, densiPopulacionalB);
                    printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
        }else {
            printf("Carta 1 - %s (%s) Densidade Populacional: %.2f\n", cidadeA, estadoA, densiPopulacionalA);
                printf("Carta 2 - %s (%s) Densidade Populacional: %.2f\n", cidadeB, estadoB, densiPopulacionalB);
                    printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
        }
        resultadoA2 = densiPopulacionalA;
        resultadoB2 = densiPopulacionalB;

        break;
        case 6:
        
        if(pibPerCapitaA > pibPerCapitaB){
            printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", cidadeA, estadoA, pibPerCapitaA);
                printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", cidadeB, estadoB, pibPerCapitaB);
                    printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
        }else {
            printf("Carta 1 - %s (%s) PIB per capita: %.2f\n", cidadeA, estadoA, pibPerCapitaA);
                printf("Carta 2 - %s (%s) PIB per capita: %.2f\n", cidadeB, estadoB, pibPerCapitaB);
                    printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
        }
        resultadoA2 = pibPerCapitaA;
        resultadoB2 = pibPerCapitaB;

        break;
        case 7:
        
        if(superPoderA > superPoderB){
            printf("Carta 1 - %s (%s) SuperPoder: %lu\n", cidadeA, estadoA, superPoderA);
                printf("Carta 2 - %s (%s) SuperPoder: %lu\n", cidadeB, estadoB, superPoderB);
                    printf("Resultado: Carta 1 (%s) Venceu!!!!\n", cidadeA);
        }else {
            printf("Carta 1 - %s (%s) SuperPoder: %lu\n", cidadeA, estadoA, superPoderA);
                printf("Carta 2 - %s (%s) SuperPoder: %lu\n", cidadeB, estadoB, superPoderB);
                    printf("Resultado: Carta 2 (%s) Venceu!!!!\n", cidadeB);
        }
        resultadoA2 = superPoderA;
        resultadoB2 = superPoderB;

        default:
        printf("Escolha inválida");
}
}
    float somaTotalA = resultadoA1 + resultadoA2;
    float somaTotalB = resultadoB2 + resultadoB2;

    if(somaTotalA > somaTotalB){
        printf("A carta A venceu com: %.2f pontos", somaTotalA);
    } else {
        printf("A Carta 2 venceu com: %.2f pontos", somaTotalB);
    }
    
    return 0;
}
