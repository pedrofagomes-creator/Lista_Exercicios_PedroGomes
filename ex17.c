/* 
* Aluno: Pedro Gomes
* Exercicio: 17
* Descricao: calculo de desconto de inss.
* Data: 22/09/2026
*/

#include <stdio.h> 

int main() { 
    float salario, inss, salarioLiquido; 
    printf("Digite o salario bruto: "); scanf("%f", &salario); 
    
    inss = salario * 0.10; 
    salarioLiquido = salario - inss; 
    
    printf("Desconto do INSS: R$ %.2f\n", inss); 
    printf("Salario liquido: R$ %.2f\n", salarioLiquido); 
    
    return 0; 
}