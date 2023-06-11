#include<stdio.h>
#define pi 3.14

int main(){
	
  float r, a;

  printf("Bienvenidos a la programacion en C \n");

  printf("Digite el valor del radio: ");
  scanf("%f", &r);
  
  a= pi*(r*r);

  printf("El area del circulo con radio %.2f es: %.2f", r, a);
	return 0;
}