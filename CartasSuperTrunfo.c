#include <stdio.h>

struct Carta {
    char Estado;
    char Codigo_da_carta[5];
    char Nome_da_cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Numero_pontos_turisticos;
};

int main() {

 struct Carta carta1, carta2;

    printf("\n====CADASTRO DAS CARTAS====\n ");

    // Entrada carta 1
    printf("\n Digite o Estado da carta 1: \n");
    scanf(" %c", &carta1.Estado);

    printf("Digite o Codigo da carta 1: ");
    scanf("%s", carta1.Codigo_da_carta);

    printf("Digite o Nome da cidade: ");
    scanf("%s", carta1.Nome_da_cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta1.Populacao);

    printf("Digite a Area: ");
    scanf("%f", &carta1.Area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.PIB);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &carta1.Numero_pontos_turisticos);

    // Entrada carta 2
    printf("\nDigite o Estado da carta 2: ");
    scanf(" %c", &carta2.Estado);

    printf("Digite o Codigo da carta 2: ");
    scanf("%s", carta2.Codigo_da_carta);

    printf("Digite o Nome da cidade: ");
    scanf("%s", carta2.Nome_da_cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta2.Populacao);

    printf("Digite a Area: ");
    scanf("%f", &carta2.Area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.PIB);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &carta2.Numero_pontos_turisticos);

    // Exibição carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.Estado);
    printf("Codigo: %s\n", carta1.Codigo_da_carta);
    printf("Nome da cidade: %s\n", carta1.Nome_da_cidade);
    printf("Populacao: %d\n", carta1.Populacao);
    printf("Area: %.2f km²\n", carta1.Area);
    printf("PIB: %.2f\n", carta1.PIB);
    printf("Numero de pontos turisticos: %d\n", carta1.Numero_pontos_turisticos);

    // Exibição carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("Codigo: %s\n", carta2.Codigo_da_carta);
    printf("Nome da cidade: %s\n", carta2.Nome_da_cidade);
    printf("Populacao: %d\n", carta2.Populacao);
    printf("Area: %.2f km²\n", carta2.Area);
    printf("PIB: %.2f\n", carta2.PIB);
    printf("Numero de pontos turisticos: %d\n", carta2.Numero_pontos_turisticos);

    return 0;

return 0;
} 
