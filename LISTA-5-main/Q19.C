#include <stdio.h>

int main() {
    int numero, divisiveisPor2 = 0, divisiveisPor3 = 0, divisiveisPor5 = 0;

    printf("Digite uma sequencia de numeros inteiros (0 para encerrar): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero % 2 == 0) {
            divisiveisPor2++;
        }

        if (numero % 3 == 0) {
            divisiveisPor3++;
        }

        if (numero % 5 == 0) {
            divisiveisPor5++;
        }
    }

    printf("\nQuantidade de numeros divisiveis por 2: %d\n", divisiveisPor2);
    printf("Quantidade de numeros divisiveis por 3: %d\n", divisiveisPor3);
    printf("Quantidade de numeros divisiveis por 5: %d\n", divisiveisPor5);

    return 0;
}
