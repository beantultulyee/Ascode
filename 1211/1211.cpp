#include<stdio.h>

int main(void){

    int T;

    scanf("%d",&T);

    while (T--)
    {
        int price, mon = 0, pay1 = 9000, pay2 = 11000, day = 0, work = 0;

        scanf("%d", &price);

        while(mon < price){
            switch (day % 7)
            {
            case 0:
                mon += pay1 * 5;
                work++;
                break;

            case 1:
                mon += pay1 * 4;
                work++;
                break;

            case 2:
                mon += pay1 * 6;
                work++;
                break;

            case 5:
                mon += pay2 * 6;
                work++;
                break;

            case 6:
                mon += pay2 * 8;   
                work++; 
                break;
            
            default:
                break;
            }
            day++;
        }
            printf("%d\n", work);
        }

        return 0;
    }