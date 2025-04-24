#include <stdio.h>

int main() {
        int edad;
        char nombre[99];

        printf ("Escriba su nombre completo\n");
        scanf("%s", &nombre);
        printf ("Escriba su edad\n");
        scanf ("%d", &edad);

        printf("Su nombre es: %s\n", nombre);
        printf("Su edad es: %d", edad);
        printf(" años");

        return 0;

}