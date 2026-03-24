#include <stdio.h>
#include <stdlib.h>

struct akul {
    int data;
    struct akul *next;
};

struct akul *head = NULL, *temp, *newnode;
int pos, i;
void insertatbeg() {
    newnode = malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}
void insertatend() {
    newnode = malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void insertatany() {
    newnode = malloc(sizeof(struct akul));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    } else {
        temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp != NULL) {
            newnode->next = temp->next;
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
    free(temp);
}
void delatend() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
        temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
void delatany() {
    printf("Enter position: ");
    scanf("%d", &pos);
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    } else {
        temp = head;
        for (i = 1; i < pos - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }

        if (temp->next != NULL) {
            struct akul *target = temp->next;
            temp->next = target->next;
            free(target);
        } else {
            printf("Invalid position\n");
        }
    }
}
void display() {
    temp = head;
    printf("Singly Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main() {
    int choice;

    while (1) {
        printf("\n1.Insert Beg\n2.Insert End\n3.Insert Any\n4.Delete Beg\n5.Delete End\n6.Delete Any\n7.Display\n8.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertatbeg(); break;
            case 2: insertatend(); break;
            case 3: insertatany(); break;
            case 4: delatbeg(); break;
            case 5: delatend(); break;
            case 6: delatany(); break;
            case 7: display(); break;
            case 8: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}