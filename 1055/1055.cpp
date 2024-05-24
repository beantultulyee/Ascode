#include<stdio.h>

int main(void){

int T, a;
	
	scanf("%d", &T);
	
	while(T--){
		
		scanf("%d" ,&a);

		for(int x = 0; x < a; x++){
			for(int y = 0; y <= x; y++)
			{
				printf("*");
			}
			printf("\n");
		}
    }

	return 0;
}
