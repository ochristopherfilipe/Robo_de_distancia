#include <stdio.h>

char* verificaDistancia(int distancia) {
  if (distancia <= 10) {
    return "O rob� est� pr�ximo!";
  } else {
    return "O rob� est� longe!";
  }
}

int main() {
  int distancia;

  // L� a entrada com a fun��o "scanf" e atribui � "distancia".
  printf("Digite a dist�ncia em metros: ");
  scanf("%d", &distancia);
  
  // Chama a fun��o "verificaDistancia" e imprime a sa�da.
  printf("%s\n", verificaDistancia(distancia));
  
  return 0;
}

