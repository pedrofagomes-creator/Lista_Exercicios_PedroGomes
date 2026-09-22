/* 
* Aluno: Pedro Gomes
* Exercicio: 13
* Descricao: crescente o decrescente.
* Data: 22/09/2026
*/

#include <stdio.h> 
int main() { 
    
    int a, b, c; 
    printf("Digite tres numeros(com espaco): "); scanf("%d %d %d", &a, &b, &c); 
    
    if (a < b && b < c) { 
        printf("Os numeros estao em ordem crescente.\n"); 
    } 
    else if (a > b && b > c) { 
        printf("Os numeros estao em ordem decrescente.\n"); 
    } 
    else {
         printf("Os numeros nao estao em ordem.\n"); 
        } 
        
    return 0; }