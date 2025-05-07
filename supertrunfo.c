#include <stdio.h>

int main() {
    // Carta 01
    char estado1;
    char codigocarta1[4];
    char nomecidade1[50];
    unsigned long int populacao1; 
    int pontostur1;
    float pib1, area_km1;
    float densidade1, pib_percapita1; 
    float superpodercarta01;

    // Carta 02
    char estado2; 
    char codigocarta2[4];
    char nomecidade2[50];
    unsigned long int populacao2; 
    int pontostur2;
    float pib2, area_km2;
    float densidade2, pib_percapita2;
    float superpodercarta02; 

    // Entrada de dados da Carta 01
    printf("Primeiramente iremos inserir as informações correspondentes à Carta 01!!\n");

    printf("Digite uma letra maiúscula entre A e H (ela irá corresponder à carta 01): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (a letra inserida anteriormente + um número de 01 a 04): \n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade que a carta corresponderá: \n");
    scanf(" %s", nomecidade1);

    printf("Digite a quantidade da população dessa cidade: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a área em km² da cidade: \n");
    scanf(" %f", &area_km1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontostur1);
    
    // Calculos 02 
    pib_percapita1 = pib1 / (float) populacao1; 
    densidade1 = populacao1 / area_km1;

    printf("\nOK! Você já inseriu os dados da Carta 01.\n\n");

    // Entrada de dados da Carta 02
    printf("Agora iremos inserir as informações correspondentes à Carta 02!!\n");

    printf("Digite uma letra maiúscula entre A e H (ela irá corresponder à carta 02): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (a letra inserida anteriormente + um número de 01 a 04): \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade que a carta corresponderá: \n");
    scanf(" %s", nomecidade2);

    printf("Digite a quantidade da população dessa cidade: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a área em km² da cidade: \n");
    scanf(" %f", &area_km2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontostur2);

    // Calculos 02
    pib_percapita2 = pib2 / (float) populacao2; 
    densidade2 = populacao2 / area_km2;

    // SuperPoder de cada carta.
    superpodercarta01 = populacao1 + area_km1 + pib1 + (float) pontostur1 + pib_percapita1 + (-densidade1);
    superpodercarta02 = populacao2 + area_km2 + pib2 + (float) pontostur2 + pib_percapita2 + (-densidade2);

    // Comparações dos atributos...
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (area_km1 > area_km2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (pontostur1 > pontostur2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (pib_percapita1 > pib_percapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (superpodercarta01 > superpodercarta02) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    // Exibição das informações das cartas
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em km²: %.2f\n", area_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontostur1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_percapita1);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontostur2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_percapita2);

    return 0;
}
