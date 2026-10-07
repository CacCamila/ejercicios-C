#include<stdio.h>    
#define PI 3.1415926535
int main (){
double radio , perimetro , area;
printf ("ingrese el radio del circulo");
scanf("%lf", &radio);
if (radio<=0){
	printf("radio invalido , no es posible calcular");}
else {
perimetro = 2*radio* PI;
area=(radio*radio)*PI;
printf("el perimetro calculado %2f \n , perimetro");
printf("el area es:%2 \n , area");return 0;
}
}