// create a linked list of i nodes and insert n no of nodes at the beginning of a linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newnode;
    int i, n;
    for (i = 1; i <= 5; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("\nHow many nodes to insert at beginning? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for new node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;
    }
    printf("\nLinked List after insertion:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}