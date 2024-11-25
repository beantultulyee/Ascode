#include<stdio.h>
#include<math.h>

int main(void){

    int T;
    int a, b, c;
    double x, y, tmp, D;
    

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a == 0){
            printf("No quadratic\n");
        }

        else {

        D = (b * b) - (4 * a * c);

        if(D < 0){
            printf("Imaginary\n");
        }
        else if(D == 0){
            printf("%.3f\n", -b / (2.0 * a));
        }

        else{
            x = (-b + sqrt(D)) / (2.0 * a);
            y = (-b - sqrt(D)) / (2.0 * a);

            if(y > x){
                tmp = x;
                x = y;
                y = tmp;
            }

            printf("%.3f %.3f\n", x, y);
        }
        }
    }

    return 0;
}