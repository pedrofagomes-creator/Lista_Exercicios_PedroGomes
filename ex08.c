/* 
* Aluno: Pedro Gomes
* Exercício: 08
* Descrição: advinhador de números.
* Data: 17/09/2026
*/


#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() { 
    
    int user, number = rand() % 100 + 1; 
    
    printf("Escolha um numero entre 1 e 100: "); scanf("%d", &user); 
    
    while (user != number) { 
        if (user < number) { 
            printf("Errado, o numero e maior\n");
            printf("Escolha outro numero: "); scanf("%d", &user);
        } 
        else { 
            printf("Errado, o numero e menor\n"); }
            printf("Escolha outro numero: "); scanf("%d", &user);  
        }

            printf("Correto! O numero era %d\n", number); 
        
    return 0; 
}
