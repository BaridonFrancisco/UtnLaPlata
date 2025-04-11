
#include<stdio.h>
#include <unistd.h>
#define JUBILACION 0.11
#define LEY19083 0.03
#define OBRASOCIAL 0.03

int main(){
    
    char nombre[60],apellido[60];
    float sueldoFinal;
    int cantAusentes,sueldoBasico,premio,comida,viaticos,montoFijoAusentes;

    printf("Ingrese el nombre del empleado: ");
    scanf(" %59s",&nombre);
    printf("Ingrese el apellido del empleado ");
    scanf(" %59s",&apellido);
   // printf("el nombre:%s y apellido es %s",nombre,apellido);
    printf("Ingrese el sueldo basico: ");
    scanf("%d",&sueldoBasico);
    printf("Ingrese el premio: ");
    scanf("%d",&premio);
    printf("Ingrese el comida: ");
    scanf("%d",&comida);
    printf("Ingrese el viaticos: ");
    scanf("%d",&viaticos);
    printf("Ingrese el la cantidad de ausentes: ");
    scanf("%d",&cantAusentes);
    printf("Ingrese el monto fijo por ausencia ");
    scanf("%d",&montoFijoAusentes);
    //montofinal=salarioBase+premios+viaticos+comida-(salarioBase*(obraSocial+190083+jubilacion))-montoPorAusencia
    float montoAusencias=montoFijoAusentes*cantAusentes;
    float descuento=sueldoBasico*(LEY19083+OBRASOCIAL+JUBILACION);
    float montoNoRemunerativo=premio+comida+viaticos;
    sueldoFinal=sueldoBasico+montoNoRemunerativo-descuento-montoAusencias;
    /* 
    printf("monto ausencia %f\n",montoAusencias);
    printf("descuento %.0f\n",descuento);
    printf("monto noremu %f\n",montoNoRemunerativo);*/
    printf("***Recibo de Sueldo del empleado***\n");
    printf("Nombre completo %s %s\n",nombre,apellido);
    printf("Sueldo Basico: %d\n",sueldoBasico);
    printf("Montos no remunerativos\n(+) Premios: %d\n",premio);
    printf("(+) Comida: %d\n",comida);
    printf("(+) Viaticos: %d\n",viaticos);
    printf("Descuentos\n");
    printf("(-) Jubilacion: %.0f\n",JUBILACION*100);
    printf("(-) Ley 19083: %.0f\n",LEY19083*100);
    printf("(-) Obra Social: %.0f\n",OBRASOCIAL*100);
    printf("(-) Cantidad Ausencias: %d\n",cantAusentes);
    printf("(-) Monto de ausencias: %.0f\n",montoAusencias);
    printf("**************\nSueldo Final: $%.2f",sueldoFinal);

    sleep(100);
    return 0;

    /*
    char cc[100];
    scanf("%s",&cc);
    printf("el numero es %s",cc);
    sleep(5);*/
  


}

/* UNA EMPRESA DESEA CALCULAR EL SUELDO DE UN EMPLEADO E IMPRIMIR SU RECIBO DETALLANDO:
NOMBRE Y APELLIDO, SUELDO BÁSICO, PREMIO, COMIDA, VIÁTICOS, AUSENTES, OBRA SOCIAL (3%),
LEY 19032 (3%), Y JUBILACIÓN (11%).
POR LOS AUSENTES, SE DESCUENTA UN MONTO FIJO POR DÍA DE AUSENCIA. LOS PORCENTAJES SE CALCULAN SOBRE LOS MONTOS REMUNERATIVOS. VIÁTICOS, PREMIOS Y COMIDA NO SE CONSIDERAN REMUNERATIVOS.
 */