#include<stdio.h>

int main(){
    int a,b,c;
    printf("Ingrese el cofiente cuadratico a \n");
    scanf("%d",&a);
    printf("Ingrese el cofientes lineal b \n");
    scanf("%d",&b);
    printf("Ingrese el termino c\n");
    scanf("%d",&c);
    if(a!=0){
        int discriminante=b*b-4*a*c;
        if(discriminante>0){
            printf("Tiene 2 soluciones\n");
        }else if (discriminante==0)
        {
            printf("Tiene una unica solucion\n");
        }else{
            printf("No tiene soluciones en el campo de los reales\n");
        }


    }else{
        printf("El coeficiente cuadratico tiene que ser distinto a 0");
    }


  
    
    return 0;
}
/*Diseñar un algoritmo que decida cuántas de las soluciones de la 
ecuación ax2 +bx + c son números reales. 
(Sugerencia: recordar que la cantidad de soluciones sólo puede 
ser 0, 1 ó 2, y que se obtienen de la fórmula x= −b± √b2−4 ac ∕ 2 a).
*/