#include <stdio.h>

int main() {
    int contadorAlunos = 0;
    int aprovados = 0;
    float nota;

    while (contadorAlunos < 5) {
        printf("Digite a nota do aluno %d: ", contadorAlunos + 1);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        }

        contadorAlunos++;
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}