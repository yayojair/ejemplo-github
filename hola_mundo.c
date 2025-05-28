#include <stdio.h>

int main() {
    printf("Hola, mundo!\n");
}

int sumaNatural(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}