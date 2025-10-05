#include <stdio.h>

int main() {


    //---Carta 1---
    char estado [50];
    char codigo [4];
    char cidade [50];
    unsigned long populacao;
    float area;
    float pib;
    int turistico;
    float densidade;
    float capita;

    //---Carta 2---
    char estado2 [50];
    char codigo2 [4];
    char cidade2 [50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float capita2;
        
     // ---CARTA 1---
    printf("Digite o nome do Estado (Carta 1): \n");
    scanf("%49s", estado);

    printf("Digite o Codigo da Carta 1: (Ex A01, B03).\n");
    scanf("%3s", codigo);

    printf("Digite a Cidade do Estado escolhido (Carta 1): \n");
    scanf("%49s", cidade);

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
    scanf("%49s", estado2);

    printf("Digite o Codigo da Carta 2: (Ex A01, B03).\n");
    scanf("%3s", codigo2);

    printf("Digite a Cidade do Estado escolhido (Carta 2): \n");
    scanf("%49s", cidade2);

    printf("Digite a População da Cidade (Carta 2): \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade em km² (Carta 2): \n");
    scanf("%f", &area2);

    printf("Digite o Pib da Cidade (Carta 2): \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: (Carta 2): \n");
    scanf("%d", &turistico2);

    //---Calculo de Densidade e PIB per capita---
    densidade = (float) populacao / area;
    capita = pib / populacao;

    densidade2 = (float) populacao2 / area2;
    capita2 = pib2 / populacao2;


    //---EXIBIÇÃO E BATALHA DAS CARTAS---

    printf("\n --- BATALHA ENTRE AS CARTAS ---\n");
    printf("Carta 1 - %s (%s): %lu\n", estado, cidade, populacao);
    printf("Carta 2 - %s (%s): %lu\n", estado2, cidade2, populacao2);
   
    printf("---População---\n");
    if (populacao > populacao2){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("---Área---\n");
    printf("Carta 1 - %s (%s): %.2f\n", estado, cidade, area);
    printf("Carta 2 - %s (%s): %.2f\n", estado2, cidade2, area2);

    if (area > area2){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("---PIB---\n");
    printf("Carta 1 - %s (%s): %.2f\n", estado, cidade, pib);
    printf("Carta 2 - %s (%s): %.2f\n", estado2, cidade2, pib2);

    if (pib > pib2){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("---Pontos Turístico---\n");
    printf("Carta 1 - %s (%s): %.2f\n", estado, cidade, turistico);
    printf("Carta 2 - %s (%s): %.2f\n", estado2, cidade2, turistico2);

     if (turistico > turistico2){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("---Densidade---\n");
    printf("Carta 1 - %s (%s): %.2f\n", estado, cidade, densidade);
    printf("Carta 2 - %s (%s): %.2f\n", estado2, cidade2, densidade2);

         if (densidade < densidade2){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }
 
    return 0;
}