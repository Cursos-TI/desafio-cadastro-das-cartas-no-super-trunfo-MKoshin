#include <stdio.h>

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
    scanf("%s", &estadoA);

    printf("Digite um código da cidade de 01 a 04: ");
    scanf("%s", &codigoA);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidadeA);

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
    unsigned long superPoderA = (float) populacaoA + areakmA + pibA + pontotA + pibPerCapitaA - densiPopulacionalA; 

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
    scanf("%s", &estadoB);

    printf("Digite um código da cidade de 01 a 04: ");
    scanf("%s", &codigoB);

    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidadeB);

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
    unsigned long superPoderB = (float) populacaoB + areakmB + pibB + pontotB + pibPerCapitaB - densiPopulacionalB;

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

    printf("ESCOLHA QUAL ATRIBUTO SERÁ COMPARADO ENTRE AS CARTAS: \n");
    printf("1. Atributo: População\n");
    printf("2. Atributo: Área\n");
    printf("3. Atributo: Pib\n");
    printf("4. Atributo: Pontos turisticos\n");
    printf("5. Atributo: Densisade Populacional\n");
    printf("6. Atributo: PibPerCapita\n");
    printf("7. Atributo: SuperPoder\n");
    scanf("%d", &escolhaJogador);


    // OPÇÕES A FUNCIONAR
    switch(escolhaJogador) {

                // CASE 1 irá comparar população
        case 1:

            if(populacaoA > populacaoB){
                printf("Carta 1 - %s (%s) PIB: %d\n", cidadeA, estadoA, populacaoA);
                    printf("Carta 2 - %s (%s) PIB: %d\n", cidadeB, estadoB, populacaoB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %d\n", cidadeA, estadoA, populacaoA);
                    printf("Carta 2 - %s (%s) PIB: %d\n", cidadeB, estadoB, populacaoB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                break;

                // Case 2 irá comparar área
        case 2:

            if(areakmA > areakmB){
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, areakmA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, areakmB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, areakmA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, areakmB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                 break;

                 // CASE 3 irá comparar PIB
        case 3:

            if(pibA > pibB){
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                break;

                // CASE 4 irá comparar pontos turisticos
        case 4:

            if(pontotA > pontotB){
                printf("Carta 1 - %s (%s) PIB: %d\n", cidadeA, estadoA, pontotA);
                    printf("Carta 2 - %s (%s) PIB: %d\n", cidadeB, estadoB, pontotB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %d\n", cidadeA, estadoA, pontotA);
                    printf("Carta 2 - %s (%s) PIB: %d\n", cidadeB, estadoB, pontotB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                break;

                // CASE 5 COMPARAR Densidade Populacional
        case 5:

            if(densiPopulacionalA < densiPopulacionalB){
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, densiPopulacionalA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, densiPopulacionalB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, densiPopulacionalA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, densiPopulacionalB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                break;

                // CASE 6 COMPARAR Pib Per Capita
        case 6:

            if(pibPerCapitaA > pibPerCapitaB){
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibPerCapitaA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibPerCapitaB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %.2f\n", cidadeA, estadoA, pibPerCapitaA);
                    printf("Carta 2 - %s (%s) PIB: %.2f\n", cidadeB, estadoB, pibPerCapitaB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                break;

            // CASE 7 COMPARAR SUPERPODER
        case 7:

            if(superPoderA > superPoderB){
                printf("Carta 1 - %s (%s) PIB: %lu\n", cidadeA, estadoA, superPoderA);
                    printf("Carta 2 - %s (%s) PIB: %lu\n", cidadeB, estadoB, superPoderB);
                        printf("Resultado: Carta 1 (%s) Venceu!!!!", cidadeA);
            }else {
                printf("Carta 1 - %s (%s) PIB: %lu\n", cidadeA, estadoA, superPoderA);
                    printf("Carta 2 - %s (%s) PIB: %lu\n", cidadeB, estadoB, superPoderB);
                        printf("Resultado: Carta 2 (%s) Venceu!!!!", cidadeB);
            }
                break;

        // DEFAULT IRÁ DEFINIR QUALQUER ERRO NA SELEÇÃO
        default:
        printf("Opção inválida");
    }

    // COMPARAR OS VALORES

    /*int resultadoPopulacao = populacaoA > populacaoB;
    int resultadoArea = areakmA > areakmB;
    int resultadoPib = pibA > pibB;
    int resultadoPontoTuristico = pontotA > pontotB;
    int resultadoDensidadePopulacional = (densiPopulacional) * -1 > (densiPopulacionalB) * -1;
    int resultadoPibPerCapita = pibPerCapita > pibPerCapitaB;
    int resultadoSuperPoder = superPoderB > superPoderB;

    // MOSTRANDO RESULTADOS

    printf("*********Comparação de cartas********");

    printf("População: Carta %d (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    printf("Área: Carta %d (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    printf("Pib: Carta %d (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
    printf("Ponto Turistico: Carta %d (%d)\n", resultadoPontoTuristico ? 1 : 2, resultadoPontoTuristico);
    printf("Pib PerCapita: Carta %d (%d)\n", resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);
    printf("Densidade Populacional: Carta %d (%d)\n", resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);
    printf("Super Poder: Carta %d (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);*/

    return 0;
    
}
