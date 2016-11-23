#include <stdio.h>
#include <limits.h>

int main() {
        printf("Size of char is %d\n", CHAR_BIT);
        printf("Size of char min %d\n", CHAR_MIN);
        printf("Size of char max %d\n", CHAR_MAX);
        printf("Size of int min %d\n", INT_MIN);
        printf("Size of int max %d\n", INT_MAX);
        printf("Size of long min %ld\n", LONG_MIN);
        printf("Size of long max %ld\n", LONG_MAX);
        printf("Size of short min %d\n", SHRT_MIN);
        printf("Size of short max %d\n", SHRT_MAX);
        printf("Size of unsigned char %d\n", UCHAR_MAX);
        printf("Size of unsigned int %ld\n", UINT_MAX);
        printf("Size of unsigned long %lu\n", ULONG_MAX);
        printf("Size of unsigned short %d\n", USHRT_MAX);
        return 0;
}
