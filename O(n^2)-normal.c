#include <stdio.h>

void matriz(int numero) {
    for (int i = 1; i <= numero; i++) { 
        for (int j = 1; j <= numero; j++) { 
            printf("%d ", numero);
        }
        printf("\n");
    }
}

int main() {
    matriz(5);
    return 0;
}