// insert at the end of the linked list
#include <stdio.h>
#include <stdlib.h>
struct akul{
    int data;
    struct akul *next;
};
int main () {
    struct akul *head=NULL,*tech,*newnode;
    int i;
    for (i=1;i<=5;i++){
        newnode=malloc(sizeof(struct akul));
        printf("enter the data%d:",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tech=newnode;
        }else{
            tech->next=newnode;
            tech=newnode;
        }
    }
    newnode=malloc(sizeof(struct akul));
    printf("enter the data to be inserted:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        tech=newnode;
    }
    else{
        tech=head;
        while(tech->next!=NULL){
            tech=tech->next;
        }
        tech->next=newnode;
    }
printf("the linked list is:\n");
tech=head;
while(tech!=NULL){
    printf("%d->",tech->data);
    tech=tech->next;
}
printf("NULL")
    return 0;
}