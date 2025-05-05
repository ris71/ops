#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

typedef struct {
    int top;
    int data[MAX];
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (s->top < MAX - 1) {
        s->data[++(s->top)] = value;
    } else {
        printf("Stack overflow!\n");
        exit(1);
    }
}

int pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->data[(s->top)--];
    } else {
        printf("Stack underflow!\n");
        exit(1);
    }
}

int evaluatePostfix(char *expression) {
    Stack s;
    initStack(&s);

    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(&s, expression[i] - '0');
        } else if (expression[i] == ' ') {
            continue;
        } else {
            int val1 = pop(&s);
            int val2 = pop(&s);

            switch (expression[i]) {
                case '+':
                    push(&s, val2 + val1);
                    break;
                case '-':
                    push(&s, val2 - val1);
                    break;
                case '*':
                    push(&s, val2 * val1);
                    break;
                case '/':
                    if (val1 == 0) {
                        printf("Division by zero error!\n");
                        exit(1);
                    }
                    push(&s, val2 / val1);
                    break;
                default:
                    printf("Invalid operator encountered: %c\n", expression[i]);
                    exit(1);
            }
        }
    }

    return pop(&s);
}

int main() {
    char expression[MAX];

    printf("Enter a postfix expression (USE SPACES TO SEPARATE OPERANDS AND OPERATORS): ");
    fgets(expression, MAX, stdin);

    int result = evaluatePostfix(expression);
    printf("Result of Postfix Evaluation: %d\n", result);

    return 0;
}
