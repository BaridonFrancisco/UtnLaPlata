#include<stdio.h>


int maximo_2(int a,int b);
int maximo_3(int a,int b,int c);
int max(int n);

int main(){
    /*
    int a,b,c;
    printf("Ingrese un numero 1 porfavor :D\n");
    scanf("%d",&a);
    printf("Ingrese un numero 2 porfavor :D\n");
    scanf("%d",&b);
    printf("Ingrese un numero 3 porfavor :D\n");
    scanf("%d",&c);
    
    printf("el maximo es %d",maximo_3(a,b,c));*/

    printf("el maximo es %d",max(10));
    

    return 0;
}


int maximo_2(int a,int b){
    int aux;
    if(a>b){
        aux=a;
    }else if(a==b){
        aux=b;
    }else{
        aux=b;
    }
    return aux;
}
int maximo_3(int a,int b,int c){
    int max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    //int maximo2=maximo_2(a,b);
    return max;
}
//a,b,c,d
int max(int n){
    int num,max=-999;
    for (int i = 0; i < n ;i++){
        printf("Ingrese un numero\n");
        scanf("%d",&num);
        if(num>max){
            max=num;
        }
    }
    return max;

        
}


/*1. CODIFICAR FUNCIONES PARA CALCULAR:
A. EL MÁXIMO ENTRE 2 NÚMEROS ENTEROS
B. EL MÁXIMO ENTRE 3 NÚMEROS ENTEROS
C. EL MÁXIMO ENTRE 5 NÚMEROS ENTEROS
D. EL MÁXIMO ENTRE 10 NÚMEROS ENTEROS
EN CADA INCISO DONDE SEA POSIBLE, HACER DOS VERSIONES: UNA QUE CALCULE EL MÁXIMO USANDO LAS FUNCIONES DEFINIDAS EN LOS INCISOS ANTERIORES, Y OTRA QUE NO LAS USE. ¿EN QUÉ CAMBIARÍA EL CÓDIGO SI SE PIDIERA CALCULAR EL MÁXIMO ENTRE NÚMEROS REALES?
*/