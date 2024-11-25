#include <stdio.h>

int main(void) {
    char str[100];
    
    // fgets 사용 예: 최대 99개의 문자를 읽고, null 문자(\0)를 자동으로 추가
    fgets(str, 100, stdin);  // 사용자가 입력한 문자열을 str에 저장
    
    // fgets는 개행 문자를 포함하여 입력 받기 때문에 개행 문자를 처리해줘야 할 때가 있다.
    // 예: 입력 후 개행 문자를 제거하려면 아래처럼 처리할 수 있다.
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';  // 개행 문자를 문자열 종료 문자로 변경
            break;
        }
        i++;
    }
    
    printf("입력한 문자열: %s\n", str);
    
    return 0;
}
