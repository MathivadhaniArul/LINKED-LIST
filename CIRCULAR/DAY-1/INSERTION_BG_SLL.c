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
Node* addAtBg(Node* tail,int data){
Node* t=malloc(sizeof(Node));
t->data=data;
t->next=tail->next;
tail->next=t;
return tail ;
}

int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(30);
tail=addAtBg(tail,20);
tail=addAtBg(tail,10);
Node* ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);

return 0;

}
