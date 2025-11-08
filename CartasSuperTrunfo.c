#include <stdio.h>

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[20] = "São Paulo";
    char codigo1[4] = "SP";
    char cidade1[20] = "São Paulo"; 
    int populacao1 = 12345678;
    float area1 = 1521.21, pib1 = 845.67;
    int pontos_turisticos1 = 19;

    char estado2[20] = "Rio de Janeiro";
    char codigo2[4] = "RJ";
    char cidade2[20] = "Rio de Janeiro";
    int populacao2 = 6747815;
    float area2 = 1182.30, pib2 = 699.33;
    int pontos_turisticos2 = 25;
  
    // Área para exibição dos dados da cidade
    printf("\n\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %s (%s)\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %s (%s)\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
return 0;
} 
