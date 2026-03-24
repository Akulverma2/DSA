// insert node before a given node in a linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newnode;
    int i, key;
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
    printf("Insert before which value: ");
    scanf("%d", &key);
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter new data: ");
    scanf("%d", &newnode->data);
    if (head != NULL && head->data == key) {
        newnode->next = head;
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL && temp->next->data != key)
            temp = temp->next;

        if (temp->next != NULL) {
            newnode->next = temp->next;
            temp->next = newnode;
    }
}
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}