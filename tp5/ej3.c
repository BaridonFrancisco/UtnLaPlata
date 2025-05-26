#include<stdio.h>
#include<math.h>

float areaCirculo(float radio);
float areaCuadrado(float lado1 ,float lado2);
float areaRectangulo(float base,float altura);
float areaTrapecio(float base_M ,float base_m , float altura);
float areaTriangulo(float base ,float altura);
void menu();

int main(){

    menu();
    return 0;
}

float areaCirculo(float radio){
    return 3.1416*radio;
}
float areaCuadrado(float lado1 ,float lado2){
    return lado1*lado2;
}
float areaRectangulo(float base,float altura){
    return base*altura;
}
float areaTrapecio(float base_M ,float base_m , float altura){
    return ((base_m+base_M))*altura/2;
}

float areaTriangulo(float base, float altura)
{
    return (base*altura)/2;
}

void menu(){
    float areaFigura=0.0;
    int opc;
    float radio=0.0,lado1=0.0,lado2=0.0;
    printf("Menu de areas geometricas\n");
    printf("1.Circulo\n");
    printf("2.Cuadrado\n");
    printf("3.Rectangulo\n");
    printf("4.Trapecio\n");
    printf("5.Triangulo\n");
    printf("Seleccione una opcion: ");
    scanf("%d",&opc);
    switch (opc)
    {
    case 1:         //
        printf("Ingrese el radio: ");
        scanf("%f",&radio);
        areaFigura=areaCirculo(radio);
        printf("el área del circulo es: %.2f",areaFigura);
        break;
    case 2:
        printf("Ingrese un lado 1: ");
        scanf("%f",&lado1);
        printf("Ingrese un lado 2: ");
        scanf("%f",&lado2);
        areaFigura=areaCuadrado(lado1,lado2);
        printf("EL area del cuadrado es %.2f",areaFigura);
        break;
    case 3:
    printf("Ingrese un lado 1:");
    scanf("%f", &lado1);
    printf ("Ingrese el segundo lado: ");
    scanf("%f", &lado2);
    areaFigura = areaRectangulo (lado1 ,lado2);
    printf ("El área del rectangulo es de %.2f", areaFigura);
    break;
    default:
    printf("Opcion Incorrecta");
        break;
    }
}

/*3. DISEÑAR UNA APLICACIÓN QUE OFREZCA, A TRAVÉS DE UN MENÚ, 
LA POSIBILIDAD DE CALCULAR ÁREAS DE FIGURAS GEOMÉTRICAS ESPECÍFICAS. 
SE DEBEN CODIFICAR FUNCIONES QUE CALCULEN LAS ÁREAS DE: CÍRCULO, 
CUADRADO, RECTÁNGULO, TRIÁNGULO Y TRAPECIO. 
LAS FÓRMULAS PUEDEN BUSCARSE EN LIBROS DE GEOMETRÍA DE NIVEL SECUNDARIO 
(POLIMODAL).
*/