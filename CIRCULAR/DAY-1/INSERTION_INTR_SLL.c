#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*next;

}Node;

Node* circular_ll(int n){
Node* temp=malloc(sizeof(Node));
temp->data=n;
temp->next=temp;
return temp;

}
Node* addAtEnd(Node*tail,int data){
Node* newp=malloc(sizeof(Node));
newp->data=data;
newp->next=tail->next;
tail->next=newp;
return newp;

}

void addatIntr(Node*tail,int data,int posn){
Node* ptr=tail->next;
Node* newp=malloc(sizeof(Node));
while(posn!=1){
    ptr=ptr->next;
    posn--;
}
newp->data=data;
newp->next=ptr->next;
ptr->next=newp;

}

int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(30);
tail=addAtEnd(tail,40);
tail=addAtEnd(tail,50);
addatIntr(tail,45,2);
  
Node* ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);

return 0;

}
