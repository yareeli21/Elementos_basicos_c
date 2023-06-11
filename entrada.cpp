#include"stdio.h"

int main(){

  //introducir nuestros valores por referencia, es decir, por medio de scanf()

	int v1;
	float v2, precio;
    printf("Introduzca v1 y v2: ");
    scanf("%d %f",&v1,&v2);
    printf("Precio de venta al publico: ");
    scanf("%f",&precio);
    
	return 0;
}