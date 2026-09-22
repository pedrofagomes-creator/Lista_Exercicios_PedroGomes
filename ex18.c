/* 
* Aluno: Pedro Gomes
* Exercicio: 18
* Descricao: verificacao de intervalo 10,20.
* Data: 22/09/2026
*/


#include <stdio.h> 

int main() { 
    int numero; 
    
    printf("Digite um numero: "); scanf("%d", &numero); 
    
    if (numero >= 10 && numero <= 20) { 
        printf("O numero esta no intervalo [10, 20].\n"); 
    } 
    else { 
        printf("O numero nao esta no intervalo [10, 20].\n"); 
    }
    return 0; }