// deletion at ending of doubly linked list
#include <stdio.h>
#include<stdlib.h>
struct akul{
    int data;
    struct akul *next;
    struct akul *prev;
};
int main () {
    struct akul *head=NULL,*temp,*new;
    int i;
    for (i=1;i<=6;i++){
        new=malloc(sizeof(struct akul));
        printf("enter the data %d:",i);
        scanf("%d",&new->data);
        new->next=NULL;
        new->prev=NULL;
        if(head==NULL){
            head=new;
            temp=new;
        }else{
            temp->next=new;
            new->prev=temp;
            temp=new;
        }
        
    }
    temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next->prev=NULL;
    free(temp->next);
    temp->next=NULL;
    // display
printf("the doubly linked list is:");
temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL");

    return 0;
}