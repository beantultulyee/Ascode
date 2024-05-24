#include<stdio.h>

int main(void){

    int T;
    int a, b;
    
    scanf("%d", &T);

    while(T--){
        scanf("%d %d", &a, &b);
    
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++)
        {
            if(i == 0 || j == 0 || i == b - 1 || j == a - 1)
                printf("*");

            else
                printf(" ");
            }
             printf("\n");
         }
    }
    return 0;
}