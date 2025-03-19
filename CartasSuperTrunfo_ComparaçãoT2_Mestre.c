#include <stdio.h>

int main() {
    int opcao;
    char nome[30] = "Sao Paulo";
    char nome2[30] = "Rio de Janeiro";
    int populacao = 12325000; //12325000
    int populacao2 = 6748000; //6748000
    float area = 1521.11; //1521.11
    float area2 = 1200.25; //1200.25
    float pib = 699280000000; //699280000000
    float pib2 = 300500000000; //300500000000
    int turismo = 50; //50
    int turismo2 = 30; //30
    float densidade = 8102.64; //8102.64
    float densidade2 = 5622.16; //5622.16
       // Nível Mestre
            
        printf("### Jogo Super Trunfo ###\n");
        printf("\n");
        printf("Cartas comparadas: São Paulo (Carta 1) e Rio de Janeiro (Carta 2)\n");
        printf("Escolha uma opção para comparação das cartas \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Número de pontos turísticos \n");
        printf("5. Densidade demográfica \n");
        scanf("%d", &opcao);
          
                
           switch (opcao)
           {
           case 1:
           if (populacao > populacao2) {
                printf("População: %d - %s (Carta 1), Venceu! \n", populacao, nome);
            } else if (populacao < populacao2) {
                printf("População: %d - %s (Carta 2), Venceu! \n", populacao2, nome2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 2:
            if (area > area2) {
                printf("Area: %.2f - %s (Carta 1), Venceu! \n", area, nome);
            } else if (area < area2) {
                printf("Área: %.2f - %s (Carta 2), Venceu! \n", area2, nome2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 3:
            if (pib > pib2) {
                printf("PIB: %.2f - %s (Carta 1), Venceu! \n", pib, nome);
            } else if (pib < pib2) {
                printf("PIB: %.2f - %s (Carta 2), Venceu! \n", pib2, nome2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 4:
            if (turismo > turismo2) {
                printf("Número de pontos turísticos: %i - %s (Carta 1), Venceu! \n", turismo, nome);
            } else if (turismo < turismo2) {
                printf("Número de pontos turísticos: %i - %s (Carta 2), Venceu! \n", turismo2, nome2);
            } else {
                printf("Empate!\n");
            }
            break;

            case 5:
            if (densidade < densidade2) {
                printf("Densidade demográfica: %.2f - %s (Carta 1), Venceu! \n", densidade, nome);
            } else if (densidade > densidade2) {
                printf("Densidade demográfica: %.2f - %s (Carta 2), Venceu! \n", densidade2, nome2);
            } else {
                printf("Empate!\n");
            }
            break;

            default:
            printf("Opção invalida\n");
            break;
            }
            
    return 0;
    }