#include <stdio.h>

int main(){
    // A = amazonas
    char estadoA[40];
    char codigoA[40] = "A";// a01 a02 a03 a04
    char cidadeA[40]; // amazonass
    int populacaoA; //
    float areakmA; //
    float pibA; //169700000.000
    int pontotA; // 50

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
    scanf("%f", &pontotA);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estadoA);
    printf("Código: A%s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("Cidade: %i\n", populacaoA);
    printf("Área : %f\n", areakmA);
    printf("Pib: %f\n", pibA);
    printf("Pontos turisticos: %i\n", pontotA);

    // CARTA NUMERO 2
    // B = Bahia
    char estadoB[40]; //
    char codigoB[40]; //
    char cidadeB[40]; //
    int populacaoB; //
    float areakmB; //
    float pibB; //482800000.000
    int pontotB; //

    printf("Carta número 2 \n");
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
    scanf("%f", &pontotB);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoB);
    printf("Código: B%s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("Cidade: %i\n", populacaoB);
    printf("Área : %f\n", areakmB);
    printf("Pib: %f\n", pibB);
    printf("Pontos turisticos: %i\n", pontotB);

}