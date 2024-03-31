#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int item) {
    if(top >= MAX-1) {
        printf("\nStack Overflow.");
    } else {
        stack[++top] = item;
        printf("\nInserted -> %d", item);
    }
}

void pop() {
    if(top < 0) {
        printf("\nStack Underflow");
    } else {
        printf("\nDeleted : %d", stack[top--]);
    }
}

void peek() {
    if(top < 0) {
        printf("\nStack is Empty");
    } else {
        printf("\nPeek Element : %d\n", stack[top]);
    }
}

int main() {
    // Push elements into the stack
    push(1);
    push(2);
    push(3);
    push(4);

    // Display top element of stack
    peek();

    // Delete top elements of stack
    pop();
    pop();

    // Display top element of stack
    peek();

    return 0;
}
