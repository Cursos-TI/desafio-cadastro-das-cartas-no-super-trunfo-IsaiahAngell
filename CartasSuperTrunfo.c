#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  //Carta 1
  char nom_carta[50];
  char estado[50];
  char cod_carta[50];
  char cidade[50];
  int populacao;
  float area;
  float PIB;
  int pontos_turisticos;

  //Carta 2
  char nom_carta2[50];
  char estado2[50];
  char cod_carta2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos_turisticos2;

  //Criar carta 1

  printf("Digite o nome da carta: ");
  fgets(nom_carta, sizeof(nom_carta), stdin);// Código adicionado para aceitar "espaço" no nome da carta
  nom_carta[strcspn(nom_carta, "\n")] = '\0';

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

  printf("Digite o nome da carta: ");
  fgets(nom_carta2, sizeof(nom_carta2), stdin);// Código adicionado para aceitar "espaço" no nome da carta
  nom_carta2[strcspn(nom_carta2, "\n")] = '\0';

  

  printf("Digite o nome do estado: ");
  scanf("%s", estado2);

  getchar();

  printf("Digite o código da carta: ");
  scanf("%s", cod_carta2);

  getchar();


  printf("Digite o nome da cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin); // Código adicionado para aceitar "espaço" no nome da cidade
  cidade2[strcspn(cidade2, "\n")] = '\0';

  

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Exibir Carta 1
  printf("Nome da carta: %s\n", nom_carta);
  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", cod_carta);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", PIB);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos);

  //Exibir Carta 2
  printf("Nome da carta: %s\n", nom_carta2);
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", cod_carta2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", PIB2);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

  return 0;
}
