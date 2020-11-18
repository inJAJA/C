#include <stdio.h>

int main()
{
    printf("\n");
    printf("Hello, World~1\n");     // Hello, World~1
    printf("Hello, World~%d", 2);   // Hello, World~2


// 제어문자

//  \n : 줄바꿈
//  \t : 수평 탭(tab)키
//  \v : 수직 탭(tab)키
//  \\ : 백슬래시(\)
//  \' : 작은 따옴표
//  \" : 큰 따옴표
//  \b : 백스페이스
//  \f : 폼피드
//  \r : 캐리지 리턴
//  \a : 경고음

//-------------------------
// 서식 지정자 종류

//  %c : 단일 문자
//  %s : 문자열

//  %d : 부호있는 10진 정수 
//  = %i
//  %f : 부호있는 10진 실수 
//  %o : 부호없는 8진 정수  
//  %u : 부호없는 10진 정수 

//  %x : 부호없는 16진 정수(소문자)
//  %X : 부호없는 16진 정수(대문자)

//  %e : e표기법에 의한 실수
//  %E : E표기법에 의한 실수

//  %g : 값에 따라서 %f, %e중 하나를 선택
//  %G : 값에 따라서 %f, %e중 하나를 선택
//  %% : % 기호 출력

//-------------------------
// 서식 지정자의 쓰임

//  %d : char, short, int
//  %ld : long
//  %lld : long long
//  %u : unsigned int
//  %o : unsigned int
//  %x, %X : float, double
//  %f : float
//  %lf :log double, double
//  %c : char, short, int
//  %s : char*(문자열)
//  %p : void(주소값)


    int a = 365;
    float b = 3.14;

    printf("%5d \t", a);
    printf("%3.1f \n", b);  //  3 = 오른쪽 정렬, .1 = 소수 둘째자리에서 반올림 하여 첫째 자리 까지만 출력하라


    int c = 1;
    printf("        1번만 출력하라\n");             
    printf("%9d번만 출력하라", c); printf("\n");    // 9칸 만큼의 공간을 확보한 후 오른쪽 정렬 상태로 a출력
    printf("\t%.0f번만 출력하라\n", 1.23);          // %.0f = 실수형 상수를 출력, 소수 첫째 자리에서 반올림이 발생

}
