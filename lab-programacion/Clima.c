// Escribe un programa que pida al usuario la temperatura en grados Celsius y determine el clima según la siguiente clasificación:

// Si la temperatura es mayor o igual a 30°C, verifica si es mayor o igual a 40°C.

// Si es 40°C o más, imprime "¡Hace mucho calor!".

// Si está entre 30°C y 39°C, imprime "Hace calor".

// Si la temperatura es menor de 30°C, verifica si es menor de 15°C.

// Si es menor de 15°C, imprime "Hace frío".

// Si está entre 15°C y 29°C, imprime "El clima es agradable".
#include <stdio.h>
#include <stdlib.h>


int main(){

        float celcius;
        printf("Escriba la temperatura actual en grados celcius:\n");
        scanf("%f", &celcius);

        if (celcius>=30)
        {
                if (celcius>=40){
                        printf("Hace mucho calor");
                }
                {
                        printf("Hace calor");
                }
        }
        else if (celcius<30)
        {
                if (celcius<15){
                        printf("Hace frio");
                }
                {
                        printf("El clima es estable");
                }
        }
       return 0;
}