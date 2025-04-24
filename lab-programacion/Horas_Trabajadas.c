#include <stdio.h>

int main (){
        //variables
        float horas_trabajadas,valor_horas,salario;

        printf("Cuantas horas trabajó?\n");
        scanf("%f", &horas_trabajadas);

        printf("Cuanto gana por hora?\n");
        scanf("%f", &valor_horas);

        salario = horas_trabajadas * valor_horas;

        printf("Su salario es:%.2f", salario);

        return 0;
}