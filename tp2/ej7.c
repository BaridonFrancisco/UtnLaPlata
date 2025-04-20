#include<stdio.h>

int main(){
    int a,b;
    char res;
    printf("Ingrese el primer numero \n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero \n");
    scanf("%d",&b);
    printf("**Calculadora**\n+ Suma\n");
    printf("- Resta\n");
    printf("* Multiplicacion\n");
    printf("/ Division\n");
    printf("Ingrese un caracter para la respectiva operacion\n");
    getchar();
    res=getchar();
    switch (res)
    {
    case '+':
        printf("La suma de A=%d + B=%d es %d\n",a,b,a+b);
        break;
    case '-':
        printf("La resta de A=%d - B=%d es %d\n",a,b,a-b);
        break;
    case '*':
        printf("El producto de A=%d * B=%d es %d\n",a,b,a*b);  
        break; 
    case '/':
        if(b!=0){
            printf("El cociente de A=%d / B=%d es %.2f",a,b,(float)a/b);
        }else{
            printf("La division por 0 produce una indeterminacion b no deber se 0\n");
        }
        break;
    default:
        printf("Ha ingresesado una opcion no valida");
        break;
    }

    return 0;
}
/*
Realizar un programa que simule una calculadora simple. 
Lee dos números y un carácter. Si el carácter es un “+”, 
se imprime la suma; si es un “-”, se imprime la diferencia;
 si es un “*”, se imprime el producto; si es un “/”, 
 se imprime el cociente (si no puede calcularse debe emitirse un aviso).
  Utilizar el CASO.
*/