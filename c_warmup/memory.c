#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 0;
    scanf("%d", &size);

    int *nums = malloc(size*sizeof(int));
    int evens = 0;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
        if(nums[i]%2 == 0) {
            evens++;
        }
        sum += nums[i];
    }

    printf("evens: %d\n", evens);
    printf("sum: %d\n", sum);

    free(nums);
    return 0;
}