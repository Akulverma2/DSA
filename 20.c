// create a linked list of 10 nodes
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {                                                        
    struct node *head = NULL, *temp, *newnode;
    int i;

    for (i = 1; i <= 10; i++) {
        newnode = malloc(sizeof(struct node));

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
    // Display the linked list
    printf("\nLinked List:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}