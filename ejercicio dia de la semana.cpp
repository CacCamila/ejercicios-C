/*
escriba un programa que reciba por teclado un numero entero
entre 1 y siete y devuelva el dia de la semana correspondiente 

*/
#include <stdio.h>

int main (){
	
int numero = 0;

printf ("ingrese un numero del uno al siete");
	
	scanf ("%d", &numero );
	
	switch (numero){
		
		case 1:
			printf ("lunes");
			break;
		
			
		case 2:
			printf ("martes");
			break;	
			
			
		case 3:
			printf ("miercoles");
			break;
		
		
		case 4:
			printf ("jueves");
			break;
		
		
		case 5:
			printf ("viernes");
			break;
		
		
		case 6:
			printf ("sabado");
			break;
		
		
		case 7:
			printf ("domingo");
			break;
		
	default: 
	printf("numero invalido");
	break;
	
	
		
	}
	
	
}








