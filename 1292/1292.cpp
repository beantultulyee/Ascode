#include<stdio.h>
 
int main(void)
{
    int T;
    int student, num[1000] = {0};
 
    scanf("%d", &T);
    while (T--)
    {
        float sum = 0;
        int sum2 = 0;
         
        scanf("%d", &student);
        for(int i = 0; i < student; i++)
        {
             scanf("%d", &num[i]);
 
            sum += num[i];
        }
 
        for(int i = 0; i < student; i++)
        {
            if(sum / student < num[i])
            {
                sum2++;
            }
        }
 
        printf("%d from total %d\n", sum2, student);
    }
     
    return 0;
}