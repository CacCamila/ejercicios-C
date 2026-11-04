/* realice un programa que per,ita ca;cular la distancia entre dos puntos
 y en que cuadrante se ubica cada uno*/
 
 
 #include <stdio.h> 
 #include <math.h>
 int main(){
 double x1=0;	
 double	x2=0;
 double	y1=0;
 double	y2=0 ;
 double distancia ;
 double dy, dx;
 
 printf ("ingrese la cordenada de x1: ");
 scanf ("%lf", &x1);
 
 printf ("ingrese la cordenada de x2: ");
 scanf ("%lf", &x2);
 
 printf ("ingrese la cordenada de y1: ");
scanf ("%lf", &y1);

printf ("ingrese la cordenada de y2: ");
scanf ("%lf", &y2); 


dx = x2 - x1;
dy = y2-y1;
distancia = sqrt(pow(dx,2) + pow(dy,2)) ;
 printf ("la distancia entre los dos puntos es %f", distancia);
 }