#include <stdio.h>

int numeroEscolhido(int numero) {
  return printf("O número escolhido foi: %d\n", numero); // O(1)
}

int main() {
  numeroEscolhido(10);
  return 0;
}
