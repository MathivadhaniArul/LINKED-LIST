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
Node* del_last(Node*tail){
Node*temp=tail->prev;
temp->next=tail->next;
tail->next->prev=temp;
free(tail);
tail=NULL;
return temp;

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
printf("Before Deletion of last node : ");
print(tail);
tail=del_last(tail);
printf("\nAfter Deletion of last node : ");
print(tail);
return 0;

}

