/* 
* Aluno: Pedro Gomes
* Exercicio: 15
* Descricao: impar ou par.
* Data: 22/09/2026
*/

#include <stdio.h> 

int main() { 
    int numero; 
    printf("Digite um numero inteiro: "); scanf("%d", &numero) ;
    
    if (numero < 1) { 
        printf("Entrada invalida! Digite um numero inteiro.\n");  
    } 
    else if (numero % 2 == 0) { 
        printf("O numero e par.\n"); 
    } 
    else { 
        printf("O numero e impar.\n"); 
    } return 0; }