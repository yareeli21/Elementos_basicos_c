#include<stdio.h>
#include<string.h>
int main(){
	
  char c;
  char m;
  char cad[]="esto es una cadena\      
  que tiene dos lineas";
  /*para escribir una cadena se necesita poner corchetes*/
  char mensaje[20];
  
  c= 'T'+5; //esto será con los valores de la tabla ASCII

   printf("%c \n", c);

  m= m + 'a'-'A';
  printf("%c",m);

  printf("%s \n",cad);

  strcpy(mensaje,"Quiero beber\n");

  printf(mensaje);

	return 0;
}