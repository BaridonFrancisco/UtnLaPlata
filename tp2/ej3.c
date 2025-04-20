#include <stdio.h>

int main()
{
    int op;
    float precioGaseosa = 1.25f;
    float acumulativo = 0.00f;
    int flag = 1;
    float vuelto = 0.00f;

    do
    {
        printf("**Menu**\n");
        printf("1. 0,10$\n");
        printf("2. 0,25$\n");
        printf("3. 0,50$\n");
        printf("4. 1,00$\n");
        printf("5. Terminar de ingresar monedas\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            acumulativo += 0.10f;
            break;
        case 2:
            acumulativo += 0.25f;
            break;
        case 3:
            acumulativo += 0.50f;
            break;
        case 4:
            acumulativo += 1.00f;
            break;
        case 5:
            flag = 0;
            break;
        default:
            printf("No ha ingresado una opcion valida\n");
            break;
        }
    } while (flag == 1);

    if (precioGaseosa == acumulativo)
    {
        printf("Operacion exitosa\nVenta sin vuelto difrute su gaseosa :)!!");
    }
    else if (acumulativo > precioGaseosa)
    {
        vuelto = acumulativo - precioGaseosa;
        printf("Operacion exitosa\nVenta con vuelto $%.2f difrute su gasesa :)!!", vuelto);
    }
    else
    {
        printf("No hay venta por balance insuficiente se devuelve las monedas $%.2f", acumulativo);
    }

    return 0;
}
/*
Se tiene una máquina expendedora de gaseosas cuyo valor es de $1,25.
Admite monedas de: $0,10 $0,25 $0,50 y $1 y realiza las siguientes
 operaciones:
a. Venta sin Vuelto
b. Venta con Vuelto
c. No Venta y devuelve las monedas
El programa debe aceptar las monedas e imprimir un mensaje indicando la operatoria.
*/