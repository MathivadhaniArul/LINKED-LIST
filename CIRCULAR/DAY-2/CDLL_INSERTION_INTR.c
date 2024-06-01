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

Node* addAtEnd(Node*tail,int data){
Node*ptr=malloc(sizeof(Node));
ptr->data=data;
ptr->next=NULL;
ptr->prev=NULL;
Node* temp=tail->next;
tail->next=ptr;
ptr->prev=tail;
ptr->next=temp;
temp->prev=ptr;
return ptr;

}

Node* addAtIntr(Node*tail,int data,int posn){
Node*ptr=malloc(sizeof(Node));
ptr->data=data;
ptr->next=NULL;
ptr->prev=NULL;
Node* temp=tail->next;
while(posn-1!=1){
    temp=temp->next;
    posn--;
}
ptr->prev=temp;
ptr->next=temp->next;
temp->next->prev=ptr;
temp->next=ptr;
return tail;


}


int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(10);
tail=addAtEnd(tail,20);
tail=addAtEnd(tail,30);
tail=addAtIntr(tail,15,2);
Node*ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);
return 0;

}

