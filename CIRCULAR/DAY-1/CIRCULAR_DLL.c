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

int main(){
Node* head=malloc(sizeof(Node));
head=circular_ll(10);
printf("%d ",head->data);

return 0;

}
