#include <stdio.h>

int contagem(int numero) {
  for (int i = 1; i <= numero; i++) { 
    printf("-> %d\n", i);
  }
  return printf("A contagem foi de 1 a: %d\n", numero);
}

int main() {
  contagem(10);
  return 0;
}