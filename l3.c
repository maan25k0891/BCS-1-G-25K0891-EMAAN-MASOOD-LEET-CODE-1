#include <stdio.h>

int main() {
    int nums[] = {4, 3, 2, 1};
    int n = 4;
    int i, j, temp;

    for (i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    
    printf("Result: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

