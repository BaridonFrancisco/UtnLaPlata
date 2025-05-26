#include<math.h>
#include<stdio.h>

float distanciaAB_r3(float a,float b,float c,float d,float e,float f);
float distanciaAB_r2(float a,float b,float c,float d);

int main(){

    printf("La distancia en r3 %.2f",distanciaAB_r3(2,4,5,8,2,3));
    printf("La distancia en r2 %.2f",distanciaAB_r2(2,4,5,8));
    return 0;
}
float distanciaAB_r3(float a,float b,float c,float d,float e,float f){
    
    return (float)sqrt( (pow(a-b,2))+(pow(c-d,2)) +(pow(e-f,2)));
}
float distanciaAB_r2(float a, float b, float c, float d)
{
    return (float)sqrt((pow(a-b,2))+(pow(c-d,2)));
}
/* DISEÑAR UNA APLICACIÓN QUE OFREZCA, A TRAVÉS DE UN MENÚ,\
 LA POSIBILIDAD DE CALCULAR DISTANCIAS ENTRE PUNTOS DEL PLANO O DEL
 ESPACIO. SE DEBEN CODIFICAR FUNCIONES QUE CALCULEN LAS DISTANCIAS A
 PARTIR DE LAS COORDENADAS DE LOS PUNTOS, QUE LLEGAN COMO PARÁMETROS.
*/