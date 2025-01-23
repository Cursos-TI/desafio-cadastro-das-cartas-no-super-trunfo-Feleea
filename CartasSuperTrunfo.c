#include <stdio.h>


// Função para calcular a densidade populacional de uma cidade
float pib_per_capita(float pib, int population){
    float pibPerCapita;

    pibPerCapita = pib / population;

    return pibPerCapita;
}


// Função para calcular a densidade populacional de uma cidade
float calc_densidade_populacional(int population, float area){

    float densidade;

    densidade = population / area;

    return densidade;
}


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

    char estadoCidade[0], codCarta[10], nome[20];
    int population, pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita, superPow;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro de nova carta\n");
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
    pibPerCapita = pib_per_capita(pib, population);
    superPow = calc_super_pow(population, pontosTuristicos, area, pib, densidadePopulacional, pibPerCapita);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da carta cadastrada:\n");
    printf("Estado: \n");
    printf("Código da Carta: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", population);
    printf("Área: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Pontos turísticos da Cidade: %d\n", pontosTuristicos);
    printf("Super Poder: %.f", superPow);
    

    return 0;
}


