#include <stdio.h> //incluindo bibliotecas

#include <stdlib.h>

int main(int argc, const char *argv[])
{ // abrindo main

    int par = 0, num, i; // informado variaveis

    for (i = 1; i <= 10; i++)
    { // iniciando laco para leitura dos numeros

        printf("Informe numero: "); // solicitando numeros do usuario

        scanf("%d", &num); // lendo numero

        if (num % 2 == 0)
        { // verificando se eh par

            par = par + 1; // se for par faz a contagem
        }
    }

    printf("Pares: %d\n", par); // informa o numero de pares

    printf("Impares: %d", 10 - par); // faz a conta dos impares e informa

    printf("\n");

    return 0;
}
