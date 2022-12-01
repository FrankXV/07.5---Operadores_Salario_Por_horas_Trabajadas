#include <iostream>
#include "stdio.h"
#include "math.h"

int main() {
    double horas, pago_hora, salario_quincena, salario_mensual;


    printf("digite el numero de horas trabajadas al dia: \n");
    scanf("%lf", &horas);
    printf("Digite el pago por hora que recibe: \n");
    scanf("%lf", &pago_hora);

    salario_quincena = (horas*pago_hora)*15;
    salario_mensual = (horas*pago_hora)*30;

    printf("Su Salario Quincenal es : %.2lf$\n"
                  "Su Salario Mensual es : %.2lf$ ", salario_quincena, salario_mensual);


    return 0;
}
