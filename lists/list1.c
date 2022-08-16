#include <math.h>
#include <stdio.h>
#include <malloc.h>

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 15/08/2022
*/

typedef struct Node {
    int value;
    struct Node *nextElement;
} Node;

typedef struct {
    Node *start, *end;
    int size;
} List;

void addStart(List *list, int value) {
    Node *new = (Node *) malloc(sizeof(Node));
    new->value = value;

    if (list->start == NULL) {
        // LIST IS EMPTY
        new->nextElement = NULL;
        list->start = new;
        list->end = new;
    } else {
        new->nextElement = list->start;
        list->start = new;
    }
    list->size++;
}

void addEnd(List *list, int value) {
    Node *new = (Node *) malloc(sizeof(Node));
    new->value = value;
    new->nextElement = NULL;

    if (list->start == NULL) {
        // LIST IS EMPTY
        new->nextElement = NULL;
        list->start = new;
        list->end = new;
    } else {
        list->end->nextElement = new;
        list->end = new;
    }
    list->size++;
}

void print(List *list) {
    Node *start = list->start;
    printf("List size is: %d\n", list->size);
    while (start != NULL) {
        printf("%d \n", start->value);
        start = start->nextElement;
    }
    printf("\n");
}

/*
 * Will return 1 if element was removed
 */
int removeElement(List *list, int value) {
    Node *start = list->start;
    Node *removeNode = NULL;

    if (start != NULL && list->start->value == value) {
        // Remove first element
        removeNode = list->start;
        list->start = removeNode->nextElement;

        if (list->start == NULL) {// If next value is null end should be too
            list->end = NULL;
        }
    } else { // Here we will find the node with the same value
        while (start != NULL && start->nextElement != NULL && start->nextElement->value != value) {
            start = start->nextElement;
        }
        if (start != NULL && start->nextElement != NULL) {
            removeNode = start->nextElement;
            start->nextElement = removeNode->nextElement;

            if (start->nextElement == NULL) { // Last element is null
                list->end = start;
            }
        }
    }
    if (removeNode) { // Finally we will "remove" the node.
        free(removeNode);
        list->size--;
        return 1;
    }
    return 0;
}

int main() {
    List lista; // criação de 3 listas
    int option, value;

    // inicialização das listas
    lista.start = NULL;
    lista.end = NULL;
    lista.size = 0;

    do { // menu de opções
        printf("1 - Insert on the start\n2 - Insert on the end\n3 - Print List\n4 - Remove element from the list\n5 - Leave\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Type the value that will be inserted: ");
                scanf("%d", &value);
                addStart(&lista, value);
                break;
            case 2:
                printf("Type the value that will be inserted: ");
                scanf("%d", &value);
                addEnd(&lista, value);
                break;
            case 3:
                printf("\nList: \n");
                print(&lista);
                break;
            case 4:
                printf("Type the value that will be removed: ");
                scanf("%d", &value);
                removeElement(&lista, value);
                break;
            case 5:
                printf("Bye bye\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while (option != 5);

}


