#include<stdio.h>

int main(){

  printf("\n Error - Pulsar una tecla para continuar \n");
  printf("\n");
  printf("Yo estoy preocupado\n no por el \n sino por ti.\n"); //esta última saldrá en tres líneas


  printf("\nTabla de numeros\n"); //uso de \n para nueva línea
  printf("\nNum1\t Num2\t Num3\n"); //uso de \t para tabulaciones
  printf("%c",'\a'); //uso de \a para alarma sonora

  //mostrar funcionamiento de las secuencias de escape

  char sonidos='\a'; //secuencia escape alarma en sonidos
  char bs='\b'; //almacena secuencia de escape retroceso en bs
  printf("%c%c", sonidos, sonidos); //emite el sonido dos veces
  printf("ZZ"); //imprime dos veces el caracter
  printf("%c%c",bs,bs); //mueve el cursos al primer carácter 'Z'

	return 0;
}