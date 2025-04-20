#include<stdio.h>

int main(){
    int i,j,k,l;
    printf("Ingrese el valor de i\n");
    scanf("%d",&i);
    printf("Ingrese el valor de j\n");
    scanf("%d",&j);
    printf("Ingrese el valor de k\n");
    scanf("%d",&k);
    printf("Ingrese el valor de l\n");
    scanf("%d",&l);
    if(j==0 || l==0){
        printf("Division por 0 produce una indeterminacion");
    }else{
        float a=i/j;
        float b=k/l;
        if( a==b){
            printf("Son iguales\n");
        }
    }
    return 0;
}
/*
Diseñar un algoritmo que ingrese I, J, K, L. Si I/J=K/L 
imprimir “Son iguales”, en caso contrario no dar mensaje.
 Recuerde verificar que los divisores sean distintos de cero y en este 
 caso indicar la imposibilidad de realizar las operaciones.
*/