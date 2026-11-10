#include <stdio.h>

// 4 funciones separadas
int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) {
    if (b == 0) return 0; // Validación de división por cero
    return a / b;
}

int main() {
    char operador;
    int num1, num2;

    printf("Ingresa operador (+, -, *, /): ");
    scanf(" %c", &operador); // El espacio antes de %c evita saltarse la lectura
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    // El programa principal decide qué función llamar
    if (operador == '+') {
        printf("%d\n", sumar(num1, num2));
    } else if (operador == '-') {
        printf("%d\n", restar(num1, num2));
    } else if (operador == '*') {
        printf("%d\n", multiplicar(num1, num2));
    } else if (operador == '/') {
        if (num2 == 0) {
            printf("Error: division por cero\n");
        } else {
            printf("%d\n", dividir(num1, num2));
        }
    } else {
        printf("Operador no valido\n");
    }

    return 0;
}
