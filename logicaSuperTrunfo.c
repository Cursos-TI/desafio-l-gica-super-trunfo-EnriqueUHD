#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
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
    int resultado1 = 0, resultado2 = 0;
    int primeiroAtributo, segundoAtributo;

    // Cadastro das Cartas:
    // Entrada de dados e leitura da carta 1
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

    densidade1 = (float)populacao1 / area1;

    // Multiplicação para converter para bilhões

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Entrada de dados e leitura da carta 2
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

    printf("Informe a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    /*
     Menu de comparação de Cartas
     Exibição de cada uma das opções para o usuário para seleção da comparação desejada
    */
    printf("Escolha qual dos atributos você quer comparar:\n");
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos Turisticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");
    printf("7. Super Poder:\n\n");

    printf("Entre com o primeiro atributo:\n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("****Atributo Escolhido: População!****\n\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("****Atributo Escolhido: Área!****\n\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("****Atributo Escolhido: PIB!****\n\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("****Atributo Escolhido: Pontos turisticos!****\n\n");
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        printf("****Atributo Escolhido: Densidade Populacional!****\n\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("****Atributo Escolhido: PIB per Capita!****\n\n");
        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        break;
    case 7:
        printf("****Atributo Escolhido: Super Poder!****\n\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    default:
        printf("****Opção inválida.****\n\n");
    }

    printf("Escolha o segundo atributo:\n");
    printf("!!!!! O atributo escolhido deve ser diferente do primeiro !!!!!\n");
    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos Turisticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");
    printf("7. Super Poder:\n\n");

    printf("Escolha a comparação:\n");
    printf("Entre com o primeiro atributo:\n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    }
    else
    {
        switch (segundoAtributo)
        {
        case 1:
            printf("****Atributo Escolhido: População!****\n\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("****Atributo Escolhido: Área!****\n\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("****Atributo Escolhido: PIB!****\n\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("****Atributo Escolhido: Pontos turisticos!****\n\n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("****Atributo Escolhido: Densidade Populacional!****\n\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("****Atributo Escolhido: PIB per Capita!****\n\n");
            resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            break;
        case 7:
            printf("****Atributo Escolhido: Super Poder!****\n\n");
            resultado2 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("****Opção inválida.****\n\n");
        }
    }

    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!");
    }
    else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    }
    else
    {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;
}
