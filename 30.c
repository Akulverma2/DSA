// deleting a node from the end of the linked list
#include <stdio.h>
#include <stdlib.h>
struct akul{
    int data;
    struct akul *next;
};
int main () {
    struct akul *head=NULL,*temp,*del;
    int i;
    for (i=1;i<=5;i++){
        del=malloc(sizeof(struct akul));
        printf("enter the data%d:",i);
        scanf("%d", &del->data);
        del->next=NULL;
        if(head==NULL){
            head=del;
            temp=del;
        }else{
            temp->next=del;
            temp=del;
        }
    }
   temp=head;
   while(temp->next->next!=NULL){
    temp=temp->next;
   }
    free(temp->next);
   temp->next=NULL;
printf("the linked listy is:");
temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("NULL");

    return 0;
}