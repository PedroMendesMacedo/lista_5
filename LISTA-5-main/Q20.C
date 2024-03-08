#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero % 3 == 0) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("\nA media dos numeros divisiveis por 3: %.2f\n", media);
    } else {
        printf("\nNenhum numero divisivel por 3 foi inserido.\n");
    }

    return 0;
}
