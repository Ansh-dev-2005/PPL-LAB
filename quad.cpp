
#include<stdio.h>
#include<math.h>
int main(){

 float a,b,c,d;
 double e,f;
 printf("Enter the Value Of Cofficient of x^2  ");
 scanf("%f",&a);
 printf("Enter the Value Of Cofficient of x  ");
 scanf("%f",&b);
 printf("Enter the Value Of Contant term  ");
 scanf("%f",&c);
 d=b*b-4*a*c;

 if( d > 0 ) 
 {
 e=((-b)+sqrt(d))/(2*a);
 f=((-b)-sqrt(d))/(2*a);
 printf("Roots are respectivily %d and %d ", e, f);
 }
 else
 {
 printf("invalid");
 } 
}