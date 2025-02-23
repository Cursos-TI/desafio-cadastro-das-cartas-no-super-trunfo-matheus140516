//Criando variaveis 

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

     // Coleta de dados para a primeira carta
     printf("Digite os dados da Carta 1:\n");
     printf("Estado (A-H): ");
     scanf(" %c", &estado1);
     printf("Código da Carta (ex: A01): ");
     scanf("%s", codigo1);
     printf("Nome da Cidade: ");
     scanf(" %[^\n]", nomeCidade1); // Lê até a nova linha
     printf("População: ");
     scanf("%d", &populacao1);
     printf("Área (em km²): ");
     scanf("%f", &area1);
     printf("PIB (em bilhões de reais): ");
     scanf("%f", &pib1);
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &pontosTuristicos1);
 
     // Coleta de dados para a segunda carta
     printf("\nDigite os dados da Carta 2:\n");
     printf("Estado (A-H): ");
     scanf(" %c", &estado2);
     printf("Código da Carta (ex: B02): ");
     scanf("%s", codigo2);
     printf("Nome da Cidade: ");
     scanf(" %[^\n]", nomeCidade2); // Lê até a nova linha
     printf("População: ");
     scanf("%d", &populacao2);
     printf("Área (em km²): ");
     scanf("%f", &area2);
     printf("PIB (em bilhões de reais): ");
     scanf("%f", &pib2);
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &pontosTuristicos2);
 
     // Exibição dos dados da primeira carta
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nomeCidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
 
     // Exibição dos dados da segunda carta
     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nomeCidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
 
     return 0;
 }