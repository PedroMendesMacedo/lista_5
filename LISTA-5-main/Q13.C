#include <stdio.h>

int main() {
    int numero, digito, somaCubos = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10; 
        somaCubos += digito * digito * digito; 
        numero /= 10;
    }

    printf("A soma dos digitos elevados ao cubo: %d\n", somaCubos);

    return 0;
}
