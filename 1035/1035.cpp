#include<stdio.h>

int main(void){

    int id, x ;

    scanf("%d" ,&id);

    x = (id % 10000) / 100;

    printf("%d", x);

return 0;
}