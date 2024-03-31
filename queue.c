#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;
int itemCount = 0;

void enqueue(int data) {
    if(rear == SIZE-1) {
        rear = -1;
    }

    queue[++rear] = data;
    itemCount++;
}

int dequeue() {
    int data = queue[front++];

    if(front == SIZE) {
        front = 0;
    }

    itemCount--;
    return data;
}

int main() {
    // Enqueue elements
    enqueue(3);
    enqueue(5);
    enqueue(9);
    enqueue(1);
    enqueue(12);

    // Dequeue elements
    int num = dequeue();

    printf("Dequeued: %d\n", num);
    printf("Dequeued: %d\n", num);

    return 0;
}
