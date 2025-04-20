#include<stdio.h>

int main(){

    int a=1;
    int b=1;
    int c=1;

    if(a==0 && b==0 && c==0){
        //condicion si todas son falsas
    }else{
        //codicion si alguna es verdadera
    }

}

/*Si se analiza el pseudocódigo del ejemplo, se destaca que cada una de las
 condiciones llevaban a hacer exactamente lo mismo en caso de que cualquiera
  de ellas fuese verdadera, y sólo se hacía algo diferente en el caso en que TODAS ellas resultaban falsas.
Encontrar una manera de construir una condición que permita expresar lo que acabamos de mencionar, 
de modo que el programa resultante utilice una sola sentencia SI para decidir
 (VER EL EJMPLO EN LA PRÁCTICA).
*/