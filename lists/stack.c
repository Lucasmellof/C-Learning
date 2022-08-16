#include <malloc.h>
#include <stdio.h>

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 16/08/2022
*/

typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *top;
    int size;
} Stack;

void pop(Stack *stack, int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = stack->top;
    stack->top = node;
}

Node *push(Stack *stack) {
    Node *node = NULL;
    if (stack->top) {
        node = stack->top;
        stack->top = node->next;
    }
    return node;
}

void print(Node *node) {
    if (node) {
        printf("%d\n", node->value);
        print(node->next);
    }
}

int main() {
    int option, value;
    Node *node;
    Stack stack;
    stack.size = 0;
    stack.top = NULL;

    do {
        printf("1 - Pop value to Stack\n2 - Push value from Stack\n3 - Print Stack\n4 - Leave\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Value to be popped: ");
                scanf("%d", &value);
                pop(&stack, value);
                break;
            case 2:
                node = push(&stack);
                if (node) {
                    printf("Pushed value: %d\n", node->value);
                }
                break;
            case 3:
                printf("\nStack: \n");
                print(stack.top);
                break;
            case 4:
                printf("Bye bye\n");
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while (option != 4);
    return 0;

}