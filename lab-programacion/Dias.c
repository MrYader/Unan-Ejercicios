#include <stdio.h>
#include <stdlib.h>
int main(){
        int opcion;
        printf("--Dias de la semana--\n(1)Lunes\n(2)Martes\n(3)Miercoles\n(4)Jueves\n(5)Viernes\n(6)Sabado\n(7)Domingo\n");
        printf("Ingrese un dia de la semana\n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
                printf("Su opcion seleccionada es: Lunes");
                break;
        case 2:
                printf("Su opcion seleccionada es: Martes");
                break;
        case 3:
                printf("Su opcion seleccionada es: Miercoles");
                break;
        case 4:
                printf("Su opcion seleccionada es: Jueves");
                break;
        case 5:
                printf("Su opcion seleccionada es: Viernes");
                break;
        case 6:
                printf("Su opcion seleccionada es: Sabado");
                break;
        case 7:
                printf("Su opcion seleccionada es: Domingo");
                break;
        default:
        printf("Opcion invalida");
                break;
        }
        return 0;
}