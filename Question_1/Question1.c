#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    FIB,
    VAL
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
    struct Node *left;
    struct Node *right;
} Node;

#define MAXN 100
int fib[MAXN];

// function to create a new node
Node* makeFunc(TypeTag type) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->type = type;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// function to store value of node
Node* makeValue(int value) {
    Node *newNode = makeFunc(VAL);
    newNode->value = value;
    return newNode;
}

// fibonacci function
int fibonacci(int n) {
    int fib[n+2];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

// function to calculate the value of a node
int calc(Node* node) {
    switch (node->type){
        case ADD:
            return calc(node->left) + calc(node->right);
        case SUB:
            return calc(node->left) - calc(node->right);
        case MUL:
            return calc(node->left) * calc(node->right);
        case DIV:
            return calc(node->left) / calc(node->right);
        case FIB:
            return fibonacci(calc(node->left));
        case VAL:
            return node->value;
        default:
                printf("Invalid node type %d\n", node->type);
                exit(1);
    }
}


int main() {
    for (int i = 0; i < MAXN; i++) {
        fib[i] = -1;
    }
    // Addition
    Node *add = makeFunc(ADD);
    add->left = makeValue(10);
    add->right = makeValue(6);
    // Multiplication
    Node *mul = makeFunc(MUL);
    mul->left = makeValue(5);
    mul->right = makeValue(4);
    // Subtraction
    Node *sub = makeFunc(SUB);
    sub->left = makeValue(calc(add));
    sub->right = makeValue(calc(mul));
    // Fibonacci
    Node *fibo = makeFunc(FIB);
    fibo->left = makeValue(abs(calc(sub))-1);
    fibo->value = fibonacci(calc(fibo->left));

    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo : %d\n", calc(fibo));
    return 0;
}
