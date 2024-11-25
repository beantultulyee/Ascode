#include<stdio.h>

int main(void){

    int t;
    int h;
    char a = 'A';
    
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &h);

        for(int i = h; i >= 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                printf("%c", a);
            }
            printf("\n");

            if(i == 0)
            {
                a += 1;
            }
        }

    }

    return 0;
}
//코드 문제점 그거머시가ㅑㄴ