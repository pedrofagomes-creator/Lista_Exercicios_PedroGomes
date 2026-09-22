/* 
* Aluno: Pedro Gomes
* Exercicio: 19
* Descricao: validação de data.
* Data: 22/09/2026
*/

#include <stdio.h> 

int main() { 
    int dia, mes, ano, diasNoMes, bissexto = 0; 
    
    printf("Digite o dia: "); scanf("%d", &dia); 
    printf("Digite o mes: "); scanf("%d", &mes); 
    printf("Digite o ano: "); scanf("%d", &ano);
    
    // Verifica se o ano e bissexto 
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) { 
        bissexto = 1; } 

    if (mes < 1 || mes > 12) { 
            printf("Data invalida.\n"); 
        }

    else { 

        if (mes == 2) { 
            if (bissexto) { 
                diasNoMes = 29; 
            } 
            else { 
                diasNoMes = 28;
            } 
        } 
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { 
            diasNoMes = 30;
        } 
        else {
             diasNoMes = 31; 
        } 
        
        if (dia >= 1 && dia <= diasNoMes) { 
            printf("Data valida.\n"); 
        } 
        else { 
            printf("Data invalida.\n"); 
        }
    } 
        
        return 0; }