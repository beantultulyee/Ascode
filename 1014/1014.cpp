#include<stdio.h>

int main(void){

    int x1, x2, x3, x4, x5, x6, x7;
    int sum;

    scanf("%d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7);

    sum = (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 7;

    printf("%d", sum);


return 0;
}