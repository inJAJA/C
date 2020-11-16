#include <stdio.h>

int main()
{
    char a[5] = {'K', 'O', 'R', 'E', 'A', };
    printf("%c\n", a[1]);   // O
    printf("%s\n", a);      // KOREA�U : 'K'에서 시작하지만 끝을 알 수 없기 때문에 다른 문자들이 함께 출력됌
                            // string으로 표현을 할 때 어디까지가 글자인지 끝을 표현해줘야한다. (null문자 = '\0', 0)


    char aa[6] = {'K', 'O', 'R', 'E', 'A', };    // 초기화 : 초기화를 안한 부분에는 자종으로 0이 들어간다
    printf("%s\n", aa);     // KOREA
    printf("%p\n", aa);     // 0x7ffd5205e140 : 'K'의 pointer(주소)

    printf("%s\n", aa+1);   // OREA           : 해당 주소부터 string으로 출력
    printf("%p\n", aa+1);   // 0x7ffd5205e141 : 'O'의 pointer(주소)

    char aaa[6] = {'K', 'O', 0, 'E', 'A', };    // 0을 만나면 무조건 종료
    printf("%s\n", aaa);      // KO
    printf("%c\n", *aaa);     // K    : *aaa의 주소에 들어있는 내용
    printf("%c\n", *(aaa+1)); // O
    printf("%c\n", *(aaa+3)); // E

    // aaa = aaa + 1 ; // 주소값을 바꾸는 것은 불가능함

    char* paaa = aaa;   // 주소값 복사, 초기화
    paaa = paaa + 3;
    printf("paa : %s\n", paaa); // paa : EA

    paaa[-1] = 'R';            // paaa로부터 왼ᄍᆃᆨ으로 한칸 옆 paaa[0] = 'E' 
    printf("aaa : %s\n", aaa); // aaa : KOREA

    char b[6] = {'K', 'O', 'R', 'E', 'A', '\0'};
    printf("%s\n", b);      // KOREA : '\0'(null문자 = 종료문자)가 포함되어 정확한 결과가 출력됌

    char c[6] = "KOREA";
    printf("%s\n", c);      // KOREA : null문작가 자동적으로 입력 됌
                            // string으로 표현시 무조건 뒤에 0이 붙는다, 고로 그 자리까지 고려해서 memory를 할당해야함 c[5] -> c[6]
}
