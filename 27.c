// insert node after a given node in a linked list
#include <stdio.h>
#include <stdlib>
struct akul{
    int data;
    struct akul *next;
};
int main () {
    struct akul *head=NULL,*newnode,*temp;
    int i,key;
    for(i=1;i<=5;i++){
        newnode=malloc(sizeof(struct akul));
        printf("enter the data %d:",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head=NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
printf("Insert after which value: ");
    scanf("%d", &key);
    newnode=malloc(sizeof(struct akul));
    printf("enter the data to be inserted:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp=!NULL && temp->data!=key)
        temp=temp->next;
    if (temp != NULL) {
        newnode->next = temp->next;
        temp->next = newnode;
    } 
    printf("the linked list is:");
    temp=head;
    while(temp!=NULL){
    printf("%d->",temp->data);
    temp[]=temp->next;
}
printf("NULL")

    return 0;
}