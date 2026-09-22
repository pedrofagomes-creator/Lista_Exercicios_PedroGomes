/* 
* Aluno: Pedro Gomes
* Exercicio: 14
* Descricao: calculo de booleanos.
* Data: 22/09/2026
*/

#include <stdio.h> 
int main() { 
    int A, B; 
    
    printf("Digite A (0 ou 1): "); scanf("%d", &A); 
    printf("Digite B (0 ou 1): "); scanf("%d", &B); 
    
    printf("A && B = %d\n", A && B); 
    printf("A || B = %d\n", A || B); 
    printf("!A = %d\n", !A); 
    printf("A ^ B = %d\n", A ^ B); 
    
    return 0; 
}