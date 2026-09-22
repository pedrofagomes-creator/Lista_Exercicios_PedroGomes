/* 
* Aluno: Pedro Gomes
* Exercicio: 36
* Descricao: dados e media sem struct.
* Data: 22/09/2026
*/

#include <stdio.h>

int main() {
    char nome[100];
    int matricula;
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s", nome);
    printf("Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);

    return 0;
}