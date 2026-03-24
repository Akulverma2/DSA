#include <stdio.h>
#include <stdlib.h>
struct akul {
    int data;
    struct akul *prev;
    struct akul *next;
};
struct akul *head = NULL, *temp, *newnode;
int pos, i;
void insertatbeg() {
    newnode = malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL)
        head->prev = newnode;
    head = newnode;
}
void insertatend() {
    newnode = malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
    }
void insertatany() {
    newnode = malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos == 1) {
        newnode->prev = NULL;
        newnode->next = head;
        if (head != NULL)
            head->prev = newnode;
        head = newnode;
    } else {
        temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp != NULL) {
            newnode->next = temp->next;
            newnode->prev = temp;
            if (temp->next != NULL)
                temp->next->prev = newnode;
            temp->next = newnode;
        } else {
            printf("Invalid position\n");
        }
    }
}
void delatbeg() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    free(temp);
}
void delatend() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    if (temp->next == NULL) {
        free(temp);
        head = NULL;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
}
void delatany() {
    printf("Enter position: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    if (pos == 1) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
    } else {
        for (i = 1; i < pos && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp != NULL) {
            if (temp->next != NULL)
                temp->next->prev = temp->prev;

            if (temp->prev != NULL)
                temp->prev->next = temp->next;

            free(temp);
        } else {
            printf("Invalid position\n");
        }
    }
}
void display() {
    temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice;

    while (1) {
        printf("\n1.Insert Beg\n2.Insert End\n3.Insert Any\n4.Delete Beg\n5.Delete End\n6.Delete Any\n7.Display\n8.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
            insertatbeg(); 
            break;
            case 2: 
            insertatend(); 
            break;
            case 3: 
            insertatany(); 
            break;
            case 4: 
            delatbeg(); 
            break;
            case 5: 
            delatend(); 
            break;
            case 6: 
            delatany(); 
            break;
            case 7: 
            display(); 
            break;
            case 8: 
            exit(0);
            default: printf("Invalid choice\n");
        }
    }
}