#include<stdio.h>
#include<math.h>
#include<time.h>
#include<unistd.h>
int main(){
  

   // srand(time(0));  // una mejor opcion en vez de insertar manualmente
    int alumnos=30;
    int grupos=5;
    int nota;
    int notas[alumnos/grupos];//el tamano no puede ser 
    int  maestras[3][6]; // porque son 3 maestras y 6 notas
    int notaNumero;
    for(int i = 0; i < 3; i++) {
        notaNumero=0;
        for (int j= 0; j < 6; j++)
        {
            notaNumero++;
            printf("Ingrese la nota de la maestra %d nota numero %d ",i+1,notaNumero);
            scanf("%d",&nota);
            if(!(nota>0 && nota<11)){
                j--;
                notaNumero--;
                continue;
            }
            maestras[i][j]=nota;
        }
        
    }
    
    
   // sleep(25);
    return 0;

}
/* EN UNA ESCUELA PRIMARIA SE SOLICITA A LOS 30 ALUMNOS DEL SEXTO CURSO
 QUE CALIFIQUEN A SUS 3 MAESTRAS. PARA HACERLO, 
 DEBEN AGRUPARSE DE A 5 Y CADA GRUPO ASIGNAR UNA NOTA ENTRE 1 Y 10 A 
 CADA MAESTRA. SE REQUIERE UN INFORME EN EL QUE SE DETALLE, 
 PARA CADA MAESTRA, LA NOTA QUE CADA GRUPO LE ASIGNÓ Y LA NOTA 
 PROMEDIO QUE OBTUVO.*/