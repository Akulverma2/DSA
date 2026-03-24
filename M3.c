#include <stdio.h>
#include <stdlib.h>
struct akul {
    int data;
    struct akul *next;
};
struct akul *head = NULL, *temp, *newnode;
int pos, i;
void insertatbeg() {
    newnode = (struct akul*)malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
}
void insertatend() {
    newnode = (struct akul*)malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }
}
void insertatany() {
    newnode = (struct akul*)malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1) {
        insertatbeg();
        return;
    }

    temp = head;
    for (i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
void delatbeg() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        struct akul *del = head;
        head = head->next;
        temp->next = head;
        free(del);
    }
}
void delatend() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        temp = head;
        while (temp->next->next != head) {
            temp = temp->next;
        }
        struct akul *del = temp->next;
        temp->next = head;
        free(del);
    }
}
void delatany() {
    printf("Enter position: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos == 1) {
        delatbeg();
        return;
    }

    temp = head;
    for (i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }
    struct akul *del = temp->next;
    temp->next = del->next;
    free(del);
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
            case 1: insertatbeg(); 
            break;
            case 2: insertatend(); 
            break;
            case 3: insertatany(); 
            break;
            case 4: delatbeg(); 
            break;
            case 5: delatend(); 
            break;
            case 6: delatany();
            break;
            case 7: display(); 
            break;
            case 8: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}