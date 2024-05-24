#include<stdio.h>

int main(void){

double X, Y, Z;

scanf("%lf", &X);

scanf("%lf", &Y);

Z = X * Y / 2;

printf("%.6f, %.6f, %.6f" , X, Y, Z);

return 0;
}