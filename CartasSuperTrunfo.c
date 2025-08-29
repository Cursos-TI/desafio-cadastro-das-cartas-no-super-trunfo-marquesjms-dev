#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Juliano

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
char codigo1 [20];
char codigo2 [20];
char cidade1 [50];
char cidade2 [50];
int populacao1, populacao2;
float area1, area2;
float denspop1, denspop2;
float pib1, pib2;
float percapita1, percapita2;
int pontotur1, pontotur2;
float superpoder1, superpoder2;
int  respopulacao, resarea, respib, respontotur, resdensipop, respercapita, ressuperpoder;

//Identificação dos Estados

    printf(" Estado 1 - Paraná = A (Curitiba)\n Estado 2 - Tocantins = B (Palmas)\n");

//inserção de dados do estado A pelo usuário

    printf("\nEstado 1: \n");
    printf ("%c\n",estado1);

    printf("Insira código da cidade 1(Estado 1 = A01 e Estado 2 = B01) \n");
    scanf("%s",codigo1);

    printf("Insira nome da cidade 1: \n");
    scanf("%s",cidade1);

    printf("Insira nº de habitantes da cidade 1: \n");
    scanf("%d",&populacao1);

    printf("Insira área da cidade 1 (em Km²): \n");
    scanf("%f",&area1);

    printf("Insira PIB da cidade 1 (em Bilhões de reais): \n");
    scanf("%f",&pib1);

    printf("Insira quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d",&pontotur1);

//inserção de dados do estado B pelo usuário

    printf("Estado 2: \n");
    printf("%c\n",estado2);

    printf("Insira código da cidade 2 (Estado 1 = A01 e Estado 2 = B01): \n");
    scanf("%s",codigo2);

    printf("Insira nome da cidade 2: \n");
    scanf("%s",cidade2);

    printf("Insira nº de habitantes da cidade 2: \n");
    scanf("%d",&populacao2);

    printf("Insira área da cidade 2 (em Km²): \n");
    scanf("%f",&area2);

    printf("Insira PIB da cidade 2 (em Bilhôes de reais): \n");
    scanf("%f",&pib2);

    printf("Insira quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d",&pontotur2);
 
//cálculo de dendidade populacional

    denspop1 = populacao1 / area1;
    denspop2 = populacao2 / area2;

//cálculo do PIB Per Capita

    percapita1 = (pib1 / populacao1) * 1000000000; //para conversão de bilhão para real
    percapita2 = (pib2 / populacao2) * 1000000000; //para conversão de bilhão para real

//realizar cálculo do super poder 1

    superpoder1 = (float)populacao1 + (float)pontotur1 + area1 + pib1 + denspop1 + percapita1;

//realizar cálculo do super poder 2

    superpoder2 = (float)populacao2 + (float)pontotur2 + area2 + pib2 + denspop2 + percapita2;

//apresentação dos dados inseridos dos Estados A e B

    printf("\n Informações Cadastradas com Sucesso! Os dados serão exibidos abaixo!\n");
    printf("\n Carta 1\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d Habitantes\n Área: %f Km²\n PIB: %f Bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %f hab/Km²\n PIB Per Capita: %f reais\n Super Poder: %f\n",estado1,codigo1,cidade1,populacao1,area1,pib1,pontotur1,denspop1,percapita1,superpoder1);
    printf("\n Carta 2\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d Habitantes\n Área: %f Km²\n PIB: %f Bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %f hab/Km²\n PIB Per Capita: %f reais\n Super Poder: %f\n",estado2,codigo2,cidade2,populacao2,area2,pib2,pontotur2,denspop2,percapita2,superpoder2);

//comparacão dos atributos das cartas

    respopulacao = populacao1 > populacao2;
    resarea = area1 > area2;
    respib = pib1 > pib2;
    respontotur = pontotur1 > pontotur2;
    resdensipop = denspop1 < denspop2;
    respercapita = percapita1 > percapita2;
    ressuperpoder = superpoder1 > superpoder2;

    printf("\n****Comparação das Cartas****\n");
    printf("\nPopulação: Carta 1 venceu (%d)\n",respopulacao);
    printf("Área: Carta 2 venceu (%d)\n",resarea);
    printf("PIB: Carta 1 venceu (%d)\n",respib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n",respontotur);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n",resdensipop);
    printf("Renda Per Capita: Carta 1 venceu (%d)\n",respercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n",ressuperpoder);


return 0;

}
