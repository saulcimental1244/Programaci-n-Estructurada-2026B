#include <stdio.h>

// Función recursiva de Fibonacci (se llama a sí misma)
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    printf("%d\n", fibonacci(n));
    return 0;
}
