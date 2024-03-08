#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10; 
        soma += digito; 
        numero /= 10; 
    }

    printf("A soma dos digitos do numero fornecido é: %d\n", soma);

    return 0;
}
