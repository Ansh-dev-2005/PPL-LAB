#include<stdio.h>
#include<math.h>
int main(){
	int ch;
	float area,l,b,c=3.14;

	printf("Enter which shape you want to calculate area \n 1.Parellelogram \n 2.Trapizium \n 3.Rhombus \n 4.Sphere \n 5.Eillipes\n");
	scanf(" %d", &ch);
	printf("Your choice is %d \n", ch); 
	switch(ch){
		case 1:
			printf("Enter Lenght and Breath ");
			scanf("%f%f",&l,&b);
			area=l*b;
			printf("Area of Parellelogram is: %f",area);
			break;
		case 2:
			printf("Enter length of parallel sides ");
			scanf("%f%f",&l,&b);
			area=l*b/2;
			printf("Area of Trapezium is: %f",area);
			break;
		case 3:
			printf("Enter length of diagonals ");
			scanf("%f%f",&l,&b);
			area=l*b/2;
			printf("Area of Rhombus is: %f",area);
			break;
		case 4:
			printf("Enter Radius ");
			scanf("%f",&l);
			area=4*c*l*l;
			printf("Area of Sphere is: %f",area);
			break;
		case 5:
			printf("Enter minor axis and major axis ");
			scanf("%f",&l,&b);
			area=c*l*b;
			printf("Area of Ellipse is: %f",area);
			break;
		default:
			printf("Enter correct valuse");
			goto main;
	}
	print("Do you want to continue Y/N");
	

	return 0;
}