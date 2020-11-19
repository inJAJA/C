#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 20;
    int *aa;

    aa = &a;

    printf("%d\n", a);     // 20
    printf("%d\n", *aa);   // 20
    printf("%d\n", aa);    // -156383500


    printf("%p\n", a);     // 0x14
    printf("%p\n", aa);    // 0x7ffc9bf48694 (포인터 aa의 주소 )
    printf("%p\n", *aa);   // 0x14           (포인터 aa가 가리키는 주소)



    // data구조

    // |    data    |
    // |    data    |
    // |    heap    |  : workspace
    // |    stack   |  : 휘발성, 모든 변수는 stack에 쌓인다.

    int *b = malloc(20);    // heap에서 20 byte만큼을 할당해 준다. 첫번째 주소를 *a에 넣어준다.
    malloc(20);             //  memory를 할당만해주고 접근하여 사용할 수가 없다.

    printf("%p\n", b);      // 0x5578f9618260 : 메모리 주소, 실행할 때 마다 달라짐 (동적 메모리)

    free(b);                // 사용을 다 한 후에는 free(메모리 해제)를 해줘야 한다. 안그럼 계속 잡고 있음



    int *c = (int*)malloc(5 *sizeof(int));  // 20 (5*4)byte 만큼의 메모리 할당
                                            // (int*) : 해당 메모리에 int형을 넣겠다.


    printf("%p\n", c);      // 포인터 c에 담겨있는 겂반환 -> 포인터이기 때문에 주소겂
    printf("%d\n", *c);     // 포인터 c에 담겨있는 주소가 가리키는 겂 반환 
    
    *c = 3;
    printf("%d\n", *c);     // 3


    // malloc : heep의 주소를 할당해준다.
    // calloc : heep의 주소를 할당해주고, 초기값을 0으로 초기화해준다.


    // *a : malloc으로 할당받은 주소에 접근할 수 있도록 (malloc의)첫번째 주소를 넣어준다.
    //    : 포인터에 넣지 않으면 malloc으로 할당받은 주소에 접근할 수 없다(메모리 사용 불가)
    //   
    // 
}
