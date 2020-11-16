#include <stdio.h>
#include <stdlib.h>

// default include 확인 :
// $ ls /usr/include

// include path 지정 (default + custom ):
// $ gcc c01_hello.c -I.       : -I경로  ex) -I. : 현재 directory내에 있는 것
//                             : 여러개 하는 법 : -I. -I.. -I...

int main(int argc, char* argv[])    // input을 줄 수 있게 해줌
{                                   // argc, argv는 임이의 이름임 ( 변경 가능 )
    /* 
    int a[200000000000]; // stack memory부족

    a[1] = 1;
    printf("%d", a[1]); 

    // Segmentation fault (core dumped)
    // Segmentation fault : memory 침범
    // core dumped : 그 당시의 cpu 기록(Segmentation fault당시에 cpu가 뭐하고 있었는지 볼 수 있음 ) 

    */
 
    if (argc == 1){ // 홀로 있음
        fputs("에러! 옵션을 입력하지 않으셨군요...\n", stderr); // default file = stdin, stdout, stderr // fputs : file 쓰기
        exit(1);    // 운영체제한테 return(알려주는 것)
    }

    printf("%d 개의 옵션을 입력하셨군요\n\n", argc -1); 
    // $ c02 aaa bbb ccc
    // argc = 4
    // argv = c02, aaa, bbb, ccc
    

    for (int i = 1; i < argc; i++){             // i : for문 안에서만 사용되고 끝나면 사라짐 (stack에 쌓임)
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    // printf("%d", i);

    int i = 1;
    for (i = 1; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    printf("%d", i);

    for (int i = 1; i < argc; i++){             // 위의 i 와 for문의 i와는 전혀 다르다.
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    
    printf("%d", i);

    return 0;
}
