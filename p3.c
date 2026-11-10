#include <stdio.h>

// Función que busca un valor en el arreglo y regresa su posición o -1
int buscar(int arr[], int tamano, int valor_buscado) {
    for (int i = 0; i < tamano; i++) {
        if (arr[i] == valor_buscado) {
            return i; // Regresa la primera aparición
        }
    }
    return -1; // No lo encontró
}

int main() {
    int n, valor, resultado;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    int arr[n];
    printf("Ingresa los %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Ingresa el valor a buscar: ");
    scanf("%d", &valor);

    resultado = buscar(arr, n, valor);
    printf("%d\n", resultado);

    return 0;
}
