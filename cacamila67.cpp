/*
realice un programa que poermita
 realizar las siguientes operaciones  suma de dos numeros 
 restas multiplicacion y division 


*/

#include <stdio.h>

int main (){


float n1=0;
float n2=0;
float resultado;
char opc= '';

printf("que desea hacer");
printf("sumar --- > 1");
printf("restar --- > 2");
printf("multiplicar --- > 3");
printf("dividir --- > 4");



 scanf("%c",&opc);

switch(opc){
	
	case '1':
	 printf("ingrese el valor de n1 /n");
	 scanf ("%f" &n1)
	 printf("ingrese el valor de n2 /n");	
		scanf ("%f" &n2)
		resultado = n1 + n2;
		
	 printf("resultado");
		
		break;
	
	case '2':
		printf("ingrese el valor de n1 /n");
	 scanf ("%f" &n1)
	 printf("ingrese el valor de n2 /n");	
		scanf ("%f" &n2)
		resultado = n1 - n2;
		
	 printf("resultado");
		
		
		
		
		
		
		break;
		
	
	default:
	//ERROR OPCION INVALIDA
		break;	
}




}
