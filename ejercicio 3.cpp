/*
escriba un programa que reciba por teclado las logitudes de los dos catetos de un triangulo rectangulo
 y calcule la longitud de la hipotenusa dado el teorema de pitagoras

*/
#include<stdio.h>
#include<math.h>
int main (){ 
double a=0;
double b=0;
double c=0;
printf("ingrese la longitud de a \n");
scanf("%lf" , &a);
printf("ingrese la longitud de b \n");
scanf("%lf" , &b);
c=sqrt(a*a + b*b);
printf("el valor de la hipotenesa es : %.2f" ,c);

return 0;
}






