#include<stdio.h>

int main(void){

    int x, y;
    float sum;

    scanf("%d %d", &x, &y);

    sum = x * y / 2.0;

    printf("%.1f",sum);

return 0;
}