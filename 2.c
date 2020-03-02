#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void insert_into_linked_list(node **head, int put_value) {
    node *new_node = calloc(1, sizeof(node));
    (*head)->next = new_node;
}

void print_all_elemets_from_linked_list(node *head) {
    node *temp = head;
    while(temp != NULL) {
        printf("%p val=%d\n", temp, temp->value);
        temp = temp->next;
    }
}

int main() {

    node *head;
    head = calloc(1, sizeof(node));
    head->value = 5;

    insert_into_linked_list(&head, 6);

    print_all_elemets_from_linked_list(head);

    return 0;
}
