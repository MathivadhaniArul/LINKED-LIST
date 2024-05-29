#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

void del(struct node*head){
 if(head->link==NULL){
    free(head);
    head=NULL;
 }
else{
struct node *ptr=head;
while(ptr->link->link!=NULL){
    ptr=ptr->link;
}
 free(ptr->link);
 ptr->link=NULL;
 }
}


int main(){
    struct node *head;
    head=malloc(sizeof(struct node));
    head->data=78;
    head->link=NULL;

    struct node *current;
    current=malloc(sizeof(struct node));
    current->data=69;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=57;
    current->link=NULL;
    head->link->link=current;

del(head);
return 0;
}
