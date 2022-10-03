#include <stdio.h>
#include <math.h>
void main()
{
    float slope, intercept;
    float x1, y1, x2, y2;
    float dx, dy;
    printf("Program to find the equation of a line given two end points\n");
    printf("Enter X1: ");
	scanf("%f", &x1);
    printf("Enter Y1: ");
    scanf("%f", &y1);
    printf("Enter X2: ");
    scanf("%f", &x2);
    printf("Enter Y2: ");
    scanf("%f", &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    slope = dy / dx;
    // y = mx + c
    // intercept c = y - mx
    intercept = y1 - slope * x1; // which is same as y2 - slope * x2
    printf("Equation of the line with end points (%.2f, %.2f) and (%.2f, %.2f) : Y = %.2fX %c %.2f\n", x1, y1, x2, y2, slope, (intercept < 0) ? ' ' : '+',  intercept);

}