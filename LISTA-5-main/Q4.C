#include <stdio.h>

int main() {
    float altura, somaAlturas = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i);
        scanf("%f", &altura);

        somaAlturas += altura;
    }

    float mediaAlturas = somaAlturas / 5;

    printf("\nA media de altura das 5 pessoas: %.2f metros\n", mediaAlturas);

    return 0;
}
