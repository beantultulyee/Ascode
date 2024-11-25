#include<stdio.h>

int main(void){

    int T;

    scanf("%d",&T);

    while(T--){
        int a, b, c, sum1;
        double sum2;

        scanf("%d %d %d",&a, &b, &c);

        switch (a)
        {
        case 0:
            printf("No quadratic\n");
            break;

        default:{

        sum1 = b * b - 4 * a * c;

            if(sum1 > 0){
                printf("Real\n");
            }

            else if(sum1 == 0){

                sum2 = -b / (2.0 * a);

                printf("%.3lf\n",sum2);
            }

            else {
                printf("Imaginary\n");
            }
        } 
    }
}

    return 0;
}