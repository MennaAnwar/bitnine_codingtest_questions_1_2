# Question 2:

* Implement the following piecewise recurrence relation in the 3 different ways.
* Explain the differences (advantages, disadvantages) between the 3.
* Must be written in C
```
The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2.
Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to
write the function(s).
```
## Methods used for implementation:
This problem is implemented using  4 methods:
* [Method 1: Recursive Method](https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2/blob/main/Question_2/method1.c)
* [Method 2: Dynamic Programming Method](https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2/blob/main/Question_2/method2.c)
* [Method 3: loop Method](https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2/blob/main/Question_2/method3.c)
* [Method 4: Math Method using Bient's formula: Fn = {[(√5 + 1)/2] ^ n} / √5](https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2/blob/main/Question_2/method4.c)

## Differences, Advantages and Disadvantages between Methods:
### Recursive Method
```
int Recursive_fib(int n){
	if (n <= 1)
		return (n);
	return (Recursive_fib(n - 1) + Recursive_fib(n - 2));
}
```
This method is simple to implement and easy to understand. However, it can be inefficient for large values of n, as it requires the 
function to be called recursively.

#### Advantages:

* Simple to implement and easy to understand
* Can be used to compute the value of F(n) for any value of n
#### Disadvantages:

* Can be inefficient for large values of n
* Can be difficult to optimize for performance

### loop Method

```
int loop_fib (int n){
	int a = 0, b = 1, c, i;
  	if( n == 0)
		return a;
  	for (i = 2; i <= n; i++)
  	{
		c = a + b;
     		a = b;
     		b = c;
  	}
  	return b;
}
```

This method is more efficient, as it does not require any recursion. However, it can be the most difficult to implement and understand.

#### Advantages:

* Most efficient of the three methods
* Can be used to compute the value of F(n) for any value of n
#### Disadvantages:

* Most difficult to implement and understand
* Can be difficult to optimize for performance

### Dynamic Programming Method
```
int DP_fib (int n){
	    int fib[n+2];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}
```
We can avoid the repeated work done in method 1 by storing the Fibonacci numbers calculated so far, 
using a dynamic programming approach to store the values of F(n) in a table. 
This can be more efficient than the loop method, as it does not require the values of F(n) to be recomputed for each value of n.

#### Advantages:

* More efficient than the loop method
* Can be used to compute the value of F(n) for any value of n
#### Disadvantages:

* More difficult to implement and understand
* Can be difficult to update the table if the values of F(n) change

### Math Method using Bient's formula: Fn = {[(√5 + 1)/2] ^ n} / √5:
```
int Math_fib (int n){
	double phi = (1 + sqrt(5)) / 2;
	return round(pow(phi, n) / sqrt(5)); ;
}
```

In this method, we directly implement the formula for the nth term in the Fibonacci series. 
It is the most efficient of all the methods, as it does not require any recursion, loops, or dynamic programming. 
However, it can be the most difficult to implement and understand.

#### Advantages:

* Most efficient of all the methods
* Can be used to compute the value of F(n) for any value of n
#### Disadvantages:

* Most difficult to implement and understand
* Can be difficult to optimize for performance

## Source Code:
Check source code at: [Question2.c](https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2/blob/main/Question_2/Question1.c)

##  how to compile and run the source code:
A makefile is create to easily compile the source code.
1. set directory to Question_2 :  ``` cd Question_2 ```
2. run ``` make ``` command
3. run ``` ./question2 ```
