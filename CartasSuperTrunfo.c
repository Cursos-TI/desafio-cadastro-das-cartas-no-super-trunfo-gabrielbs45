#include <stdio.h>

int main() {
    printf("desafio cartas super triunfo!\n");
    // Declaração das variáveis para a carta 1
    char estado1 = 'A'; // Acre
    char codigo1[5] = "A01"; // Código fictício
    char nomeCidade1[50] = "Rio Branco"; // Cidade do Acre
    int populacao1 = 413418; // População fictícia
    float area1 = 83719.0; // Área em km²
    float pib1 = 5.2; // PIB em bilhões de reais
    int pontosTuristicos1 = 10; // Número de pontos turísticos

    // Declaração das variáveis para a carta 2
    char estado2 = 'S'; // Santa Catarina
    char codigo2[5] = "S02"; // Código fictício
    char nomeCidade2[50] = "Florianópolis"; // Cidade de Santa Catarina
    int populacao2 = 508826; // População fictícia
    float area2 = 675.4; // Área em km²
    float pib2 = 15.3; // PIB em bilhões de reais
    int pontosTuristicos2 = 25; // Número de pontos turísticos

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da carta 2
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







