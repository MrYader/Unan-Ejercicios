# include <stdio.h>
int main(){
        int opcion;
        char nombre[100];
        printf("Ingrese su nombre completo\n");
        scanf ("%s", &nombre);

        printf("Ingerese su genero\n");
        printf("(1)Masculino y (2)Femenino\n");
        scanf ("%i", &opcion);

        if (opcion==1){
                printf("Su nombre es: %s",nombre, "Y su genero es Masculino");
        }
        else if (opcion==2){
                printf("Su nombre es: %s",nombre, "Y su genero es Femenino");
        }
        else {
        printf ("Opcion no encontrada, Intentelo de nuevo");
        }

}