#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("Introduce el primer número:\n");
    scanf("%f", &num1);

    printf("Introduce el segundo número:\n");
    scanf("%f", &num2);

    printf("Introduce el tercer número:\n");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("La media de los tres números es: %.2f\n", media);

    return 0;
}