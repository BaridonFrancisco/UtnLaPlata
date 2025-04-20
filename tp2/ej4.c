#include <stdio.h>

int main()
{

    double precioDolar = 1250.00;
    double cantidadDolares = 0.00;
    double monto, comision = 0, montoFinal;
    printf("Ingrese la cantidad de dolares que quiere comprar: \n");
    scanf("%lf", &cantidadDolares);
    if (cantidadDolares > 0)
    {
        printf("La operacion tiene un costo administrativo segun el monto\n");
        printf("Si el monto esta entre $501->$1501 2%%\n");
        printf("Si el monto esta entre $1501->$3501 2.5%%\n");
        printf("Si el monto es mayor $3501 4%%\n");
        monto = cantidadDolares * precioDolar;
        if (cantidadDolares > 501 && cantidadDolares < 1501)
        {
            comision = monto * 0.02;
        }
        else if (cantidadDolares >= 1501 && cantidadDolares < 3501)
        {

            comision = monto * 0.025;
        }
        else if (cantidadDolares >= 3501)
        {
            comision = monto * 0.04;
        }
        else
        {
            printf("sin cambios\n");
        }
        montoFinal = monto + comision;
        printf("comision %f", comision);
        printf("Informacion del ticket\n");
        printf("Dolares comprados %f US\n", cantidadDolares);
        printf("Valor de cada dora %f ARG\n", precioDolar);
        printf("El monto de la comisiones es %.2f\n", comision);
        printf("Monto final a abonar $%.2f ARS", montoFinal);
    }
    else
    {
        printf("Cantidad ingresada $%.2f invalida", cantidadDolares);
    }

    return 0;
}

/*
Un empleado de banco tiene un sistema que imprime un ticket
cada vez que un cliente realiza una compra de dólares.
La operación tiene una comisión administrativa según la cantidad de
dólares que se venden, lo que representa un sobre costo para el cliente:
a. 2% si es más de 501 y menos de 1501
b. 2,5% si es mayor de 1501 y menos que 3501
c. 4 % si es mayor a 3501
El ticket muestra discriminados: la cantidad de dólares que se compraron
, el valor de cada dólar, el monto de la comisión y el monto total
 que el cliente debe abonar por la compra.
Hacer un programa que simule la compra e imprima el ticket.
*/