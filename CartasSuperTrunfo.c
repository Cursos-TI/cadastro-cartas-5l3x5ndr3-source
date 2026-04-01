//Adicionado 2 variáveis para calcular a densidade populacional e o PIB per capita, e adicionado o cálculo dessas variáveis após a entrada dos dados.
//Adiciona comentários explicando o código, para facilitar a compreensão do programa.
//Nível Novato e Aventureiro concluído.
//Adicionado a comparação dos atributos das cartas, indicando qual carta venceu em cada categoria, e o resultado da comparação (1 para vitória da carta 1, 0 para vitória da carta 2).
//Adicionado e modificado variáveis.


#include <stdio.h>


// Estrututa para representar uma carta.

struct Carta {
    char Estado;// Usar char para armazenar a sigla do estado (ex: 'SP', 'RJ', etc.)
    char Codigo_da_carta[5];// Usar um array de char para armazenar o código da carta (ex: "C1", "C2", etc.)
    char Nome_da_cidade[50];
    unsigned long int Populacao;//unsigned: apenas valores positivos (população não pode ser negativa), int: maior capacidade de armazenamento
    float Area;// Usar float para armazenar a área, já que pode ser um número decimal.
    float PIB;
    int Numero_pontos_turisticos;
    float Densidade_populacional;
    float PIB_per_capita;
    float super_poder;
};


int main() {// Função principal do programa

// Declaração das cartas

 struct Carta carta1, carta2;

    printf("\n====CADASTRO DAS CARTAS====\n ");

    // Entrada carta 1

    printf("\nDigite o Estado da carta 1: ");
    scanf(" %c", &carta1.Estado);

// O espaço antes de %c é para consumir qualquer caractere de nova linha que possa estar no buffer, garantindo que a leitura do caractere seja correta.
    printf("Digite o Codigo da carta 1: ");
    scanf("%s", carta1.Codigo_da_carta);

// O %s é usado para ler uma string, e o nome do array (carta1.Codigo_da_carta) é passado sem o & porque o nome do array já representa o endereço do primeiro elemento.
    printf("Digite o Nome da cidade: ");
    scanf("%s", carta1.Nome_da_cidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &carta1.Populacao);
// O %lu é usado para ler um número inteiro sem sinal (unsigned long int), e o & é necessário para passar o endereço da variável carta1.Populacao, onde o valor lido será armazenado.
   
    printf("Digite a Area: ");
    scanf("%f", &carta1.Area);
// O %f é usado para ler um número decimal (float), e o & é necessário para passar o endereço da variável carta1.Area, onde o valor lido será armazenado.
    
    printf("Digite o PIB: ");
    scanf("%f", &carta1.PIB);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &carta1.Numero_pontos_turisticos);
    
     // Calculos carta 1
    carta1.Densidade_populacional = carta1.Populacao / carta1.Area;
    carta1.PIB_per_capita = carta1.PIB / carta1.Populacao;

    // Cálculo do Super Poder da carta 1
    float  Densidade_populacional = 1.0f / carta1.Densidade_populacional;
    carta1.super_poder = (float)carta1.Populacao + carta1.Area + carta1.PIB + (float)carta1.Numero_pontos_turisticos + carta1.PIB_per_capita + inverso "Densidade_populacional";

    
    // Entrada carta 2

    printf("\nDigite o Estado da carta 2: ");
    scanf(" %c", &carta2.Estado);

    printf("Digite o Codigo da carta 2: ");
    scanf("%s", carta2.Codigo_da_carta);

    printf("Digite o Nome da cidade: ");
    scanf("%s", carta2.Nome_da_cidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &carta2.Populacao);

    printf("Digite a Area: ");
    scanf("%f", &carta2.Area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.PIB);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &carta2.Numero_pontos_turisticos);

     // Calculos carta 2
    carta2.Densidade_populacional = carta2.Populacao / carta2.Area;
    carta2.PIB_per_capita = carta2.PIB / carta2.Populacao;

    // Cálculo do Super Poder da carta 1
    float  Densidade_populacional = 1.0f / carta2.Densidade_populacional;
    carta1.super_poder = (float)carta2.Populacao + carta1.Area + carta2.PIB + (float)carta2.Numero_pontos_turisticos + carta2.PIB_per_capita + Densidade_populacional;

    // Exibição carta 1
    printf("\n=====================================\n");
    printf("\n    DADOS DA CARTA 1 \n");
    printf("\n-------------------------------------\n");
    printf("Estado: %c\n", carta1.Estado);// O %c é usado para exibir um caractere, e carta1.Estado é passado como argumento para exibir o valor armazenado nessa variável.
    printf("Codigo: %s\n", carta1.Codigo_da_carta);// O %s é usado para exibir uma string, e carta1.Codigo_da_carta é passado como argumento para exibir o valor armazenado nessa variável.
    printf("Nome da cidade: %s\n", carta1.Nome_da_cidade);
    printf("Populacao: %lu habitantes\n", carta1.Populacao);// O %lu é usado para exibir um inteiro sem sinal, e carta1.Populacao é passado como argumento para exibir o valor armazenado nessa variável.
    printf("Area: %.2f km²\n", carta1.Area);// O %.2f é usado para exibir um número decimal (float) com 2 casas decimais, e carta1.Area é passado como argumento para exibir o valor armazenado nessa variável.
    printf("PIB: %.2f\n", carta1.PIB);
    printf("Numero de pontos turisticos: %d\n", carta1.Numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.Densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.PIB_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);
    printf("========================================\n");


    // Exibição carta 2

    printf("\n=====================================\n");
    printf("\n    DADOS DA CARTA 2 \n");
    printf("\n-------------------------------------\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("Codigo: %s\n", carta2.Codigo_da_carta);
    printf("Nome da cidade: %s\n", carta2.Nome_da_cidade);
    printf("Populacao: %lu habitantes\n", carta2.Populacao);
    printf("Area: %.2f km²\n", carta2.Area);
    printf("PIB: %.2f\n", carta2.PIB);
    printf("Numero de pontos turisticos: %d\n", carta2.Numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.Densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.PIB_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);
    printf("========================================\n");
    
    // Comparação dos atributos
    printf("\n=== Resultado das Comparacoes ===\n");
    
    // População (maior vence)
    printf("Populacao: Carta %d venceu (%d)\n", 
           (carta1.Populacao > carta2.Populacao) ? 0 : 1,
           (carta1.Populacao > carta2.Populacao));
    
    // Área (maior vence)
    printf("Area: Carta %d venceu (%d)\n",
           (carta1.Area > carta2.Area) ? 0 : 1,
           (carta1.Area > carta2.Area));
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.PIB > carta2.PIB) ? 0 : 1,
           (carta1.PIB > carta2.PIB));
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (carta1.Numero_pontos_turisticos > carta2.Numero_pontos_turisticos) ? 0 : 1,
           (carta1.Numero_pontos_turisticos > carta2.Numero_pontos_turisticos));
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (carta1.Densidade_populacional < carta2.Densidade_populacional) ? 0 : 1,
           (carta1.Densidade_populacional < carta2.Densidade_populacional));
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (carta1.PIB_per_capita > carta2.PIB_per_capita) ? 0 : 1,
           (carta1.PIB_per_capita > carta2.PIB_per_capita));
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n",
           (carta1.super_poder > carta2.super_poder) ? 0 : 1,
           (carta1.super_poder > carta2.super_poder));

    
   
return 0;
} 
