#include<stdio.h>

int main(void){

int money;
int x, y, z;

scanf("%d",&money);

x = money / 500;
y = (money % 500) / 100;
z = (money % 100) / 10;


printf("%d\n%d\n%d ", x, y, z);


return 0;
}