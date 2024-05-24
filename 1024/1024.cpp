#include<stdio.h>

int main(void){

    float x1, x2, x3, x4, x5, x6, x7, sum;

    scanf("%f %f %f %f %f %f %f", &x1, &x2, &x3, &x4, &x5, &x6, &x7);

    sum = (x1 + x2 + x3 + x4 + x5 + x6 + x7) /7;


    printf("%.2f", sum);

return 0;
}