#include <stdio.h>

int main() {
    int numero, digito, somaDigitosPares = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    while (numero != 0) {
        digito = numero % 10; 
        if (digito % 2 == 0) {
            somaDigitosPares += digito; 
        }
        numero /= 10; 
    }


    printf("A soma dos digitos pares do numero fornecido é: %d\n", somaDigitosPares);

    return 0;
}
