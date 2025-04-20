#include<stdio.h>

int main(){
    int bancos,alumnos,faltantes=0;

    printf("Ingrese la cantidad de  bancos \n");
    scanf("%d",&bancos);
    printf("Ingrese la cantidad de alumanos \n");
    scanf("%d",&alumnos);
    faltantes=bancos-alumnos;
    if(faltantes<0){
        printf("Faltan %d bancos",faltantes);
    }else{
        printf("Sobran %d bancos",faltantes);
    }
    return 0;
}
/*Sabiendo la cantidad de bancos de un aula y la cantidad de alumnos
 inscriptos para ese curso, determinar si alcanzan los bancos existentes.
  De no ser así informar además cuantos bancos es necesario agregar.

 */