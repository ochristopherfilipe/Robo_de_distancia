#include <stdio.h>

char* verificaDistancia(int distancia) {
  if (distancia <= 10) {
    return "O robô está próximo!";
  } else {
    return "O robô está longe!";
  }
}

int main() {
  int distancia;

  // Lê a entrada com a função "scanf" e atribui à "distancia".
  printf("Digite a distância em metros: ");
  scanf("%d", &distancia);
  
  // Chama a função "verificaDistancia" e imprime a saída.
  printf("%s\n", verificaDistancia(distancia));
  
  return 0;
}

