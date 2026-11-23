#include <stdio.h>

struct S {
    int i;
    char c;   
};

int main(void) {
    printf("sizeof(unsigned short) = %zu\n", sizeof(unsigned short));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long) = %zu\n", sizeof(long));
    printf("sizeof(short) = %zu\n", sizeof(short));
    printf("sizeof(struct S) = %zu\n", sizeof(struct S));
    return 0;
} 