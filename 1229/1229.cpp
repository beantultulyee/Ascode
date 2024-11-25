#include<stdio.h>

int main(void){
    int T;

    scanf("%d", &T);

    while(T--){
        long int n = 0, m = 0, sum = 0;

        scanf("%ld %ld", &n, &m);

        printf("%ld\n", (m - n + 1) * (m + n) / 2);
    }
    return 0;
}