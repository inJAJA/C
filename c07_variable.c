#include <stdio.h>

int main()
{
    int a, a1, 1a;
    int _a, __a, ___;
    int if;


// 식별자 : 변수나 함수 등의 이름 ex) int a; -> 식별자 = a
//       : 식별자는 알파벳, 아라비아 숫자, 특수기호 '_'의 조합으로 만들 수 있다.
//       : 변수 이름(식별자)은 알파벳 대소문자를 구분하며, 첫 글자에는 숫자를 사용할 수 없다.

// 예약어 : 식별자로 사용할 수 없는 단어들(연산자, 라이브러리 함수 자료형 등), 프로그래밍 언어 운영체제의 종류에 따라 다를 수 있음
//       ex) auto, do, goto , if, break, double, sized, void, 
//           case, else, int, static, char, long, while, const, 
//           extem, register, continue, switch, float, retum, for, short, 
//           union, default, unsigned, volatile


// 복습
    int __, a = 3;
    char b ='A';
    __ = a + 6;

    printf("%d\n", __);     // 9
    printf("%c\n", b);      // A
    printf("%d\n", b);      // 65
   
}