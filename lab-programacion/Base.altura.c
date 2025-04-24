#include <stdio.h>

int main() {
        //Variables
    float base, altura, perimetro, area;

    printf("Introduce la base del rectángulo:\n");
    scanf("%f", &base);

    printf("Introduce la altura del rectángulo:\n");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;

    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
    printf("El área del rectángulo es: %.2f\n", area);

    return 0;
}
