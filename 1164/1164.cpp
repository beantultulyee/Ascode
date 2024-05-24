#include<stdio.h>

int main(void){


    while(1){
        
        int mon = 0, day = 0, price,pay = 5000;
        
        scanf("%d",&price);

        if(price == 0)
        {
            break;
        }

        while(mon < price){
            mon += pay;
            pay += 100;
            day++;
        }
        printf("%d\n", day);
    }

    return 0;
}