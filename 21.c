// create a linked list of 8 nodes
#include <stdio.h>
#include <stdlib.h>
struct akul{
    int data;
    struct akul *next;
};
int main(){
    struct akul *newnode,*temp,*head=NULL;
    int i;
    for(i=1;i<=8;i++){
        newnode=malloc(sizeof(struct akul));
        printf("enter the data %d:",i);
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        if(head==NULL){
        head=newnode;
        temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
printf("the linked list is:\n");
temp=head;
while(temp!=NULL){
    printf("%d ->", temp->data);
    temp=temp->next;
}
printf("NULL");

    return 0;
}