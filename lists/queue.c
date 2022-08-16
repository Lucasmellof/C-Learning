#include <malloc.h>
#include <stdio.h>

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 16/08/2022
*/

typedef struct node {
    int value;
    struct node *next;
} Node;

void enqueue(Node **queue, int value) {
    Node *aux, *new = malloc(sizeof(Node));

    if (new) {
        new->value = value;
        new->next = NULL;
        if (*queue == NULL) {
            *queue = new;
        } else {
            aux = *queue;
            while (aux->next) aux = aux->next;
            aux->next = new;
        }
    } else printf("Could not allocate on memory.\n");
}

Node *dequeue(Node **queue) {
    Node *removed = NULL;
    if (*queue) {
        removed = *queue;
        *queue = removed->next;
    } else printf("Queue is empty.\n");
    return removed;
}

void print(Node *queue) {
    printf("Queue: \n");
    while (queue) {
        printf("%d, ", queue->value);
        queue = queue->next;
    }
}

int main() {
    Node *removed, *queue = NULL;
    int option, value;

    do {
        printf("1 - Enqueue value to Queue\n2 - Dequeue value from Queue\n3 - Print Queue\n4 - Leave\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Value to be enqueued: ");
                scanf("%d", &value);
                enqueue(&queue, value);
                break;
            case 2:
                removed = dequeue(&queue);
                if (removed) {
                    printf("Dequeued: %d\n", removed->value);
                    free(removed);
                }
                break;
            case 3:
                printf("\nQueue: \n");
                print(queue);
                printf("\n");
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