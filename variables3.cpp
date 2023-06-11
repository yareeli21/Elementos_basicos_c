#include"stdio.h"
//variables globales 
int a,b,c;

int main(){
  int valor; //esta es una variable local
 
 printf("Digite tres valores: ");
 scanf("%d %d %d", &a,&b,&c);

valor= a+b+c;
printf("%d",valor);

	return 0;
}