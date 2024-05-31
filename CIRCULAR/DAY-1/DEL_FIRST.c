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

Node* del_frst(Node*tail){
Node* ptr=tail->next;
tail->next=ptr->next;
free(ptr);
ptr=NULL;
return tail;
}

void print(Node* tail){
Node* ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);
}

int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(30);
tail=addAtEnd(tail,40);
tail=addAtEnd(tail,50);
printf("Before Deletion : ");
print(tail);
tail=del_frst(tail);
printf("\nAfter Deletion : ");
print(tail);
return 0;
}
