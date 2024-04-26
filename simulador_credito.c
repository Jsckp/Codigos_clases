#include <stdio.h>
#include <math.h>

int main() {
    float monto, anoscredito;
    float cuotames, tasainteresdiaria,tasainteresmes, cuota_interes, total_interes, total_a_pagar, total_a_pagar_anual, total_a_pagar_total,  tasa_anual; 

    printf("Ingrese el monto:\n");
    scanf("%f", &monto);

    printf("Ingrese a cuantos años quiere el credito:\n");
    scanf("%f", &anoscredito);

    tasainteresmes = 0.15 / 12;
    tasa_anual = tasainteresmes * 12;


    printf("Los años es igual:  %f\n", anoscredito);

    cuotames = (tasainteresmes * monto) / (1 - pow((1 + tasainteresmes), -anoscredito * 12));

    for (int i = 1; i <= 12; i++) {
        printf("La cuota mensual a pagar en el mes %d es: %.2f\n", i, cuotames);
    }

    total_a_pagar_total = 0;
    for (int i = 1; i <= anoscredito; i++) {
        cuota_interes = monto * tasainteresmes;
        total_interes = total_interes + cuota_interes;
        total_a_pagar = total_interes + monto;
        total_a_pagar_anual = cuotames * 12;
        total_a_pagar_total = total_a_pagar_total + total_a_pagar_anual;
        printf("El total a pagar en todos los años es: %.2f\n", total_a_pagar_total);
    }

    return 0;
}