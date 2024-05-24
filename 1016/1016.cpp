#include<stdio.h>

int main(void){

    float km, time, sum;

    scanf("%f %f", &km, &time);

    sum = km * time;

    printf("%.3f %.3f %.2f", km, time, sum);

return 0;   
}