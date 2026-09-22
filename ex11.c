/* 
* Aluno: Pedro Gomes
* Exercicio: 11
* Descricao: conversão para dolares.
* Data: 22/09/2026
*/

#include <stdio.h> 

int main() { 
    float reais, taxa, dolares; 

    printf("Digite o valor em reais: "); scanf("%f", &reais); 
    printf("Digite a taxa de cambio: "); scanf("%f", &taxa); 
    
    dolares = reais / taxa; 

    printf("Valor em dolares: %.2f\n", dolares); 
    return 0; 
}