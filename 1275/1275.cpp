#include<stdio.h>

int main(void){

    int age, x ;

    scanf("%d",&age);

    for(int i = 0; i < age; i++)
    {
		for(int j = 0; j < i; j++)
		{
			printf(" ");
		}

		for(int j = 0; j < (age - i) * 2 - 1; j++)
		{
			printf("@");
		}
	    printf("\n");
	}

        for(int i = 0; i < age * 2 - 1 ; i++)
        {
            for(int j = 0; j < age * 2 - 1; j++)
            {
                printf("@");
            }
        printf("\n");
        }

    return 0;
}