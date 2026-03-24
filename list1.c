#include <stdio.h>
#include <stdlib.h>

struct Akul {
    int data;
    struct Akul *link;
};

int main() 
{
    struct Akul *head = NULL, *temp, *newNode;
    int choice, val, pos, i;

    while (1) 
    {
        printf("\n1.Start \n2.End \n3.Mid \n4.DelStart \n5.DelEnd \n6.DelMid \n7.Read \n8.Exit: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) 
        {
            newNode = malloc(sizeof(struct Akul));
            printf("Value: "); 
            scanf("%d", &newNode->data);
            newNode->link = NULL;

            if (choice == 1) 
            {
                newNode->link = head;
                head = newNode;
            } else if (choice == 2) 
            {
                if (!head) 
                    head = newNode;
                else {
                    temp = head;
                    while (temp->link != NULL) 
                        temp = temp->link;
                    temp->link = newNode;
                }
            } else 
            {
                printf("After Pos: "); 
                scanf("%d", &pos);
                temp = head;
                for (i = 1; i < pos && temp; i++) 
                    temp = temp->link;
                if (temp != NULL) 
                {
                    newNode->link = temp->link;
                    temp->link = newNode; 
                } else {
                    printf("Position out of range.\n");
                    free(newNode);
                }
            }
        } 
        else if (choice >= 4 && choice <= 6 && head) 
        {
            if (choice == 4) 
            {
                temp = head; 
                head = head->link; 
                free(temp);
            } 
            else if (choice == 5) 
            {
                if (!head->link) 
                { 
                    free(head); 
                    head = NULL; 
                } else {
                    temp = head;
                    while (temp->link->link != NULL)
                        temp = temp->link;
                    free(temp->link);
                    temp->link = NULL;
                }
            }
            else if (choice == 6)
            {
                printf("Position to delete: ");
                scanf("%d", &pos);
                
                if (pos == 1) {
                    temp = head;
                    head = head->link;
                    free(temp);
                } else {
                    temp = head;
                    for (i = 1; i < pos-1 && temp != NULL; i++) 
                    {
                        temp = temp->link;
                    }
                    if (temp != NULL && temp->link != NULL) {
                        struct Akul *target = temp->link;
                        temp->link = target->link;
                        free(target);
                    } else {
                        printf("Position not found.\n");
                    }
                }
            }
        }
        else if (choice == 7) 
        {
            temp = head;
            while (temp) 
            { 
                printf("%d -> ", temp->data);
                temp = temp->link; 
            }
            printf("NULL\n");
        } else if (choice == 8) {
            break;
        } else if (choice >= 4 && choice <= 6 && !head) {
            printf("List is empty.\n");
        }
    }
    return 0;
}