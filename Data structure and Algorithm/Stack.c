#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push();
void pop();
void peek();
void display();

int main() {
    int choice;
    while (1) {
        printf("\nStack Operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            return 0;

            default:
            printf("Invalid Choice, please try again.\n");

        }

    }
    return 0;
}

void push() {
    int value;
    if (top == MAX -1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    }
    else {
        printf("Enter the value to be pushed: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
    }
    else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty. No top element to display.\n");
    }
    else {
        printf("Top element is %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    }
    else {
        printf("Stack elements:\n");
        for (int i = top; i>=0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
