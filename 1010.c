/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1,
 o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2.
 Após, calcule e mostre o valor a ser pago. */
#include<stdio.h>
 int main (){

     int codigo1, codigo2;
     double valor1, valor2, numeroPecas1, numeroPecas2;

     scanf ("%d %lf %lf", &codigo1, &numeroPecas1, &valor1);
     scanf ("%d %lf %lf", &codigo2, &numeroPecas2, &valor2);

     valor1 *= numeroPecas1;
     valor2 *= numeroPecas2;

     printf ("VALOR A PAGAR: R$ %.2lf\n", valor1+valor2);

    return 0;
 }
