/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD.
A seguir mostre a vari�vel PROD com mensagem correspondente.   */

#include <stdio.h>

int main() {

    int A, B, PROD;

    scanf("%d", &A);
    scanf("%d", &B);

    PROD = A * B;

    printf ("PROD = %d\n", PROD);

    return 0;
}
