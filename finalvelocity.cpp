
#include<stdio.h>
int main(){

 float u,t, a, v;

 printf("Enter the Value Of Initial Velocity  ");
 scanf("%f",&u);

 printf("Enter the Value Of Time  ");
 scanf("%f",&t);

 printf("Enter the Value Of acceleration  ");
 scanf("%f",&a);

 if( t > 0 ) 
 {
 v = ( u + ( a * t ) );
 printf("With the initial velocity %.2f, time %.2f and acceleration %.2f, \n The value of final velocity is %f m/s", u, t, a, v);
 }
 else
 {
 printf("Entered time is negative");
 } 
}