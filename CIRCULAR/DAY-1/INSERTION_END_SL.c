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
Node* ptr=tail->next;
newp->data=data;
newp->next=ptr;
tail->next=newp;
return newp;
}

int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(30);
tail=addAtEnd(tail,40);
tail=addAtEnd(tail,50);
Node* ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);

return 0;

}
