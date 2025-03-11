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
    char *nomes[NUM_CARTAS] = {"Carro1", "Carro2", "Carro3", "Carro4", "Carro5", "Carro6", "Carro7", "Carro8", "Carro9", "Carro10"};
    for (int i = 0; i < NUM_CARTAS; i++) {
        strcpy(cartas[i].nome, nomes[i]);
        for (int j = 0; j < NUM_ATRIBUTOS; j++) {
            cartas[i].atributos[j] = rand() % 100 + 1; // Atributos de 1 a 100
        }
    }
}

void mostrarCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Atributos:\n");
    printf("1. Velocidade: %d\n", carta.atributos[0]);
    printf("2. Aceleracao: %d\n", carta.atributos[1]);
    printf("3. Potencia: %d\n", carta.atributos[2]);
    printf("4. Manobrabilidade: %d\n", carta.atributos[3]);
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

int main() {
    srand(time(NULL));
    Carta cartas[NUM_CARTAS];
    inicializarCartas(cartas);

    Carta cartaJogador = cartas[rand() % NUM_CARTAS];
    Carta cartaComputador = cartas[rand() % NUM_CARTAS];

    printf("Sua carta:\n");
    mostrarCarta(cartaJogador);

    printf("\nEscolha um atributo para comparar (1-4):\n");
    int atributoEscolhido;
    scanf("%d", &atributoEscolhido);
    atributoEscolhido--; // Ajustando para índice 0-3

    int resultado = compararCartas(cartaJogador, cartaComputador, atributoEscolhido);

    printf("\nCarta do Computador:\n");
    mostrarCarta(cartaComputador);

    if (resultado == 1) {
        printf("\nVoce ganhou!\n");
    } else if (resultado == -1) {
        printf("\nVoce perdeu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
