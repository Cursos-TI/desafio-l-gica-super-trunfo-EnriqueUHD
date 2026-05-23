#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[30], nomeCidade2[30];
    char estadoCaracter1, estadoCaracter2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    char resultado[30];
    int escolhaDaComparacao;


    // Cadastro das Cartas:
    //Entrada de dados e leitura da carta 1
    printf("Insira as informações da primeira carta.\n");
    printf("Informe uma letra de 'A' a 'H' para representar um dos oito estados:\n");
    scanf("%c", &estadoCaracter1);

    printf("Informe o codigo entre 01 - 04:\n");
    scanf("%s", codigoCarta1);

    getchar();

    printf("Informa o nome da Cidade:\n");
    fgets(nomeCidade1, 20, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("Informe o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float) populacao1 / area1;

    //Multiplicação para converter para bilhões

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    //Entrada de dados e leitura da carta 2
    printf("Insira as informações da segunda carta.\n");
    printf("Informe uma letra de 'A' a 'H' para representar um dos oito estados:\n");
    scanf(" %c", &estadoCaracter2);

    printf("Informe o codigo entre 01 - 04:\n");
    scanf("%s", codigoCarta2);

    getchar();

    printf("Informa o nome da Cidade:\n");
    fgets(nomeCidade2, 20, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("Informe o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade:\n\n");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float) populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);


    /*
     Menu de comparação de Cartas
     Exibição de cada uma das opções para o usuário para seleção da comparação desejada
    */
   printf("Escolha qual dos atributos você quer comparar:");
   printf("1. População:");
   printf("2. Área:");
   printf("3. PIB:");
   printf("4. Pontos Turisticos:");
   printf("5. Densidade Populacional:");
   printf("6. PIB per capita:");
   printf("7. Super Poder:\n\n");
   scanf("%d", escolhaDaComparacao);

    switch (escolhaDaComparacao)
    {
        case 1 :
            printf("****Comparação de cartas (Atributo: População)****\n\n");
            printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("****Carta 1 venceu!****\n\n");
            } else if (populacao1 < populacao2) {
                printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        case 2 :
            printf("****Comparação de cartas (Atributo: Área)****\n\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("****Carta 1 venceu!****\n\n");
            } else if (area1 < area2) {
                printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        case 3 :
            printf("****Comparação de cartas (Atributo: PIB)****\n\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
            printf("****Carta 1 venceu!****\n\n");
            } else if (pib1 < pib2) {
            printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        case 4 :
            printf("****Comparação de cartas (Atributo: Pontos turisticos)****\n\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
            printf("****Carta 1 venceu!****\n\n");
            } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        case 5 :
            printf("****Comparação de cartas (Atributo: Densidade Populacional)****\n\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
            printf("****Carta 1 venceu!****\n\n");
            } else if (densidade1 > densidade2) {
            printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        case 6 :
            printf("****Comparação de cartas (Atributo: PIB per Capita)****\n\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
            printf("****Carta 1 venceu!****\n\n");
            } else if (pibPerCapita1 < pibPerCapita2) {
            printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        case 7 :
            printf("****Comparação de cartas (Atributo: Super Poder)****\n\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, superPoder1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2) {
            strcpy(resultado, nomeCidade1);
            printf("****Carta 1 venceu!****\n\n");
            } else if (superPoder1 < superPoder2) {
            printf("****Carta 2 venceu!****\n\n");
            } else {
                printf("****Empate!****\n\n");
            };
            break;
        default: printf("****Opção inválida.****\n\n");
    }

    return 0;
}

