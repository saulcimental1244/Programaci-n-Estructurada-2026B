#include <stdio.h>

// Función que regresa 1 si es primo, 0 si no
int esPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Si es divisible, no es primo
    }
    return 1; // Si termina el ciclo, es primo
}

int main() {
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    if (esPrimo(n) == 1) {
        printf("Primo\n");
    } else {
        printf("No primo\n");
    }
    return 0;
}
