// deletion at end in circular ll
#include <stdio.h>
#include <stdlib.h>
struct akul {
    int data;
    struct akul *next;
    struct akul *prev;
};
int main() {
    struct akul *head=NULL,*temp,*newnode,*last;
    int i;
    for(i=1;i<=5;i++){
        newnode=malloc(sizeof(struct akul));
        printf("Enter data %d: ",i);
        scanf("%d",&newnode->data);

        if(head==NULL){
            head=newnode;
            newnode->next=head;
            newnode->prev=head;
    }
}
    if(head==NULL){
        printf("List is empty");
    }
    else{
        last=head->prev;
        temp=last->prev;
        temp->next=head;
        head->prev=temp;
        free(last);
    }
    printf("\nLinked list after deletion:\n");
    temp=head;
    while(temp!=head)
        printf("%d -> ",temp->data);
        temp=temp->next;
    printf("NULL");
    return 0;
}
