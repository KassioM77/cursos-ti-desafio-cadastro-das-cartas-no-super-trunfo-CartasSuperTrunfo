#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[3], estado2[3];
    char codigo[3], codigo2[3];
    char nome[30], nome2[30];
    int populacao, populacao2;
    double area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float densidade, densidade2;
    float percapita, percapita2;
    char cidadeVencedora[30];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("### Jogo Super Trunfo ###\n");
        printf("\n");
        
        printf("Digite o estado da 1ª cidade: \n");
        scanf("%s", &estado);
        printf("Digite o código da 1ª cidade: \n");
        scanf("%s", &codigo);
        printf("Digite o nome da 1ª Cidade: \n");
        scanf("%s", &nome);
        printf("Digite a População da 1ª Cidade: \n");
        scanf("%d", &populacao);
        printf("Digite a área da 1ª Cidade: \n");
        scanf("%lf", &area);
        printf("Digite o PIB da 1ª Cidade: \n");
        scanf("%f", &pib);
        printf("Digite o número de pontos turísticos da 1ª Cidade: \n");
        scanf("%d", &turismo);

                printf("Digite o estado da 2ª cidade: \n");
                scanf("%s", &estado2);
                printf("Digite o código da 2ª Cidade: \n");
                scanf("%s", &codigo2);
                printf("Digite o nome da 2ª cidade: \n");
                scanf("%s", &nome2);
                printf("Digite a População da 2ª Cidade: \n");
                scanf("%d", &populacao2);
                printf("Digite a área da 2ª Cidade: \n");
                scanf("%lf", &area2);
                printf("Digite o PIB da 2ª Cidade: \n");
                scanf("%f", &pib2);
                printf("Digite o número de pontos turísticos da 2ª Cidade: \n");
                scanf("%d", &turismo2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("Carta: 1\n");       
    printf("Estado da 1º Cidade: %s\n", estado);
    printf("Código da 1ª Cidade: %s\n", codigo);
    printf("Nome da 1º Cidade: %s\n", nome);
    printf("População da 1º Cidade: %.2u\n", populacao);
    printf("Area da 1ª Cidade: %.2lf\n", area);
    printf("PIB da 1ª Cidade: %.2f\n", pib);
    printf("Número de pontos turísticos da 1ª Cidade: %d\n", turismo);

       
            printf("\n");
            printf("Carta: 2\n");
            printf("Estado da 2º Cidade: %s\n", estado2);
            printf("Código da 2ª Cidade: %s\n", codigo2);
            printf("Nome da 2ª Cidade: %s\n", nome2);
            printf("População da 2º Cidade: %.2u\n", populacao2);
            printf("Area da 2ª Cidade: %.2lf\n", area2);
            printf("PIB da 2ª Cidade: %.2f\n", pib2);
            printf("Número de pontos turísticos da 2ª Cidade: %d\n", turismo2);



    return 0;
}
