#include <stdio.h>

int main(){
    // A = amazonas
    char estadoA[40];
    char codigoA[40] = "A";// a01 a02 a03 a04
    char cidadeA[20]; // amazonass
    int populacaoA; //
    float areakmA; //
    float pibA; //169700000.000
    int pontotA; // 50

    printf("******Carta Número 1*******\n");

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

    float densiPopulacional = populacaoA / areakmA;
    float pibPerCapita = pibA / populacaoA;

    printf("Carta 1: \n");
    printf("Estado: %s\n", estadoA);
    printf("Código: A%s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %i\n", populacaoA);
    printf("Área : %.2f\n", areakmA);
    printf("Pib: %.2f\n", pibA);
    printf("Pontos turisticos: %i\n", pontotA);
    printf("Densidade populacional: %.2f\n", densiPopulacional);
    printf("PIB per Capita: %.2f\n", pibPerCapita);

    // CARTA NUMERO 2
    // B = Bahia
    char estadoB[40]; //
    char codigoB[40]; //
    char cidadeB[40]; //
    int populacaoB; //
    float areakmB; //
    float pibB; //482800000.000
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

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoB);
    printf("Código: B%s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("Cidade: %f\n", populacaoB);
    printf("Área : %f\n", areakmB);
    printf("Pib: %f\n", pibB);
    printf("Pontos turisticos: %i\n", pontotB);
    printf("Densidade populacional: %.2f\n", densiPopulacionalB);
    printf("PIB per Capita: %.2f\n", pibPerCapitaB);

    return 0;
    
}
