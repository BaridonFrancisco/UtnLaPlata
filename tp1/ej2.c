
#include <stdio.h>
#include <unistd.h>
#define impuesto 0.01
int main()
{
    /* datos
    t tiempo de uso de internet
    $10 x t
    $15 x hoja impresa
    cargo adicional $5 * X donde x=x  */
    int cantMinutos, cantHojas;
    float cargoAdicional;
    int flag = 1;
    while (flag)
    {
        printf("Cuantos minutos desea alquilar la maquina?: ");
        scanf("%d", &cantMinutos);
        printf("Cuantos hojas desea imprimir?: ");
        scanf("%d", &cantHojas);
        if(cantMinutos<0 || cantHojas<0 ){
            printf("Numero negativo no permitidos");
            continue;
        }
        if(cantHojas==0 && cantMinutos==0)break;
        cargoAdicional = 5 * impuesto * cantMinutos;

        printf("***Recibo***\n");
        printf("Precio de por %d minutos de uso: $%d\n", cantMinutos, cantMinutos * 10);
        printf("Precio de por %d hojas: $%d\n", cantHojas, cantHojas * 15);
        printf("Cargo adicional como seguro: %.2f\n", cargoAdicional);
        printf("Costo Total: %.2f", cargoAdicional + cantHojas * 15 + cantMinutos * 10);
        flag = 0;
    }

    sleep(25);
    return 0;
}

/* UN CIBER COBRA $10 EL MINUTO DE USO DE UNA COMPUTADORA CON CONEXIÓN A INTERNET, Y $15 LA HOJA IMPRESA. EXISTE UN CARGO ADICIONAL CONSISTENTE EN $5 * X,
SIENDO X EL 1% DEL TIEMPO UTILIZADO, EN CONCEPTO DE SEGURO. SE QUIERE IMPRIMIR EL RECIBO DE
 USO DE UN CLIENTE, EN EL QUE SE DETALLEN TODOS LOS CONCEPTOS.
*/
