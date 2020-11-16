#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = false;         // 논리 변수에 0(false)로 바뀌어 저장됨
    bool b = 25;            // 논리 변수에 1(ture)로 바뀌어 저장됨 : 0 이외의 수는 전부 1(true)로 인식

    printf( "%d %d \n", a, 0);
    printf( "%d %d \n", b, true);
}
