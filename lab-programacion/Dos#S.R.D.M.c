#include <stdio.h>
int main (){
        //Variables
        int num0,num1, suma, resta, mult, div;
        printf("Ingrese dos numeros para sumar, restar, multiplicar y dividir\n");
        printf("Ingrese el primer numero\n");
        scanf("%i", &num0);
        printf("Ingrese el segundo numero\n");
        scanf("%i", &num1);

        suma= num0+num1;
        resta=num0-num1;
        mult=num0*num1;
        div=num0/num1;


        printf("La suma es:\n %.2i\n", suma);
        printf("La Resta es:\n %.2i\n", resta);
        printf("La Multiplicacion es:\n %.2i\n", mult);
        printf("La Divicion es\n %.2i\n", div);

        return 0;
}