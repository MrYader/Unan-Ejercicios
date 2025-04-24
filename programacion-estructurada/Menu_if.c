#include <stdio.h>
int main(){
        //Variables
        int opcion;
        printf ("---MUenu---\n");
        printf ("(1)float\n(2)double\n(3)short\n(4)Long\n(5)Unsigned\n(6)Signed\n(7)Clear\n(8)Stdlib\n(9)switch\n(10)Case\n");
        printf("Ingrese un numero del tipo de dato que desea ver su definicion\n");
        scanf("%i", &opcion);

        if (opcion==1){
                printf("Float es una palabra clave que define un tipo de dato que almacena números con decimales.\n");
        }
        if (opcion==2){
                printf("Double es un tipo de dato que almacena números reales con 64 bits de precisión.\nSe utiliza para cálculos que requieren precisión.");
        }
        if (opcion==3){
                printf("Short es una palabra reservada que indica un tipo de dato entero de tamaño corto.");
        }
        if (opcion==4){
                printf("Long es un tipo de dato que almacena números enteros grandes, es decir, números no decimales.");
        }
        if (opcion==5){
                printf("Unsigned define un tipo de dato que solo puede almacenar valores positivos o naturales.");
        }
        if (opcion==6){
                printf("Signed es un modificador de tipo que permite que el valor de una variable numérica sea positivo o negativo.");
        }
        if(opcion==7){
                printf("Borra la pantalla de la consola");
        }
        if (opcion==8){
                printf("Stdlib es el archivo de la biblioteca estándar de C, contiene funciones para la gestión de memoria, control de procesos, entre otras.");
        }
        if(opcion==9){
                printf("Switch es una estructura de control que permite ejecutar una sentencia específica, dependiendo del valor de una expresión.");
        }
        if (opcion==10){
                printf("Case es una instrucción de toma de decisiones que evalúa una expresión.");
        }
        else {
        printf("El numero que usted ingreso es invalido, Intentelo de nuevo.");
        }
        return 0;
}