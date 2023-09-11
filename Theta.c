#include <stdio.h>

void Theta(int arr[], int tamanho) {
    int soma = 0; 
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }

    float media = (float)soma / tamanho; 
    printf("A media dos elementos: %.2f\n", media); 
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    Theta(arr, tamanho);

    return 0;
}