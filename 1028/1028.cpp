#include<stdio.h>

int main(void){

    int x, y, sum, z, q;
    scanf("%d %d %d %d", &x, &y, &z, &q);

    sum = (x * y) % (z + q);

    printf("%d" ,sum);

return 0;
}