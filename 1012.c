/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B. */

#include<stdio.h>

int main() {

    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;

    scanf ("%lf %lf %lf", &A, &B, &C);

    triangulo = A * C / 2;
    circulo = pi * C * C;
    trapezio = (A + B) * C / 2;
    quadrado = B * B;
    retangulo = A * B;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}
