#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*prev;
struct node*next;

}Node;

Node* circular_ll(int n){
Node* temp=malloc(sizeof(Node));
temp->data=n;
temp->next=temp;
temp->prev=temp;
return temp;
}

Node* addAtBeg(Node*tail,int data){
Node*ptr=malloc(sizeof(Node));
Node* temp=tail->next;
ptr->data=data;
ptr->next=temp;
ptr->prev=tail;
temp->prev=ptr;
tail->next=ptr;
return tail;

}

int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(30);
tail=addAtBeg(tail,20);
tail=addAtBeg(tail,10);
Node*ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);
return 0;

}
