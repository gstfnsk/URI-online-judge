/* Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro).
Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas,
informar o total a receber no final do m�s, com duas casas decimais. */

#include <stdio.h>
#include<math.h>

int main() {

    char nome;
    double salarioFixo, totalVendas;

    scanf("%s", &nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);

    printf("TOTAL = R$ %.2lf\n",  salarioFixo + (totalVendas*0.15));

    return 0;
}
