//Desarrolla un programa que convierta temperaturas de grados Celsius a Fahrenheit.
#include <stdio.h>

int main() {
    //variables
    float celsius, fahrenheit;

    // Solicitar al usuario la temperatura en Celsius
    printf("Ingrese la temperatura en grados celsius para convertir: ");
    scanf("%f", &celsius);

    // Convertir a Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Mostrar el resultado
    printf("La convercin de grados es: %.2f\n", fahrenheit);

    return 0;
}
