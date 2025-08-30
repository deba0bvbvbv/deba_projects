#include <stdio.h>
#include <stdlib.h>

struct stack {
    int top;
    int size;
    int *arr;
};

int isFull(struct stack *s) {
    return (s->top == s->size - 1);
}

int isEmpty(struct stack *s) {
    return (s->top == -1);
}

void push(struct stack *s, int val) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    } else {
        s->top++;
        s->arr[s->top] = val;
        printf("%d pushed to the stack\n", val);
    }
}

void display(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int) * s->size);

    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);

    display(s);

    if (isFull(s)) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }
    free(s->arr);
    free(s);

    return 0;
}
