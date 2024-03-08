#include <stdio.h>

int main() {
    int numero, menorPositivoImpar = -1; 

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;  
        }

        if (numero > 0 && numero % 2 != 0) {
            if (menorPositivoImpar == -1 || numero < menorPositivoImpar) {
                menorPositivoImpar = numero;
            }
        }
    }

    if (menorPositivoImpar != -1) {
        printf("\nO menor valor positivo e impar digitado: %d\n", menorPositivoImpar);
    } else {
        printf("\nNenhum valor positivo e impar foi digitado.\n");
    }

    return 0;
}
