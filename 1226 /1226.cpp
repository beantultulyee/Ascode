#include<stdio.h>

int main(void){

    int x;

    scanf("%d",&x);

    if( x == 100)
        printf("A++");
    else if(97 <= x && x <= 99)
        printf("A+");
    else if(93 <= x && x <= 96)
        printf("A");
    else if(90 <= x && x <= 92)
        printf("A-");
    else if(87 <= x && x <= 89)
        printf("B+");
    else if(83 <= x && x <= 86)
        printf("B");
    else if(80 <= x && x <= 82)
        printf("B-");
    else if(77 <= x && x <= 79)
        printf("C+");
    else if(73 <= x && x <= 76)
        printf("C");
    else if(70 <= x && x <= 72)
        printf("C-");
    else if(67 <= x && x <= 69)
        printf("D+");
    else if(63 <= x && x <= 66)
        printf("D");
    else if(60 <= x && x <= 62)
        printf("D-");
    else
        printf("F");

    return 0;
}