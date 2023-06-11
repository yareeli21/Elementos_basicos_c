#include"stdio.h"
int main(){

   const int luna=238857;  //distancia en millas hacia la luna y estamos poniendola como constante

  float luna_kilo; //una variable de tipo float

  printf("Distancia a la luna %d millas\n",luna); //se está poniendo la distancia por medio de la constante
  luna_kilo = luna*1.609; //una milla = 1.609km
  printf("En kilometros es %fkm", luna_kilo); 

	return 0;
}