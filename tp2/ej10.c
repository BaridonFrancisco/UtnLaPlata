#include <stdio.h>
#include <math.h>
int main()
{
    float pesoCorredor; // kg
    int longitud;       // m
    int tiempo;         // en seg
    float gramosPerdidos = 0.0;
    float pesoFinal = 0.0;
    printf("Ingrese el peso del corredor en kg: \n");
    scanf("%f", &pesoCorredor);
    printf("Ingrese la longitud de distancia recorrida: \n");
    scanf("%d", &longitud);
    printf("Ingrese el tiempo empleado: \n");
    scanf("%d", &tiempo);
    gramosPerdidos = 0.1 * trunc(longitud / 50);
    pesoFinal = pesoCorredor - gramosPerdidos;
    if (gramosPerdidos > 0.45 )
    {
        printf("Necesita vitamina A y C\n");
   
        
    }
    else if (gramosPerdidos > 0.3)
    {
        printf("Necesita vitamina A\n");
        
    }else{
        printf("No necesita Vitaminas\n");
    }

    if(tiempo>=15 && tiempo<25){
        printf("Con un tiempo %d a roto record del circuito panamericano\n",tiempo);
    }else if (tiempo>=25)
    {
        printf("Con un tiempo %d a roto record del circuito olimpico\n",tiempo);
    }else{
        printf("No ha roto ningun record ha tardado %d\n segundos",tiempo);
    }
    
    printf("El peso perdido es %.2f kg\n", gramosPerdidos);
    printf("El peso final es %.2fkg\n", pesoFinal);

    return 0;
}
/*
. Cierto atleta pierde en sus carreras 100 gramos de peso por
cada 50m recorridos.
Su entrenador desea un programa que a partir de datos como
• Peso del corredor
• Longitud del circuito (nunca menor a 50m)
• Tiempo empleado (en seg.)
Cumpla con los siguientes puntos:
a. Determinar cuántos gramos pierde el corredor y cuál es su peso final
b. Si ha perdido más de 300g de peso, indicar que necesitará vitamina A y
 si pierde más de 450g necesitará también vitamina C
c. Sabiendo que para el circuito olímpico el tiempo récord es de 25 seg.,
 y que para el circuito panamericano el tiempo récord es de 15 seg.,
 determinar si el corredor ha mejorado alguno de estos récords.
*/