# Question 1:

Node is defined as follows :
```
typedef struct Node
{
TypeTag type;
} Node;
typedef enum TypeTag {
...
}
```
Using this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations (+, -, *, /) and conditions.
The fibonacci function should be implemented using Dynamic Programming.
```
main()
{
Node *add = (*makeFunc(ADD))(10, 6);
Node *mul = (*makeFunc(MUL))(5, 4);
Node *sub = (*makeFunc(SUB))(mul, add);
Node *fibo = (*makeFunc(SUB))(sub, NULL);
calc(add);
calc(mul);
calc(sub);
calc(fibo)
}
```
Output
```
add : 16
mul : 20
sub : -4
fibo : 2
```

## Source Code:
Check source code at: [Question1.c](https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2/blob/main/Question_1/Question1.c)

##  how to compile and run the source code:
A makefile is create to easily compile the source code.
1. clone this repo : ``` git clone https://github.com/MennaAnwar/bitnine_codingtest_questions_1_2.git ```
2. set directory to Question_1 :  ``` cd Question_1 ```
3. run ``` make ``` command
4. run ``` ./question1 ```
