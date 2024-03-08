#include <stdio.h>

int main() {
    int aprovados = 0;

    for (int i = 0; i < 5; i++) {
        float nota;

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        }
    }

    printf("\nNúmero de alunos aprovados: %d\n", aprovados);

    return 0;
}
