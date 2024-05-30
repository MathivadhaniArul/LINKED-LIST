#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*prev;
struct node*next;

}Node;

Node* add_empty(Node*head,int data){
Node *head1=malloc(sizeof(Node));
head1->prev=NULL;
head1->data=data;
head1->next=NULL;
return head1;
}

void addAtEnd(Node*head ,int data){
Node *temp=malloc(sizeof(Node));
temp=add_empty(temp,data);
Node *ptr=head;
while(ptr->next!=NULL){
    ptr=ptr->next;
}
ptr->next=temp;
temp->prev=ptr;
}

int main(){
Node* head=malloc(sizeof(Node));
head=add_empty(head,5);
addAtEnd(head,10);
addAtEnd(head,15);
addAtEnd(head,20);
Node*ptr=head;
int posn=2;
Node* ptr2;
while(posn>1){
    ptr=ptr->next;
    posn--;
}
ptr2=ptr->prev;
ptr2->next=ptr->next;
ptr->next->prev=ptr2;
free(ptr);
ptr=NULL;
ptr2=head;

while(ptr2!=NULL){
    printf("%d ",ptr2->data);
    ptr2=ptr2->next;
}
return 0;

}
