#include<stdio.h>

int main(void) {

    int testCase;
    int a, b;

    scanf("%d", &testCase);
    
    while(testCase--){
        scanf("%d %d", &a, &b);
        
        for(int y = 0; y < b; y++){
            for(int x = 0; x < a; x++){
                printf("*");
            }
             printf("\n");
        }
    }
    return 0;
    }