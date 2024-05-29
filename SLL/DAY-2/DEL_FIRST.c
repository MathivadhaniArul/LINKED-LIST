#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

struct node* del(struct node*head){
struct node *ptr=head;
head=head->link;
free(ptr);
ptr=NULL;
return head;
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
  
   head=del(head);
return 0;
}
