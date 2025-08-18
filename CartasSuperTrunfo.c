#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  //Carta 1
  char estado[50];
  char cod_carta[50];
  char cidade[50];
  int populacao;
  float area;
  float PIB;
  int pontos_turisticos;
  float densidade_populacional;
  float PIB_per_Capita;

  //Carta 2
  char estado2[50];
  char cod_carta2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float PIB_per_Capita2;

  //Criar carta 1

  printf("Digite o nome do estado: ");
  scanf("%s", estado);

  printf("Digite o código da carta: ");
  scanf("%s", cod_carta);

  getchar();

  printf("Digite o nome da cidade: ");
  fgets(cidade, sizeof(cidade), stdin); // Código adicionado para aceitar "espaço" no nome da cidade
  cidade[strcspn(cidade, "\n")] = '\0';

  printf("Digite a população: ");
  scanf("%d", &populacao);

  printf("Digite a área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &PIB);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

  getchar();

  //Criar carta 2

  printf("Digite o nome do segundo estado: ");
  scanf("%s", estado2);

  getchar();

  printf("Digite o código da segunda carta: ");
  scanf("%s", cod_carta2);

  getchar();


  printf("Digite o nome da segunda cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin); // Código adicionado para aceitar "espaço" no nome da cidade
  cidade2[strcspn(cidade2, "\n")] = '\0';

  

  printf("Digite a segunda população: ");
  scanf("%d", &populacao2);

  printf("Digite a segunda área: ");
  scanf("%f", &area2);

  printf("Digite o segundo PIB: ");
  scanf("%f", &PIB2);

  printf("Digite o segundo número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  //Densidade Populacional e PIB per capita
  densidade_populacional = populacao / area;
  PIB_per_Capita = (PIB*1000000000) / populacao;
  densidade_populacional2 = populacao2 / area2;
  PIB_per_Capita2 = (PIB2*1000000000) / populacao2;

  // Exibir Carta 1
  
  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", cod_carta);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", PIB);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/m²\n", densidade_populacional);
  printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);

  //Exibir Carta 2
  
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", cod_carta2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", PIB2);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/m²\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);

  return 0;
}
