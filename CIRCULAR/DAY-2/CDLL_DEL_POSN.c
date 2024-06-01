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
del_posn(Node*tail,int posn){
Node*temp=tail->next;
while(posn!=1){
    temp=temp->next;
    posn--;
}
temp->next->prev=temp->prev->next;
temp->prev->next=temp->next;
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
tail=addAtEnd(tail,40);
int posn=2;
printf("Before Deletion of element at posn %d : ",posn);
print(tail);
del_posn(tail,posn);
printf("\nAfter Deletion of element at posn %d : ",posn);
print(tail);
return 0;

}

