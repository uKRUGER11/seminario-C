#include <stdio.h>

void Omega(int arr[], int tamanho) {
    int min = arr[0];

    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Menor elemento: %d\n", min);
}

int main() {
    int arr[] = {4, 2, 7, 1, 5, 3};
    int tamanho = 6;

    Omega(arr, tamanho);

    return 0;
}