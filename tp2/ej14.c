#include<stdio.h>

int main(){
    int x1,x2,y2,y1;
    int pq_x,pq_y,qp_x,qp_y;
    printf("Ingrese la coordenadas del punto P(x1,y1) \n");
    scanf("%d %d",&x1,&y1);
    printf("Ingrese la coordenadas del punto Q(x1,y1) \n");
    scanf("%d %d",&x2,&y2);

    pq_x=x2-x1;
    pq_y=y2-y1;

    qp_x=x1-x2;
    qp_y=y1-y2;
    printf("Vector PQ=(%d,%d)\n",pq_x,pq_y);
    printf("Vector QP=(%d,%d)\n",qp_x,qp_y);

    return 0;
}
/*
. Diseñar un algoritmo que dados dos puntos del plano P y Q 
imprima las coordenadas del vector PQ y las del vector QP.
*/