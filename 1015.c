/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
p1(x1,y1) e p2(x2,y2) e calcule a dist�ncia entre eles, mostrando 4 casas decimais ap�s a v�rgula, segundo a f�rmula:
sqrt((x2 - x1)^2 + (y2 - y1)^2)
*/

#include <stdio.h>

int main() {

    double x1, x2, y1, y2, distancia;
    scanf ("%lf %lf", &x1, &y1);
    scanf ("%lf %lf", &x2, &y2);
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%.4lf\n", distancia);



    return 0;
}
