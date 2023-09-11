#include <stdio.h>

void matriz2(int numero) {
    char linha[numero*numero];

    for (int i = 1; i <= numero; i++) {
        sprintf(linha + strlen(linha), " %d", numero);
    }

    for (int i = 1; i <= numero; i++) {
        printf("%s\n", linha);
    }
}

int main() {
    matriz2(5);
    return 0;
}