#include<stdio.h>

int main(void){

    int T;

    scanf("%d", &T);

    while(T--){
        int price, pay1 = 8000, pay2 = 10000, won = 0, day = 0, n;

        scanf("%d", &price);

        while(price > won){

            n = day % 7 ;

            if(n <= 4){
                won += pay1 * 5;
            }

            else{
                won += pay2 * 8;
            }
            day++;
        }
        printf("%d\n", day);

    }
    return 0;
}