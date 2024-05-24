#include<stdio.h>

int main(void){

int T, x;

scanf("%d",&T);

while (T--)
{
    scanf("%d",&x);

    for(int i = 0; i < x; i++){
        for(int j = 0; j <= i; j++){
            if(i == 0 || j == 0 || i == x - 1|| j == i)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}
return 0;
}