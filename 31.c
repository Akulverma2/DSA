// count 
#include <stdio.h>
#include <stdlib.h>
struct akul{
    int data;
    struct akul *next;
};
int main () {
    struct akul *head=NULL,*temp,*newnode;
    int i,count=0,key;
    for(i=1;i<=5;i++){
        newnode=malloc(sizeof(struct akul));
        printf("enetr the data %d:",i);
        scanf("%d",&newnode->data);
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
    printf("enter the value to be counted");
    scanf("%d",&key);
    if(temp->next!=NULL && temp->data==key);
    count++;
    printf("the count is:",count);
    return 0;
}