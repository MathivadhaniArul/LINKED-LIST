#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

void del(struct node**head,int posn){
    struct node*prev=*head;
    struct node*current=*head;

 if(posn==1){
        *head=current->link;
        free(current);
        current=NULL;

 }
 else{
    while(posn!=1){
        prev=current;
        current=current->link;
        posn--;

    }
    prev->link=current->link;
    free(current);
    current=NULL;

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
 del(&head,2);
return 0;
}
