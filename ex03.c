/*
* Aluno: Pedro Gomes
* Exercício: 03
* Descrição: Lista a quantidade de números.
* Data: 16/09/2026
*/



#include <stdio.h> 
int main() { 
    
    int livros; 
    
    printf("Quantos livros existem? "); 
    scanf("%d", &livros); 
    
    for (int i = 1; i <= livros; i++) { 
        printf("Catalogando livro %d\n", i);
    } 
    return 0; }

/*A biblioteca pode ser dividida em tarefas como separar, registrar e organizar os livros. O for repete a catalogação automaticamente para cada livro.*/