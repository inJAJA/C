#include <stdio.h>

int main()
{
    int a = 30;
    float b = 3.14;
    char c = 'A';
    char d [6] = {'K', 'O', 'R', 'E', 'A', '\0'};

    printf("%d %f %c %s \n", a, b, c, d);   // 30 3.140000 A KOREA 

    // char = 1 byte = -128 ~ 127    // 맨 앞은 부호 : 0 = '+', 1 = '-'
    // short = 2 byte
    // int = 4 byte = long
    // long long = 8 byte
    
    // unsigned : 맨 앞의 부호를 +로 고정하고 모든 자리에 숫자를 넣어 사용한다.

    // unsigned = size_t = unsigned long long

    // half = 2 byte  // 정밀도 3~4개의 숫자가 정확함 
    // float = 4 byte // 맨 앞 부호 bit + 지수 bit + 숫자 bit (0.xxx) // 정밀도 : 얼마나 많은 숫자를 쓸 수 있는 지 ex) 3.1234567 = 0.0031234567 의 정밀도는 same ( 7~8개의 숫자가 정확함)
    // double = 8 byte 
}