#include"stdio.h"

int main(){

  int i,j,c,n;
  

  i= 11;
  j= 12;
  c= 'A';
  n= 40.791512;

   printf("%x  %3d  %c  %.3f \n",i,j,c,n);

   /*el primer dato se verá de forma hexadecimal, el segundo con un ancho de 3 en decimal, el tercero simplemente el caracter
   y el cuarto un flotante con 3 decimales*/

   printf("%15s \n","Yareli Zavala"); /*una forma de escribir una cadena, antes del string se pone un 15 que es referente a los 
   caracteres que tendrá dicha cadena y después en lugar de poner el nombre de la cadena supuestamente, se pone entre comillas lo que diría
   */
   printf("%-15s","Yareli Zavala"); /*lo mismo que lo anterior pero ahora ese signo - seguido del % significa que estará en pantalla más
   hacia la izquierda en vez de hacia la derecha como saldrá en la primer cadena*/
	return 0;
}