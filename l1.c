#include <stdio.h>
int main () {
	int nums[] ={1,2,3,4};
	int n = 4;
	int i;
	int runningSum[4];  
	
	runningSum[0] = nums[0];

	for (i = 1; i < n; i++) {
		runningSum[i] = runningSum[i - 1] + nums[i];
	}
	
	for (i = 0; i < n; i++) {
    printf("%d", runningSum[i]);   
    if (i < n - 1) 
	printf("   ");  
}
	
	return 0;
}
