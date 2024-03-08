#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero >= 50 && numero <= 100) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("\nA media dos numeros entre 50 e 100: %.2f\n", media);
    } else {
        printf("\nNenhum numero entre 50 e 100 foi inserido.\n");
    }

    return 0;
}
