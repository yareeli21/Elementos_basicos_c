#include"stdio.h"

int main(){
 //entrada de cadenas de caracteres
	//se puede hacer con scanf

	char nombre[50];
	printf("Digite su nombre: ");
	scanf("%s",nombre); /*en scanf para las cadenas, al poner el nombre de la variable tipo char que es una cadena ya no se pone el & porq 
	estas ya traen incluida para dirección de memoria, además en scanf solo se mostrará en pantalla la parte hasta que se vea un espacio en blanco*/
    printf("Nombre introducido: %s",nombre); 


   return 0;
}