/*


*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
int main (){
 double haltura , base , radio ;
 double lado;
 double area;	
	
	
	
	
printf ("que desea calcular \n");
printf ("1 area de un cuadrado \n");	
printf ("2 area de un circulo \n");	
printf ("3 area de un rectangulo \n");
printf ("4 area de un triangulo equilatero \n");	
	
	int opcion = 0 ;
scanf ("%d" ,&opcion);

switch (opcion){
	
	case 1 :
	printf ("ingresa la longitud de los lados del cuadrado\n");	
	scanf ("%lf" , &lado );
	area = lado*lado ;
	printf(" el area del cuadrado es %f" ,area );
	break;
	
		case 2 :
	printf ("ingresa el radio \n");	
	scanf ("%lf" , &radio);
	area = (radio*radio)*PI ;
	printf(" el area del circilo es %f" ,area );
	break;
	
	
		case 3 :
    printf ("ingresa la base \n");
    	scanf ("%lf" , &base);
    printf ("ingresa la altura \n");
		scanf ("%lf" , &haltura);
	area = (base*haltura);
	printf(" el area del rectangulo es %f" ,area );
	break;
	
	
		case 4 :
    printf ("ingresa la base \n");
    	scanf ("%lf" , &base);
    printf ("ingresa la altura \n");
		scanf ("%lf" , &haltura);
	area = (base*haltura)/2;
	printf(" el area del triangulo equilatero es %f" ,area );
	break;
		
	
	
}

	
}



















