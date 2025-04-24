#include <stdio.h>

int main() {
    double capital,ganancia, total;

    printf("Ingrese el capital a invertir:\n");
    scanf("%lf", &capital);

    ganancia = capital * 0.02;
    total = capital + ganancia;

    printf("La ganancia después de un mes es: %.2f\n", ganancia);
    printf("El total después de un mes es: %.2f\n", total);

    return 0;
}
