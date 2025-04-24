#include <stdio.h>

int main() {
    // variables
    double X, R, T, interes, capitalTotal;
    printf("Ingrese el capital inicial (X): ");
    scanf("%lf", &X);

    printf("Ingrese la tasa de interés anual (R en porcentaje): ");
    scanf("%lf", &R);

    printf("Ingrese la cantidad de días (T): ");
    scanf("%lf", &T);

    interes = X * (R / 100) * (T / 365);
    capitalTotal = X + interes;

    printf("\nIntereses producidos: %.2lf\n", interes);
    printf("Capital total acumulado: %.2lf\n", capitalTotal);
}
