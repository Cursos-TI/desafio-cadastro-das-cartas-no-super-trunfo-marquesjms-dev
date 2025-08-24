#include <stdio.h>

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

    //Declarando Variáveis

char estado1 = 'A';
char estado2 = 'B';
char codigo1 [30];
char codigo2 [30];
char cidade1 [50];
char cidade2 [50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontotur1, pontotur2;

//Identificação dos Estados

    printf(" Estado 1 - Paraná = A\n Estado 2 - Tocantins = B\n");

//inserção de dados do estado 1 pelo usuário

    printf("\nEstado 1: \n");
    printf ("%c\n",estado1);

    printf("Insira código da Cidade 1(Cidade 1 = A01 e Cidade 2 = B01) \n");
    scanf("%s",codigo1);

    printf("Insira nome da cidade 1: \n");
    scanf("%s",cidade1);

    printf("Insira nº d habitantes da cidade 1: \n");
    scanf("%d",&populacao1);

    printf("Insira área da cidade 1 (em Km²): \n");
    scanf("%f",&area1);

    printf("Insira PIB da cidade 1 (em Bilhões de R$): \n");
    scanf("%f",&pib1);

    printf("Insira quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d",&pontotur1);

//inserção de dados do estado 2 pelo usuário

    printf("\nEstado 2: \n");
    printf("%c\n",estado2);

    printf("Insira código da Cidade 2 (Cidade 1 = A01 e Cidade 2 = B01): \n");
    scanf("%s",codigo2);

    printf("Insira nome da cidade 2: \n");
    scanf("%s",cidade2);

    printf("Insira nº d habitantes da cidade 2: \n");
    scanf("%d",&populacao2);

    printf("Insira área da cidade 2 (em Km²): \n");
    scanf("%f",&area2);

    printf("Insira PIB da cidade 2 (em Bilhões de R$): \n");
    scanf("%f",&pib2);

    printf("Insira quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d",&pontotur2);

//apresentação dos dados inseridos dos Estados 1 e 2

    printf("\n Informações Cadastradas com Sucesso! Os dados serão exibidos abaixo!\n");
    printf("\n Carta 1\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d Habitantes\n Área: %f Km²\n PIB: %f Bilhões de reais\n Número de Pontos Turísticos: %d\n",estado1,codigo1,cidade1,populacao1,area1,pib1,pontotur1);
    printf("\n Carta 2\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d Habitantes\n Área: %f Km²\n PIB: %f Bilhões de reais\n Número de Pontos Turísticos: %d\n",estado2,codigo2,cidade2,populacao2,area2,pib2,pontotur2);

    return 0;
}
