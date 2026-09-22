
/* 
* Aluno: Pedro Gomes
* Exercicio: 10
* Descricao: troco com moedas.
* Data: 21/09/2026
*/
/*Decomposição
Receber o valor do troco.
Verificar quantas moedas de 25 centavos podem ser usadas.
Depois verificar moedas de 10 centavos.
Depois moedas de 5 centavos.
Por último, usar moedas de 1 centavo.
Contar o total de moedas utilizadas.
Estratégia gulosa

O algoritmo guloso sempre escolhe a maior moeda possível naquele momento.*/

#include <stdio.h> 

int main() { 
    int troco, moedas = 0; 
    printf("Digite o valor do troco em centavos: "); scanf("%d", &troco); 
    
    while (troco >= 25) { 
        troco -= 25; moedas++; 
    } 
    
    while (troco >= 10) { 
        troco -= 10; moedas++; 
    } 

    while (troco >= 5) { 
        troco -= 5; moedas++; 
    } 
    
    while (troco >= 1) { 
        troco -= 1; moedas++; 
    } 
    
    printf("Menor numero de moedas: %d\n", moedas); 
    
    return 0;
}