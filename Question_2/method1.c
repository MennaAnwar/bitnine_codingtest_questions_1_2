#include "methods.h"

int Recursive_fib(int n){
	if (n <= 1)
		return (n);
	return (Recursive_fib(n - 1) + Recursive_fib(n - 2));
}
