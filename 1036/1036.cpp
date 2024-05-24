#include<stdio.h>

int main(void){

    int x, y, z;
    double sum;

    printf("dside : ");
    scanf("%d",&x);

    printf(", uside : ");
    scanf("%d",&y);

    printf(", height : ");
    scanf("%d",&z);

    sum = (x+y) * z / 2.0;

    printf("%.1lf" ,sum);

return 0;
}