#include <stdio.h>

// Función que calcula el factorial
long long factorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Validación por si acaso
    if(n >= 0 && n <= 12) {
        printf("%lld\n", factorial(n));
    } else {
        printf("%d\n");
    }
    return 0;
}
