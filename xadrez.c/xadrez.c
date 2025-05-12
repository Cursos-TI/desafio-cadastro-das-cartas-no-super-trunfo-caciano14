#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[50];
    char codigo[20];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcularIndicadores(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
}

// Função para imprimir informações da carta
void imprimirCarta(Carta c) {
    printf("Cidade: %s (%s)\n", c.nomeCidade, c.estado);
    printf("Código: %s\n", c.codigo);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n\n", c.pibPerCapita);
}

int main() {
    // Cartas pré-definidas
    Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 750.50, 12};
    Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6700000, 1182.30, 400.75, 10};

    // Calcular indicadores
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    // Imprimir cartas
    printf("==== Carta 1 ====\n");
    imprimirCarta(carta1);

    printf("==== Carta 2 ====\n");
    imprimirCarta(carta2);

    // Comparação de cartas (Atributo: População)
    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
