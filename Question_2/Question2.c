#include <stdio.h>
#include "methods.h"

int main(){
	int n;
	printf("Enter Value n:  ");
	scanf("%d", &n);
	
	// Method 1: Recursive Method
	printf("Method 1: Recursive Method:  %d \n", Recursive_fib(n));
	printf("----------------------------------\n");
	
	// Method 2: Dynamic Programming Method
	printf("Method 2: Dynamic Programming Method:  %d \n", DP_fib(n));
	printf("----------------------------------\n");
	
	// Method 3: loop Method
	printf("Method 2: loop Method:  %d \n", loop_fib(n));
	printf("----------------------------------\n");
	
	// Method 4: Math Method using Bient's formula: Fn = {[(√5 + 1)/2] ^ n} / √5
	printf("Method 4: Mathematical formula Method:  %d \n", Math_fib(n));

}
