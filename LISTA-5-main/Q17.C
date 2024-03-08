#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;  
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
            if (impares == 1) {
                break; 
            }
        }
    }

    printf("\nQuantidade de numeros pares antes do primeiro impar: %d\n", pares);

    return 0;
}
    