#include <stdio.h>  // Para usar printf e scanf
#include <string.h> // Para usar strcspn

int main() {
    // Declaração das variáveis
    char estado1[19], estado2[19]; 
    char codigo1[3], codigo2[3];
    char cidade1[40], cidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosT1, pontosT2;
    int enter;

    // Início do programa

    printf("CADASTRO DA PRIMEIRA CARTA:\n"); 

    printf("Nome do Estado: ");
    fgets(estado1, 40, stdin); // Lê o nome do estado
    estado1[strcspn(estado1, "\n")] = 0; // Remove o '\n' do final da string

    printf("Código da carta:");
    scanf("%s", codigo1); // Lê o código da carta

    while (getchar() != '\n'); // Limpa o buffer de entrada e retira o "Enter"
    printf("Nome da cidade: ");
    fgets(cidade1, 40, stdin);  // Lê o nome da cidade
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' do final da string

    printf("População: ");
    scanf("%d", &populacao1);  // Lê a população da cidade

    printf("Área da cidade: (somente números)");
    scanf("%f", &area1);  // Lê a área da cidade

    printf("PIB da cidade: (somente números)");
    scanf("%f" , &PIB1);  // Lê o PIB da cidade

    printf("N° de Pontos Turísticos: ");
    scanf("%d" , &pontosT1);  // Lê o número de pontos turísticos

    printf("\n");  // Pula uma linha para melhor formatação
    printf("\n");
    printf("Dados da primeira Carta Salvos!\n");
    printf("\n");
    printf("---------------FIM DO CADASTRO DA PRIMEIRA CARTA---------------\n");
    printf("\n");
    printf("\n");
    printf("---------------INÍCIO DO CADASTRO DA SEGUNDA CARTA---------------\n");
    printf("\n");
    printf("CADASTRO DA SEGUNDA CARTA:\n");

    while (getchar() != '\n'); // Limpa o buffer de entrada e retira o "Enter"
    printf("Nome do Estado: ");
    fgets(estado2, 40, stdin);  // Lê o nome do estado
    estado2[strcspn(estado2, "\n")] = 0; // Remove o '\n' do final da string

    printf("Código da carta:");
    scanf("%s", codigo2);   // Lê o código da carta

    while (getchar() != '\n'); // Limpa o buffer de entrada e retira o "Enter"
    printf("Nome da cidade: ");
    fgets(cidade2, 40, stdin);  // Lê o nome da cidade
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o '\n' do final da string

    printf("População: ");
    scanf("%d", &populacao2);  // Lê a população da cidade

    printf("Área da cidade: (somente números)");
    scanf("%f", &area2);  // Lê a área da cidade

    printf("PIB da cidade: (somente números)");
    scanf("%f" , &PIB2);  // Lê o PIB da cidade

    printf("N° de Pontos Turísticos: ");
    scanf("%d" , &pontosT2);  // Lê o número de pontos turísticos

    printf("\n");
    printf("\n");
    printf("Dados da segunda Carta Salvos!\n");
    printf("\n");
    printf("---------------FIM DO CADASTRO---------------\n");
    printf("\n");
    printf("---------------INÍCIO DO JOGO---------------\n");
    printf("\n");
    printf("\n");

    printf("PRIMEIRA CARTA:\n");

    printf("Estado: %s Rio\n", estado1);  // Exibe o nome do estado
    printf("Código: %s \n", codigo1);  // Exibe o código da carta
    printf("Cidade: %s \n", cidade1);  // Exibe o nome da cidade
    printf("População: %d \n", populacao1);  // Exibe a população da cidade
    printf("Área: %f \n", area1);  // Exibe a área da cidade
    printf("PIB: %f \n", PIB1);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d \n", pontosT1);  // Exibe o número de pontos turísticos

    printf("\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("SEGUNDA CARTA:\n");

    printf("Estado: %s Rio\n", estado2);  // Exibe o nome do estado
    printf("Código: %s \n", codigo2);  // Exibe o código da carta
    printf("Cidade: %s \n", cidade2);  // Exibe o nome da cidade
    printf("População: %d \n", populacao2);  // Exibe a população da cidade
    printf("Área: %f \n", area2);  // Exibe a área da cidade
    printf("PIB: %f \n", PIB2);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d \n", pontosT2);  // Exibe o número de pontos turísticos



    return 0;

}
