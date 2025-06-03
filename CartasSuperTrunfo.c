/* Desafio de nível aventureiro */
#include <stdio.h>


// Função para calcular a densidade populacional de uma cidade
float pib_per_capita(float pib, int population){
    
    float pibPerCapita = pib / population;

    return pibPerCapita * 1000000000;
}


// Função para calcular a densidade populacional de uma cidade
float calc_densidade_populacional(int population, float area){

    float densidade;

    densidade = population / area;

    return densidade;
}


// Função para calcular o super poder
float calc_super_pow(
    int population, int pontosTuristicos, float area, float pib, 
    float densidadePopulacional, float pibPerCapita
){
    float superPow;

    superPow = population + pontosTuristicos + area + pib + densidadePopulacional + pibPerCapita;

    return superPow;
}


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estadoCidade[0], codCarta[10], nome[50];
    int population, pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita, superPow;
    
    char estadoCidade2[0], codCarta2[10], nome2[50];
    int population2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPow2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro da carta 01\n");
    printf("Digite o estado da carta: ");
    scanf("%s", estadoCidade);
    printf("Digite o código da cidade: ");
    scanf("%s", codCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    printf("Digite a população da cidade: ");
    scanf("%d", &population);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = calc_densidade_populacional(population, area);
    pibPerCapita = (pib / population) * 1000000000;
    superPow = calc_super_pow(population, pontosTuristicos, area, pib, densidadePopulacional, pibPerCapita);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da carta cadastrada:\n");
    printf("Estado: %s\n", estadoCidade);
    printf("Código da Carta: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", population);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos da Cidade: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.f", superPow);
    printf("\n");
    
    printf("Cadastro da carta 02\n");
    printf("Digite o estado da carta: ");
    scanf("%s", estadoCidade2);
    printf("Digite o código da cidade: ");
    scanf("%s", codCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a população da cidade: ");
    scanf("%d", &population2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = calc_densidade_populacional(population2, area2);
    pibPerCapita2 = pib_per_capita(pib2, population2);
    superPow2 = calc_super_pow(population2, pontosTuristicos2, area2, pib2, densidadePopulacional2, pibPerCapita2);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da carta cadastrada:\n");
    printf("Estado: %s\n", estadoCidade2);
    printf("Código da Carta: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos da Cidade: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.f", superPow2);

    return 0;
}