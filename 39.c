// count no of even nodes
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newnode;
    int i,count=0;
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
    temp=head;
    while(temp!=NULL)
        if(temp->data%2==0){
        count++;
        temp=temp->next;
    }
    printf("the no of even no in a ll is:%d",count);
    return 0;
}
