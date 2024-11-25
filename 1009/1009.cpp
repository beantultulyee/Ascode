#include<stdio.h>

int main(void)
{
    int T;
    char lan;
    
    scanf("%d", &T);
    getchar();
    
    for(int i = 0; i < T; i++)
    {

        scanf("%c", &lan);
        getchar();

        if(lan >= 'A' && lan <= 'Z')
        {
            printf("%c\n", lan + 32);
        }
        else if(lan >= 'a' && lan <= 'z')
        {
            printf("%c\n", lan - 32);
        }
    }
    

    return 0;
}