// Autor: Yomero

#include <stdio.h>

int main() {
    printf("Hola, mundo!\n");
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
    return n * factorial(n - 1);
    }
}

int sumaNatural(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}