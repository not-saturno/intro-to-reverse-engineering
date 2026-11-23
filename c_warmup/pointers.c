#include <stdio.h>
#include <stdlib.h>

void sort_up(int *a, int *b, int *c) {
    int temp = 0;
    if (*a > *b) {
        temp = *b;
        *b = *a;
        *a = temp;
    }
    if (*b > *c) {
        temp = *c;
        *c = *b;
        *b = temp;
    }
    if (*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*a > *b) {
        temp = *b;
        *b = *a;
        *a = temp;
    }
}

int main(int argc, char *argv[]) {
    int nums[3] = {};
    for (int i = 0; i < 3; i++) {
        scanf("%d", &nums[i]);
    }
    sort_up(&nums[0], &nums[1], &nums[2]);
    printf("a=%d b=%d c=%d\n", nums[0], nums[1], nums[2]);
    return 0;
}