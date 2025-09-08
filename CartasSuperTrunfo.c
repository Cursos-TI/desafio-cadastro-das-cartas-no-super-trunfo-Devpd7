#include <stdio.h>  

int main() {
    // Parte do Nivel Novato: Declaracao das variaveis e leitura dos dados
    // (A partir do Nivel Mestre, a populacao muda para unsigned long int, entao já uso isso aqui)

    // Declaracao das variaveis para a Carta 1
    unsigned long int populacao1;  // Populacao da carta 1, numero inteiro grande
    float area1;                   // Area da carta 1, numero decimal
    float pib1;                    // PIB da carta 1, numero decimal
    int pontos_turisticos1;        // Numero de pontos turisticos da carta 1, numero inteiro

    // Declaracao das variaveis para a Carta 2
    unsigned long int populacao2;  // Populacao da carta 2
    float area2;                   // Area
    float pib2;                    // PIB
    int pontos_turisticos2;        // Pontos turisticos
    
    // Declaração das variáveis para o código da carta
    char estado1, estado2;
    int cidade1, cidade2;
    char codigo_carta1[4];  // 3 caracteres + '\0'
    char codigo_carta2[4];

    // Leitura do código da carta 1
    printf("Estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Cidade da Carta 1 (1-4): ");
    scanf("%d", &cidade1);

    // Leitura do código da carta 2
    printf("Estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Cidade da Carta 2 (1-4): ");
    scanf("%d", &cidade2);

    // Formar o código da carta
    sprintf(codigo_carta1, "%c%02d", estado1, cidade1);
    sprintf(codigo_carta2, "%c%02d", estado2, cidade2);


    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");              // Imprime mensagem para o usuario
    printf("Populacao: ");                         // Pede a populacao
    scanf("%lu", &populacao1);                     // Le o valor digitado pelo usuario
    printf("Area: ");                              // Pede a area
    scanf("%f", &area1);                           // Le o valor
    printf("PIB: ");                               // Pede o PIB
    scanf("%f", &pib1);                            // Le o valor
    printf("Numero de pontos turisticos: ");       // Pede os pontos
    scanf("%d", &pontos_turisticos1);              // Le o valor

    // Entrada dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");            
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Agora a parte do Nivel Aventureiro: Calculo dos novos atributos
    // Densidade Populacional: Populacao dividido por Area
    // PIB per Capita: PIB dividido por Populacao

    // Calculos para a Carta 1
    float densidade1 = populacao1 / area1;          // Calcula densidade da carta 1
    float pib_per_capita1 = pib1 / populacao1;      // Calcula PIB per capita da carta 1

    // Calculos para a Carta 2
    float densidade2 = populacao2 / area2;          // Calcula densidade da carta 2
    float pib_per_capita2 = pib2 / populacao2;      // Calcula PIB per capita da carta 2

    // Agora a parte do Nivel Mestre: Calculo do Super Poder e Comparacao
    // Super Poder: Soma de todos os atributos, mas densidade eh invertida (1/densidade)
    // Populacao é unsigned long int, entao vou converter para float para o calculo

    // Calculo do Super Poder da Carta 1
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);

    // Calculo do Super Poder da Carta 2
    float super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibicao dos dados da Carta 1
    printf("\nDados da Carta 1:\n");
    printf("Populacao: %lu\n", populacao1);         // Exibe populacao
    printf("Area: %.2f\n", area1);                  // Exibe area com 2 casas decimais
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);  // Exibe densidade calculada
    printf("PIB per Capita: %.2f\n", pib_per_capita1);     // Exibe PIB per capita
    printf("Super Poder: %.2f\n", super_poder1);           // Exibe super poder

    // Exibicao dos dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Parte do Nivel Mestre: Comparacao dos atributos
    // Vou usar condicoes (ifs) para verificar quem vence em cada atributo
    // 1 significa Carta 1 vence, 0 significa Carta 2 vence

    printf("\nComparacao das Cartas:\n");
    printf("Atributo Comparado | Vencedor (1 = Carta 1, 0 = Carta 2)\n");

// Variaveis para contar quantas vezes cada carta venceu
int vitorias_carta1 = 0;
int vitorias_carta2 = 0;

// Comparacao de Populacao: Maior ganha
if (populacao1 > populacao2) {
    printf("Populacao         | 1\n");
    vitorias_carta1++;
} else {
    printf("Populacao         | 0\n");
    vitorias_carta2++;
}

// Comparacao de Area
if (area1 > area2) {
    printf("Area               | 1\n");
    vitorias_carta1++;
} else {
    printf("Area               | 0\n");
    vitorias_carta2++;
}

// Comparacao de PIB
if (pib1 > pib2) {
    printf("PIB                | 1\n");
    vitorias_carta1++;
} else {
    printf("PIB                | 0\n");
    vitorias_carta2++;
}

// Comparacao de Pontos Turisticos
if (pontos_turisticos1 > pontos_turisticos2) {
    printf("Pontos Turisticos  | 1\n");
    vitorias_carta1++;
} else {
    printf("Pontos Turisticos  | 0\n");
    vitorias_carta2++;
}

// Comparacao de Densidade Populacional: Menor ganha
if (densidade1 < densidade2) {
    printf("Densidade          | 1\n");
    vitorias_carta1++;
} else {
    printf("Densidade          | 0\n");
    vitorias_carta2++;
}

// Comparacao de PIB per Capita
if (pib_per_capita1 > pib_per_capita2) {
    printf("PIB per Capita     | 1\n");
    vitorias_carta1++;
} else {
    printf("PIB per Capita     | 0\n");
    vitorias_carta2++;
}

// Comparacao de Super Poder
if (super_poder1 > super_poder2) {
    printf("Super Poder        | 1\n");
    vitorias_carta1++;
} else {
    printf("Super Poder        | 0\n");
    vitorias_carta2++;
}

// Agora mostramos quem ganhou no geral
printf("\nResultado Final:\n");
if (vitorias_carta1 > vitorias_carta2) {
    printf("Carta 1 venceu com %d atributos ganhos!\n", vitorias_carta1);
} else if (vitorias_carta2 > vitorias_carta1) {
    printf("Carta 2 venceu com %d atributos ganhos!\n", vitorias_carta2);
} else {
    printf("Empate! Cada carta venceu %d atributos.\n", vitorias_carta1);
}
    return 0;  
}
