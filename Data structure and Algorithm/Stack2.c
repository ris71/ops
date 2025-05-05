#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the stack

int stack[MAX];  // Array to hold stack elements
int top = -1;    // Initialize stack as empty

void push(int value);
void display();
int isEmpty();
int isFull();

int main()
{
    int value;
                //Push operation
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value); //push function calling

    display();

    return 0;
}

// Function to push an element onto the stack
void push(int value)
{
    if (isFull())
      {
        printf("Stack Overflow! Cannot push %d\n", value);
      }
     else
      {
        stack[++top] = value;
        printf("Pushed %d onto the stack\n", value);
      }
}

// Function to check if the stack is full
int isFull()
{
    return top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty()
{
    return top == -1;
}

// Function to display elements in the stack
void display()
{
    if (isEmpty())
     {
        printf("Stack is empty! Nothing to display\n");
     }
    else
     {
        printf("Stack elements from top to bottom:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
     }
}


