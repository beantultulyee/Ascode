#include<stdio.h>

int main(void){

    int T;

    scanf("%d", &T);


    while(T--){
        int a, b;

        scanf("%d %d", &a, &b);

        if('A' <= a && a <= 'Z' && 'A' <= b && b <= 'Z'){
            printf("%c%c\n",a+32, b+32);
        }
        else if('A' <= a && a <= 'Z' && 'a' <= b && 'z' >= b){
            printf("%c%c\n", a, b);
        }
        
        else if('A' <= b && b <= 'Z' && 'a' <= a && 'z' >= a){
            printf("%c%c\n", a, b);
        }

        else
            printf("No Alphabet!\n");
    }
return 0;
}
