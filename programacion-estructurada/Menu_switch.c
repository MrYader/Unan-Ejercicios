#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;

    printf("--- Menú ---\n");
    printf("(1) Float\n(2) Double\n(3) Short\n(4) Long\n(5) Unsigned\n");
    printf("(6) Signed\n(7) Clear\n(8) Stdlib\n(9) Switch\n(10) Case\n");
    printf("Ingrese un número del tipo de dato que desea ver su definición:\n");
    scanf("%i", &opcion);

    switch (opcion) {
        case 1:
            printf("Float es una palabra clave que define un tipo de dato que almacena números con decimales.\n");
            break;
        case 2:
            printf("Double es un tipo de dato que almacena números reales con 64 bits de precisión.\nSe utiliza para cálculos que requieren precisión.\n");
            break;
        case 3:
            printf("Short es una palabra reservada que indica un tipo de dato entero de tamaño corto.\n");
            break;
        case 4:
            printf("Long es un tipo de dato que almacena números enteros grandes, es decir, números no decimales.\n");
            break;
        case 5:
            printf("Unsigned define un tipo de dato que solo puede almacenar valores positivos o naturales.\n");
            break;
        case 6:
            printf("Signed es un modificador de tipo que permite que el valor de una variable numérica sea positivo o negativo.\n");
            break;
        case 7:
            printf("Borra la pantalla\n");
            break;
        case 8:
            printf("Stdlib es el archivo de la biblioteca estándar de C, contiene funciones para la gestión de memoria, control de procesos, entre otras.\n");
            break;
        case 9:
            printf("Switch es una estructura de control que permite ejecutar una sentencia específica, dependiendo del valor de una expresión.\n");
            break;
        case 10:
            printf("Case es una instrucción de toma de decisiones que evalúa una expresión.\n");
            break;
        default:
            printf("El número que usted ingresó es inválido. Inténtelo de nuevo.\n");
    }
    return 0;
}
