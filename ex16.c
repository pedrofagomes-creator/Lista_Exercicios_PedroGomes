/* 
* Aluno: Pedro Gomes
* Exercicio: 16
* Descricao: sistema de aprovacao.
* Data: 22/09/2026
*/
#include <stdio.h> 

int main() { 
    float nota, frequencia; 
    
    printf("Digite a nota: "); scanf("%f", &nota); 
    printf("Digite a frequencia (%%): "); scanf("%f", &frequencia); 
    
    if (nota >= 7 && frequencia >= 75) { 
        printf("Aluno aprovado!\n"); 
    } 
    else { 
        printf("Aluno reprovado.\n"); 
    } 
    
    return 0; }