#include<stdio.h>

int main(void){

    int T;

    scanf("%d",&T);

    while (T--)
    {
        int price, won = 63000, mon = 0, day = 0;

        scanf("%d",&price);

        while(mon < price){
            mon += won;
            day ++;

            if(day % 7 == 0 && day != 0){
                won += 1400;
            }
        }
        printf("%d\n",day);
    }
    return 0;
}