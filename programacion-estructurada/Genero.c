#include <stdio.h>

int main() {
    char genero;

    printf("Ingrese su genero(M/F): ");
    scanf(" %c", genero);

    if (genero == 'M' || genero == 'F'){
        printf("Aplica a bono.\n");
    }
    else if(genero =='m' || genero=='f'){
        printf("Corrige, No aplica a bono.\n");
    }
    else {
        printf("No es una letra válida.\n");
    }
    return 0;
}