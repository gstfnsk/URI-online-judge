/*Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1,
 o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2.
 Ap�s, calcule e mostre o valor a ser pago. */
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
