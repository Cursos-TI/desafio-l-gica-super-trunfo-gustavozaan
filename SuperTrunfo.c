#include <stdio.h>

int main() {


    //---Carta 1---
    char pais [50];
    char codigo [4];
    unsigned long populacao;
    float area;
    float pib;
    int turistico;
    float densidade;
    float capita;
    float soma;

    //---Carta 2---
    char pais2 [50];
    char codigo2 [4];
    unsigned long populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float capita2;
    float soma2;

     // ---CARTA 1---
    printf("Digite o nome do Estado (Carta 1): \n");
    scanf("%49s", pais);

    printf("Digite o Codigo da Carta 1: (Ex A01, B03).\n");
    scanf("%3s", codigo);

    printf("Digite a População da Cidade (Carta 1): \n");
    scanf("%lu", &populacao);

    printf("Digite a Área da Cidade em km² (Carta 1): \n");
    scanf("%f", &area);

    printf("Digite o Pib da Cidade (Carta 1): \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: (Carta 1): \n");
    scanf("%d", &turistico);

    // ---CARTA 2--
    printf("Digite o nome do Estado (Carta 2): \n");
    scanf("%49s", pais2);

    printf("Digite o Codigo da Carta 2: (Ex A01, B03).\n");
    scanf("%3s", codigo2);

    printf("Digite a População da Cidade (Carta 2): \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade em km² (Carta 2): \n");
    scanf("%f", &area2);

    printf("Digite o Pib da Cidade (Carta 2): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: (Carta 2): \n");
    scanf("%d", &turistico2);

    //--- Calculo de Densidade e PIB per capita ---
    densidade = (float) populacao / area;
    capita = pib / populacao;

    densidade2 = (float) populacao2 / area2;
    capita2 = pib2 / populacao2;

    //--- Soma Total---
    soma = populacao + area + pib + turistico + capita;
    soma2 = populacao2 + area2 + pib2 + turistico2 + capita2;


    //--- MENU INTERATIVO ---

    int escolhaJogador;
    printf("--- Comparação entre as Cartas ---\n");
    printf("Escolha uma opção para batalhar entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticosz\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Valor total\n");
    printf("7. Regras\n");
    scanf("%d", &escolhaJogador);

    //--- RESULTADO ---
    
    int resultado;

    switch (escolhaJogador)
    {
    case 1:
        printf("Comparação Atributo: População\n");
        printf("Carta 1 País: %s\n", pais);
        printf("Carta 2 País : %s\n", pais2);
        printf("Carta 1: \n%lu", populacao);
        printf("Carta 2: \n%lu", populacao2);
        printf("População: Carta %d venceu\n", (populacao > populacao2) ? 1 : 2);
    break;
    case 2:
        printf("Comparação Atributo: Área.\n");
        printf("Carta 1 País: %s\n", pais);
        printf("Carta 2 País : %s\n", pais2);
        printf("Carta 1: %f km²\n", area);
        printf("Carta 2: %f km²\n", area2);
        printf("Aréa: Carta %d venceu\n", (area > area2) ? 1 : 2);
    break;
    case 3:
        printf("Comparação Atributo: PIB.\n");
        printf("Carta 1 País: %s\n", pais);
        printf("Carta 2 País : %s\n", pais2);
        printf("Carta 1: %f bilhões\n", pib);
        printf("Carta 2: %f bilhões\n", pib2);
        printf("PIB: Carta %d venceu\n", (pib > pib2) ? 1 : 2);
    case 4:            
        printf("Comparação Atributo: Pontos Turísticos.\n");
        printf("Carta 1 País: %s\n", pais);
        printf("Carta 2 País : %s\n", pais2);
        printf("Carta 1: %d\n", turistico);
        printf("Carta 2: %d\n", turistico2);
        printf("Pontos Turisticos: Carta %d venceu\n", (turistico > turistico2) ? 1 : 2);
    break;
    case 5:
        printf("Comparação Atributo: Densidade.\n");
        printf("Lembrete A carta com a menor densidade ganha.");
        printf("Carta 1 País: %s\n", pais);
        printf("Carta 2 País : %s\n", pais2);
        printf("Carta 1: %f hab/km²\n", densidade);
        printf("Carta 2: %f hab/km²\n", densidade2);
        printf("Densidade: Carta %d venceu\n", (densidade < densidade2) ? 1 : 2);
    break;
    case 6:
        printf("Carta 1 País: %s\n", pais);
        printf("Carta 2 País : %s\n", pais2);
        printf("Carta 1: %f\n", soma);
        printf("Carta 1: %f\n", soma2);
        printf("Soma total: Carta %d venceu\n", (soma > soma2) ? 1 : 2);
    break;
    case 7:
        printf("\n--- Regras do jogo ---\n");
        printf("1. a carta com o maior valor vence.\n");
        printf("2. POREM: na Densidade Demográfica, a carta com o MENOR valor vence.\n");
        printf("3. Em caso de valores iguais, ocorre um EMPATE.\n");
    default:
           printf("Opção invalida. \n");
    break;
        
return 0;
}
    