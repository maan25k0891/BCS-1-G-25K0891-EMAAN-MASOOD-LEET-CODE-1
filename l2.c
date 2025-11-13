#include <stdio.h>

int main() {
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n = 3;
    int size = 2 * n;
    int result[size];

    int i, j = 0;
    for (i = 0; i < n; i++) {
        result[j++] = nums[i];      
        result[j++] = nums[i + n];  
    }

    printf("Result: ");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

