#include<stdio.h>

int main(void)
{
    int pan[5][5] = {0}; //빙고판
    int N; //몇 개 지울지
    int ers[25] = {0}; //지울 수
    int col_sum = [0]; //열이 지워지는지
 
 //빙고판 입력받는 함수
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &pan[i][j]);
        }
    }

    scanf("%d", &N); //지울 수

//빙고판에서 지울 숫자 입력
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &ers[i]);
    }

//지우는 수와 빙고판 안의 수가 겹치면 0으로 바꾸기
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(ers[i] == pan[i][j])
            {
                pan[i][j] = {0};
            }
        }
    }

//몇 줄이 지워지는지 행/열/대긱선도 구해야함 모두 지워지면 12개
    
//행
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
        
        }
    }



    return 0;
}
   




/*
1. 빙고판 만드는 코드
2. 몇개지울지 for사용
3. 함수로 지우는 것 만들기

겹치는 것을 0으로 지우기 + 합을 구하여 0일시 빙고*/