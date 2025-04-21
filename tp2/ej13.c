#include<stdio.h>



int main(){
    int a,b,c;
    printf("Ingrese el numero 1: \n");
    scanf("%d",&a);
    printf("Ingrese el numero 2: \n");
    scanf("%d",&b);
    printf("Ingrese el numero 3: \n");
    scanf("%d",&c);
    
    if(a==b && b==c && a==c){
        printf("Todos los numeros 1,2,3 son iguales a %d\n",a);
    }else if(a>=b && a>=c){
        if(a==b){
            printf("El numero 1 =>%d , numero 2 =>%d son iguales y mayores a el numero 3 =>%d \n",a,b,c);
        }else if (a==c)
        {
            printf("El numero 1 =>%d , numero 3 =>%d son iguales y mayores a el numero 2 =>%d \n",a,c,b);
        }else{
            printf("El numero 1 =>%d es el mayor\n",a);
        }
        
    }else if (c>=b)
    {
        if(c==b){
            printf("El numero 2 => %d y 3 => %d son iguales \n",b,c);
        }else{
            printf("EL numero 3 => %d es el mayor\n",c);
        }
    }else{
        printf("El numero 2 => %d es el mayor",b);
    }
    
/*Diseñar un algoritmo que calcule el mayor de 3 números dados. 
¿Cuántas condiciones requiere evaluar su algoritmo? 
¿Podría codificar otro que utilice menos? 
¿Y otro que utilice menos sentencias SI?

Se requiere evaluar si son todos iguales, 
si a y b son iguales y mayores a c
si a y c son iguales y mayores a b
si b y c son iguales y mayores a a
si a es mayor a b y c , si b es mayor a c y a, 
si c es mayora b y a

se puede resolver de varias maneras como por ejemplo


*/
    return 0;
}