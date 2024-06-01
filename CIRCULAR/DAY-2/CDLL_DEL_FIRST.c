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
void delfirst(Node*tail){
Node*temp=tail->next;
tail->next=temp->next;
temp->next->prev=tail;
free(temp);
temp=NULL;

}
void print(Node*tail){
Node*ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);
}
int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(10);
tail=addAtEnd(tail,20);
tail=addAtEnd(tail,30);
printf("Before Deletion of first node : ");
print(tail);
delfirst(tail);
printf("\nAfter Deletion of first node : ");
print(tail);
return 0;

}

