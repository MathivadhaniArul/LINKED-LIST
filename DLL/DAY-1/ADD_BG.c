#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*prev;
struct node*next;

}Node;

Node* addAtBeg(Node* head,int data){
Node *temp=malloc(sizeof(Node));
temp->prev=NULL;
temp->data=data;
temp->next=NULL;

temp->next=head;
head->prev=temp;
head=temp;
return head;
}

int main(){
Node *head=malloc(sizeof(Node));
head->prev=NULL;
head->data=15;
head->next=NULL;
head=addAtBeg(head,50);
head=addAtBeg(head,40);
head=addAtBeg(head,30);

Node *ptr=head;
while(ptr!=NULL){
printf("%d ",ptr->data);
ptr=ptr->next;
}
return 0;

}

