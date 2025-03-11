#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_CARTAS 10
#define NUM_ATRIBUTOS 4

typedef struct {
    char nome[50];
    int atributos[NUM_ATRIBUTOS];
} Carta;

void inicializarCartas(Carta cartas[]) {
    char *nomes[NUM_CARTAS] = {"sergipe", "pernanbuco", "sãopaulo", "recife", "ceara", "alagoas", "piaui", "riodejaneiro", "motogrosso", ""};
    for (int i = 0; i < NUM_CARTAS; i++) {
        strcpy(cartas[i].nome, nomes[i]);
        for (int j = 0; j < NUM_ATRIBUTOS; j++) {
            cartas[i].atributos[j] = rand() % 10000 + 1; // Atributos de 1 a 10000
        }
    }
}

void mostrarCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Atributos:\n");
    printf("1. Densidade Populacional: %d\n", carta.atributos[0]);
    printf("2. Área: %d\n", carta.atributos[1]);
    printf("3. PIB per capita: %d\n", carta.atributos[2]);
    printf("4. População: %d\n", carta.atributos[3]);
}

int compararCartas(Carta carta1, Carta carta2, int atributoEscolhido) {
    if (carta1.atributos[atributoEscolhido] > carta2.atributos[atributoEscolhido]) {
        return 1;
    } else if (carta1.atributos[atributoEscolhido] < carta2.atributos[atributoEscolhido]) {
        return -1;
    } else {
        return 0;
    }
}
