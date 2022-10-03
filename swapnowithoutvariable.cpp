#include <stdio.h>
int main()
{
int var1, var2;
printf("Enter two integersn");
scanf("%d%d", &var1, &var2);
printf("Before SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
var1 = var1 + var2;
var2 = var1 - var2;
var1 = var1 - var2;
printf("After SwappingnFirst variable = %dnSecond variable = %dn", var1, var2);
return 0;
}2
