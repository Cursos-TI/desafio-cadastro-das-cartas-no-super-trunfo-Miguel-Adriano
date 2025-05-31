#include <stdio.h>  // Para usar printf e scanf
#include <string.h> // Para usar strcspn

int main() {
    // Declaração das variáveis
    char estado1[19], estado2[19];   // Nome do estado
    char codigo1[3], codigo2[3];  // Código da carta
    char cidade1[40], cidade2[40];  // Nome da cidade
    unsigned long int populacao1, populacao2;  // População da cidade
    float area1, area2;  // Área da cidade
    float PIB1, PIB2;  // PIB da cidade
    int pontosT1, pontosT2;  // Número de Pontos Turísticos
    float dp1,dp2;  // Densidade Populacional
    float PIB_C1, PIB_C2;  // PIB per Capita
    float SuperPoder1, SuperPoder2; // soma dos valores
    int resultado1, resultado2; // Variáveis para armazenar o resultado

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

    printf("População (somente números):");
    scanf("%lu", &populacao1);  // Lê a população da cidade

    printf("Área da cidade (somente números):");
    scanf("%f", &area1);  // Lê a área da cidade

    printf("PIB da cidade (somente números):");
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

    printf("População (somente números):");
    scanf("%lu", &populacao2);  // Lê a população da cidade

    printf("Área da cidade (somente números):");
    scanf("%f", &area2);  // Lê a área da cidade

    printf("PIB da cidade (somente números):");
    scanf("%f" , &PIB2);  // Lê o PIB da cidade

    printf("N° de Pontos Turísticos: ");
    scanf("%d" , &pontosT2);  // Lê o número de pontos turísticos

    printf("\n");
    printf("\n");
    printf("Dados da segunda Carta Salvos!\n");
    printf("\n");
    printf("---------------FIM DO CADASTRO---------------\n");
    printf("\n");

    // Calculo da Densidade Populacional
    dp1 = (float)populacao1 / area1;
    dp2 = (float)populacao2 / area2;

    // Calculo do PIB per Capita
    PIB_C1 = PIB1 / (float)populacao1;
    PIB_C2 = PIB2 / (float)populacao2;

    // Super Poder: soma dos atributos numéricos + inverso da densidade populacional
    SuperPoder1 = (float)populacao1 + area1 + PIB1 + (float)pontosT1 + PIB_C1 + (1.0f / dp1);
    SuperPoder2 = (float)populacao2 + area2 + PIB2 + (float)pontosT2 + PIB_C2 + (1.0f / dp2);

    printf("---------------INÍCIO DO JOGO---------------\n");
    printf("\n");
    printf("\n");

    printf("PRIMEIRA CARTA:\n");

    printf("Estado: %s Rio\n", estado1);  // Exibe o nome do estado
    printf("Código: %s \n", codigo1);  // Exibe o código da carta
    printf("Cidade: %s \n", cidade1);  // Exibe o nome da cidade
    printf("População: %lu \n", populacao1);  // Exibe a população da cidade
    printf("Área: %.2f \n", area1);  // Exibe a área da cidade
    printf("PIB: %.2f \n", PIB1);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d \n", pontosT1);  // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km² \n" , dp1);  // Exibe a densidade populacional
    printf("PIB per Capita: R$%.2f \n" , PIB_C1);  // Exibe o PIB per capita

    printf("\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("SEGUNDA CARTA:\n");

    printf("Estado: %s Rio\n", estado2);  // Exibe o nome do estado
    printf("Código: %s \n", codigo2);  // Exibe o código da carta
    printf("Cidade: %s \n", cidade2);  // Exibe o nome da cidade
    printf("População: %lu \n", populacao2);  // Exibe a população da cidade
    printf("Área: %.2f \n", area2);  // Exibe a área da cidade
    printf("PIB: %.2f \n", PIB2);  // Exibe o PIB da cidade
    printf("Pontos Turisticos: %d \n", pontosT2);  // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km² \n" , dp2);  // Exibe a densidade populacional
    printf("PIB per Capita: R$%.2f \n" , PIB_C2);  // Exibe o PIB per capita

    printf("\n");
    printf("------------------------------------------\n");
    printf("\n");

    // Verifica qual carta é a vencedora
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosT1 > pontosT2) ? 1 : 2, (pontosT1 > pontosT2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (dp1 < dp2) ? 1 : 2, (dp1 < dp2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIB_C1 > PIB_C2) ? 1 : 2, (PIB_C1 > PIB_C2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, (SuperPoder1 > SuperPoder2) ? 1 : 0);

    return 0;

}