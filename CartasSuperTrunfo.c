#include <stdio.h>

//Este é um programa que busca praticar a linguagem de programação C, através de um jogo de super trunfo com a temática de cidades.
int main ()
{
    //Declarando e inicializando as variáveis dos dados das cartas de super trunfo.
    char estadoc1 = 'A';
    char estadoc2 = 'B';
    char codigoc1[4] = "A01";
    char codigoc2[4] = "B02";
    char nomec1[20] = "JuizdeFora";
    char nomec2[20] = "Muriae";
    int populacaoc1 = 700000; int populacaoc2 = 120000;
    float tamanhoc1 = 1433.77; float tamanhoc2 = 841.693;
    float pibc1 = 20.3; float pibc2 = 2.7;
    int turismoc1 = 89; int turimsoc2 = 26;
    //Coletando os dados da carta1 do jogador:
    printf("Declare sua primeira carta agora: \n\n    Estado(A - H): ");
    scanf("%c", &estadoc1);
    printf("    Codigo: ");
    scanf("%s", &codigoc1);
    printf("    Nome da cidade: ");
    scanf("%s", &nomec1);
    printf("    Populacao: ");
    scanf("%d", &populacaoc1);
    printf("    Tamanho (em km²): ");
    scanf("%f", &tamanhoc1);
    printf("    PIB (em bilhões R$): ");
    scanf("%f", &pibc1);
    printf("    Numero de pontos turísticos: ");
    scanf("%d", &turismoc1);
    //Coletando os dados da carta2 do jogador:
    printf("\nDeclare sua segunda carta agora: \n\n    Estado(A - H): ");
    scanf(" %c", &estadoc2);
    printf("    Codigo: ");
    scanf("%s", &codigoc2);
    printf("    Nome da cidade: ");
    scanf("%s", &nomec2);
    printf("    Populacao: ");
    scanf("%d", &populacaoc2);
    printf("    Tamanho (em km²): ");
    scanf("%f", &tamanhoc2);
    printf("    PIB (em bilhões R$): ");
    scanf("%f", &pibc2);
    printf("    Numero de pontos turísticos: ");
    scanf("%d", &turimsoc2);
    //Resumo das cartas do jogador:
    printf("\n\n Carta 1: \n\n   Estado: %c \n   Codigo: %s \n   Nome da cidade: %s \n   Populacao: %d \n   Tamanho (em km²): %.2f \n   PIB (em bilhões R$): %.2f \n   Numero de pontos turísticos: %d \n", estadoc1, codigoc1, nomec1, populacaoc1, tamanhoc1, pibc1, turismoc1);
    printf("\n\n Carta 2: \n\n   Estado: %c \n   Codigo: %s \n   Nome da cidade: %s \n   Populacao: %d \n   Tamanho (em km²): %.2f \n   PIB (em bilhões R$): %.2f \n   Numero de pontos turísticos: %d \n", estadoc2, codigoc2, nomec2, populacaoc2, tamanhoc2, pibc2, turimsoc2);
    return 0;
}
