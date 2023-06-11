#include"stdio.h"
//programa de cómo se pueden declarar variables al inicio del bloque de cualquier programa en C
int main(){

  int x, y1; //declarando variables en la función main
  x= 75; //asiganando valores a cada variable
  y1=89;

  if (x>10){
   
    int y2=50; //aquí dentro del bloque if ya se está declarando e inicializando otra variable 

    y1=y1+y2;

  }

  printf("x=%d, y1=%d \n",x,y1); //saliendo del bloque if se muestra en pantalla el valor de x y de y1 final

	return 0;
}