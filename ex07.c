/*
* Aluno: Pedro Gomes
* Exercício: 07
* Descrição: semáforo.
* Data: 17/09/2026
*/

#include <stdio.h>
#include <unistd.h> // sleep()

int main() {

    while (1) {

        // Verde
        printf("VERDE - 30 segundos\n");
        sleep(30);

        // Amarelo
        printf("AMARELO - 5 segundos\n");
        sleep(5);

        // Vermelho
        printf("VERMELHO - 25 segundos\n");
        sleep(25);

    }

    return 0;
}