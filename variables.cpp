#include "stdio.h"

int main(){
	
  float f;

  f= 5.65; 
  printf("f: %.2f\n", f);

  double h;

  h= 0.0;
  printf("double: %d\n",h);

  //pruebas de código

  char alarma= '\a';
  char bs='\b';

  printf("%c %c", alarma, bs);
	return 0;
}