#include<stdio.h>

int main(void){

    int T;

    scanf("%d", &T);

    while (T--)
    {
        int n, day = 0;

        scanf("%d", &n);

        while(n != 1){

            if(n % 2 == 0){
                n = n / 2;
                day++;
            }
            else{
                n = n * 3 + 1;
                day++;
            }
        }
        printf("%d\n", day);
    }
    
}