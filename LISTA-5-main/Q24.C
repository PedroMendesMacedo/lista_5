#include <stdio.h>

int main() {
    int numero, primeiroNumero, ultimoNumero, pares = 0, impares = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (pares + impares == 0) {
            primeiroNumero = numero;
        }

        ultimoNumero = numero;

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    if (pares > 0 || impares > 0) {
        printf("\nQuantidade de numeros pares entre %d e %d: %d\n", primeiroNumero, ultimoNumero, pares);
        printf("Quantidade de numeros impares entre %d e %d: %d\n", primeiroNumero, ultimoNumero, impares);
    } else {
        printf("\nNenhum numero foi inserido.\n");
    }

    return 0;
}
