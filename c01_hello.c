#include <stdio.h>

int main()
{
    printf("hello\n");

    return 0;
}

// terminal에서 compile -> link
// $ gcc -c c01_hello.c       : compile
// $ gcc -o c01 c01_hello.o  : link

// 한꺼번에 하는 법
// $ gcc -o c01 c01_hello.c  : compile & link

// $ gcc c01_hello.c
// => defult name = a.out
