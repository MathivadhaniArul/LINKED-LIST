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

int main(){
Node* head=malloc(sizeof(Node));
head=circular_ll(5);
printf("%d ",head->data);
return 0;
}

