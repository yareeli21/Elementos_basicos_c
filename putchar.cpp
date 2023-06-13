#include<stdio.h>

int main(){

char  c;
int x;

putchar('A'); //en putchar se ponen coracteres y los caracteres van entre comillas simples

printf("\n");
printf("Digite una letra: "); //pide lo que se debe hacer
c=getchar(); //aquí se va a guardar lo que introduzcamos y después con un enter
printf("%c",c); // se mostrará en pantalla

printf("\n");

printf("Digite un numero: ");
scanf("%d", &x);

	return 0;
}