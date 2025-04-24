#include <stdio.h>
int main(){
        //Variables
        float parcial1, parcial2, parcial3, examenFinal, trabajoFinal;
    float promedioParciales, calificacionFinal;

    printf("Ingrese la calificación del primer parcial:\n");
    scanf("%f", &parcial1);

    printf("Ingrese la calificación del segundo parcial:\n");
    scanf("%f", &parcial2);

    printf("Ingrese la calificación del tercer parcial:\n");
    scanf("%f", &parcial3);

    printf("Ingrese la calificación del examen final:\n");
    scanf("%f", &examenFinal);

    printf("Ingrese la calificación del trabajo final:\n");
    scanf("%f", &trabajoFinal);

    promedioParciales = (parcial1 + parcial2 + parcial3) / 3;


    calificacionFinal = (0.55 * promedioParciales) + (0.30 * examenFinal) + (0.15 * trabajoFinal);

    // Calificación final
    printf("\nLa calificación final es: %f\n", calificacionFinal);

    return 0;

}