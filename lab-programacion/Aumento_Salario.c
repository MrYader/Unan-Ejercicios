#include <stdio.h>
//Ejercicio 15
int main(){
        //Variables
        float Salario_Actual,Aumento,Salario_Nuevo;
        printf("Ingrese su salario actual\n");
        scanf("%f", &Salario_Actual);

        Aumento = Salario_Actual * 0.25;

        Salario_Nuevo = Salario_Actual + Aumento;

        printf("Aunmento es:%2.f\n", Aumento);
        printf("Salario nuevo:%2.f\n", Salario_Nuevo);

        return 0;
}