#include<stdio.h>

int main(void){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (b*b - 4*a*c) > 0 ? 1 : 0);
    
return 0;
}