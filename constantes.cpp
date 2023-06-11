#include "stdio.h"
//las define se ponen después de la librería estándar
#define NUEVALINEA \n
#define PI 3.14
#define VALOR 54

const int Meses = 12; //el const también se pone después de la librería estándar

int MiNumero;

int main(){

  printf("El valor es: %d \n",VALOR);

  printf("El año tiene %d meses\n",Meses);

  printf("Digite un numero: \n");
  scanf("%d",&MiNumero);
	return 0;
}