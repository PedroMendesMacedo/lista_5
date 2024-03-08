#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;  

    while (numero <= 100) {
        soma += numero;
        numero++;       
    }

    printf("A soma dos numeros de 1 a 100: %d\n", soma);

    return 0;
}
