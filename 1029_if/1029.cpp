#include<stdio.h>

int main(void){

    int day, hour, minute, second;

    scanf("%d", &second);

    day = second / 86400;

    second = second % 86400;

    hour = second / 3600;

    second = second % 3600;

    minute = second / 60;

    second = second % 60;

    printf("%d %d %d %d", day, hour, minute, second);

return 0;
}