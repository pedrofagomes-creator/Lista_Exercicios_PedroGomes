/*
* Aluno: Pedro Gomes
* Exercício: 05
* Descrição: Recomenda filmes.
* Data: 16/09/2026
*/

    
    #include <stdio.h> 
    int main() { 
        int genero; 
        printf("Escolha um genero:\n"); 
        printf("1 - Acao\n"); 
        printf("2 - Comedia\n"); 
        printf("3 - Terror\n"); 
        scanf("%d", &genero); 

        if (genero == 1) { 
            printf("Recomendacao: Filme de Acao\n"); 
        } 
        else if (genero == 2) { 
            printf("Recomendacao: Filme de Comedia\n"); 
        } 
        else if (genero == 3) { 
            printf("Recomendacao: Filme de Terror\n"); 
        } 
        else { 
            printf("Genero nao encontrado.\n"); 
        } 
        
        return 0;
    

    /*
    Aplicação dos quatro pilares:

        Decomposição: dividir o sistema em cadastro, análise e recomendação.
        Reconhecimento de padrões: identificar os gêneros preferidos.
        Abstração: considerar apenas as informações importantes.
        Algoritmo: comparar as preferências e recomendar filmes.
    */
}