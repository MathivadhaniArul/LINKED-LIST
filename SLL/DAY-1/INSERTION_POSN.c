#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

void add(struct node* head,int data,int posn){
struct node *ptr=head;
struct node *a=malloc(sizeof(struct node));
a->data=data;
a->link=NULL;
posn--;
while(posn!=1){
    ptr=ptr->link;
    posn--;
}
a->link=ptr->link;
ptr->link=a;

};

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

    add(head,54,3);
return 0;
}
