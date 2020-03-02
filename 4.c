#include <stdio.h>
#include <stdlib.h>

/**
* Stack implementation.
*/

typedef struct node {
    int value;
    struct node* next;
} node;

void push(node **head, int value) {
    node *new_node = malloc(sizeof(node));
    
}

int pop(node **head) {
    int value = -1;
    if(*head == NULL)
        return value;

    node *tmp = *head;
    while(tmp->next != NULL) {
        tmp=tmp->next;
    }
    value=tmp->value;
    if (tmp != NULL) {
        free(tmp);
    }
    return value;
}

int main() {
    node *head = NULL;
    push(&head, 1);
    push(&head, 2);

    printf("elem = %d", pop(&head));
    printf("elem = %d", pop(&head));
    
    return 0;
}
