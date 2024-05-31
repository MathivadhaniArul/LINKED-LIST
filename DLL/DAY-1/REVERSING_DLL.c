#include<stdio.h>
#include<stdlib.h>
//reversing the dll
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

Node* reverse(Node*head){
Node* ptr1=head;
Node*ptr2=ptr1->next;
ptr1->next=NULL;
ptr1->prev=ptr2;
while(ptr2!=NULL){
    ptr2->prev=ptr2->next;
    ptr2->next=ptr1;
    ptr1=ptr2;
    ptr2=ptr2->prev;
}
head=ptr1;
return head;
}

int main(){
Node* head=malloc(sizeof(Node));
head=add_empty(head,5);
addAtEnd(head,10);
addAtEnd(head,15);
addAtEnd(head,20);
head=reverse(head);
Node* ptr2;
ptr2=head;

while(ptr2!=NULL){
    printf("%d ",ptr2->data);
    ptr2=ptr2->next;
}
return 0;

}
