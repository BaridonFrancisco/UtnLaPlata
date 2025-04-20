#include<stdio.h>

int main(){

    int num1,num2,num3,num4;
    printf("Ingrese el numero 1: ");
    scanf("%d",&num1);
    printf("Ingrese el numero 2: ");
    scanf("%d",&num2);
    printf("Ingrese el numero 3: ");
    scanf("%d",&num3);
    printf("Ingrese el numero 4: ");
    scanf("%d",&num4);
    int suma=num1+num2+num3+num4;
    if(suma>0){
        printf("La suma es %d valor positivo",suma);
    }else if (suma<0)
    {
       printf("La suma es %d valor negativo",suma);
    }else{
        printf("La suma es %d valor nulo",suma);
    }
    return 0;
    
}
/*Se ingresan 4 números reales y se quiere determinar si la suma de ellos es positiva, 
negativa o cero. Imprimir un mensaje indicándolo */