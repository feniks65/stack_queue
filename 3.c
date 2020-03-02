#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void insert_into_linkedin_list(node **head, int value) {
    node *new_node = malloc(sizeof(node));
    new_node->next = NULL;
    new_node->value = value;
    if (*head == NULL) {
        *head = new_node;
    } else {
        node *tmp = *head;
        while(tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next=new_node;
    }
}

void print_all_nodes(node *head) {
    node *tmp = head;
    while(tmp != NULL) {
        printf("%p val=%d\n", tmp, tmp->value);
        tmp = tmp->next;
    }
}

int main() {
    node *head = NULL;

    insert_into_linkedin_list(&head, 1);
    insert_into_linkedin_list(&head, 2);
    insert_into_linkedin_list(&head, 3);

    print_all_nodes(head);


    return 0;
}
