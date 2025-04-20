#include<stdio.h>

int main(){
    int a,b;
    printf("Ingrese el numero 1\n");
    scanf("%d",&a);
    printf("Ingrese el numero 2\n");
    scanf("%d",&b);

    //solucion 1
    // if(a>=b){
    //     if(b==a){
    //         
    //     }else{
    //         printf("El numero A=%d es mayor\n",a);
    //     }
    // }else{
    //     printf("EL numero B=%d es mayor\n",b);
    // }
    
    //solucion2
    if(a>b){
        printf("El numero A=%d es mayor a B\n",a);
    }else if(a==b){
        printf("son A=%d y B=%d son iguales\n",a,b);
    }else{
        printf("EL numero B=%d es mayor A\n",b);
    }
    //solucion 3
    int mayor=a>b?a:b==a?a:b;
    printf("El mayor numero entre A=%d y B=%d es num=%d\n",a,b,mayor);
    return 0;

    // casos A es mayor a B , B es mayor a A o ambos son iguales 3 condiciones , se pueden evaluar 2
}
/*
Diseñar un algoritmo que calcule el mayor de dos números dados. 
¿Cuántas condiciones requiere evaluar su algoritmo? 
¿Podría codificar otro que utilice menos? ¿Y otro que utilice menos sentencias SI?
*/