/* 
* Aluno: Pedro Gomes
* Exercicio: 09
* Descricao: quadrado de asteriscos.
* Data: 21/09/2026
*/


#include <stdio.h> 

void desenhaQuadrado(int lado) { 
    for (int i = 0; i < lado; i++) { 
        for (int j = 0; j < lado; j++) {
            printf("* "); 
        } 
        printf("\n"); 
    } 
} 
        
        
int main() { 
    desenhaQuadrado(5); 
    return 0; 
}