// Autor: Yomero

#include <stdio.h>

int main() {
    printf("Hola, mundo!\n");
    printf("aqui estuvo jair jijiji xd -.-!");
}

int factorial(int n) {
    if (n == 1) {
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