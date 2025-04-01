#include <stdio.h>

int main() {
    char Estado = 'A';
    char Codigo_da_Carta[20] = "A01";
    char Nome_da_Cidade[20] = "Sao Paulo";
    int Populacao = 12325000;
    float Area = 1521.11;
    float PIB = 699.28;
    int Numero_de_Pontos_Turisticos = 50;

   
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo da Carta: %s\n", Codigo_da_Carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km2\n", Area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_Pontos_Turisticos);
    
    char Estado2 = 'B';
    char Codigo_da_Carta2[20] = "B02";
    char Nome_da_Cidade2[20] = "Rio de Janeiro";
    int Populacao2 = 6748000; 
    float Area2 = 1182.34;
    float PIB2 = 700.0;
    int Numero_de_Pontos_Turisticos2 = 30;

    printf("Carta 2:\n");
    printf("Estado2: %c\n", Estado2);
    printf("Codigo da Carta2: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade2: %s\n", Nome_da_Cidade2);
    printf("Populacao2: %d\n", Populacao2);
    printf("Area2: %.2f km2\n", Area2);
    printf("PIB2: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos2: %d\n", Numero_de_Pontos_Turisticos2);
}