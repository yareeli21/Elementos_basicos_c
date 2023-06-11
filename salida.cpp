#include"stdio.h"
#define T "Tambor de Hojalata"
int main(){

  //salida de cadenas de caracteres

  char arbol[]="Acebo";
  printf("%s\n",arbol); //con printf es lo ma¿ás común de mostar las cadenas en pantalla

  puts(arbol); /*puts es una función específica de C para que se muestre en pantalla una cadena, basta con poner dentro los 
  paréntesis el nombre de la cadena*/

  //otra salida de cadena con una define

  char st[21]="Todo puede hacerse."; //cuando se pone qué dirá la cadena es opcional poner el número de caracteres que podrá llevar como máximo la cadena
  puts(T);//AQUÍ SE MOSTRARÁ LA DEFINE
  puts("Permiso para salir en la foto"); /*otra forma de mostrar una cadena igual con puts pero ahora entre comillas
  dobles se pone lo que dirá la cadena y no el nombre de la cadena como fue anteriormente*/
  puts(st); //se muestra la cadena st
  puts(&st[8]); //se mostrarán los caracteres de la posición 8 en adelante y para hacer eso se pone el & porq es un valor modificado que fue por referencia
	return 0;
}