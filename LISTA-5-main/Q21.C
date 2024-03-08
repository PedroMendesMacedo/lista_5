#include <stdio.h>

int main() {
    int numero, contadorMaisDeTresDigitos = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero / 1000 != 0 || numero / -1000 != 0) {
            contadorMaisDeTresDigitos++;
        }
    }

    printf("\nQuantidade de numeros com mais de tres digitos: %d\n", contadorMaisDeTresDigitos);

    return 0;
}
