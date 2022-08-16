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

void push(Stack *stack, int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = stack->top;
    stack->top = node;
}

Node *pop(Stack *stack) {
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
        printf("1 - Pushed value to Stack\n2 - Pop value from Stack\n3 - Print Stack\n4 - Leave\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Value to be pushed: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                node = pop(&stack);
                if (node) {
                    printf("Popped value: %d\n", node->value);
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