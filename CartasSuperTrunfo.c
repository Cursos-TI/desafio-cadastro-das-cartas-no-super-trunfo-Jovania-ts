#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jovania

int main() {

 //Adicionar variáveis.



    int populacao1,populacao2;

    int PontosTuristicos1,PontosTuristicos2;

    float Area1,Area2;

    float PIB1,PIB2;

    char codigo1[15], codigo2[30];

    char Estado1, Estado2;

    char cidade1[10],cidade2[20];



    printf("Digite o nome da cidade: \n");

    scanf("%s", &cidade1[10]);



    printf("Digite o código da cidade: \n");

    scanf("%s", &codigo1[15]);



    printf("Digite a população, da cidade: \n");

    scanf("%d", &populacao1);



    printf("Digite o número de pontos turísticos: \n");

    scanf("%d", &PontosTuristicos1);



    printf("Digite o estado que é uma letra de 'A' a 'H': \n");

    scanf(" %c", &Estado1);



    printf("Digite a área: \n");

    scanf("%f", &Area1);



    printf("Digite o PIB: \n");

    scanf("%f", &PIB1);



    printf("informações da cidade 2 \n");

    printf("Digite o nome da cidade: \n");

    scanf("%s", &cidade2[20]);



    printf("Digite o código da cidade: \n");

    scanf("%s", &codigo2[30]);



    printf("Digite a população, da cidade: \n");

    scanf("%d", &populacao2);



    printf("Digite o número de pontos turísticos: \n");

    scanf("%d", &PontosTuristicos2 );



    printf("Digite o estado que é uma letra de 'A' a 'H': \n");

    scanf(" %c", &Estado2);



    printf("Digite a área: \n");

    scanf("%f", &Area2);



    printf("Digite o PIB: \n");

    scanf("%f", &PIB2);



    printf("Cidade 1 \n");

    printf("Estado: %c\n", Estado1);

    printf("Código: %s\n", codigo1[15]);

    printf("Nome da cidade: %s \n", cidade1[10]);

    printf("População: %d \n", populacao1);

    printf("Área: %f \n", Area1);

    printf("PIB: %f", PIB1);

    printf("Número de pontos turísticos: %d", PontosTuristicos1);



    printf("Cidade 2 \n");

    printf("Estado: %c \n", Estado2);

    printf("Código: %s \n", codigo2[30]);

    printf("Nome da cidade: %s \n", cidade2[20]);

    printf("População: %d \n", populacao2);

    printf("Área: %f \n", Area2);

    printf("PIB: %f", PIB2);

    printf("Número de pontos turísticos: %d", PontosTuristicos2);



    return 0;
}
