#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  char nom_carta[50];
  char estado[50];
  char cod_carta[50];
  char cidade[50];
  int populacao;
  float area;
  float PIB;
  int pontos_turisticos;

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

  // Exibir Carta
  printf("Nome da carta: %s\n", nom_carta);
  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", cod_carta);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", PIB);
  printf("Número de pontos turísticos: %d\n", pontos_turisticos);

  return 0;
}
