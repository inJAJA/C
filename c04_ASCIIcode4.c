#include <stdio.h>
int main()
{   
    // 논리적 오류
    int max = 2147483647;       // int형 : -2147483648 ~ 2147483647까지 표현 가능
    printf("%d\n", max);        // 2147483647
    
    max =max + 1;               // 오버플로 : 메모리 용량을 넘어서 들어가 생기는 오류
    printf("%d\n", max);        // -2147483648




    //ASCIIcode
    char a = 'A';
    char b = a + 1;
    printf("ASCII [%d] = %c \n", a, a); // A = 65(10진수)
    printf("ASCII [%d] = %c \n", b, b); // B = 66(10진수)
    return 0;

    // ASCIIcode
    // : 미국표준협회에서 개발한 것, 알파벳과 아라비아 숫자, 특수문자를 표현하는 2진수 코드
    // 숫자로 128개의 문자를 표현하며 저장될 떄는 숫자(0~127)로 변환되어 저장
}

