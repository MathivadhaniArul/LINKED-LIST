#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*prev;
struct node*next;

}Node;

Node* add_empty(Node*head,int data){
Node *head1=malloc(sizeof(Node));
head1->prev=NULL;
head1->data=data;
head1->next=NULL;
return head1;
}

void addAtEnd(Node*head ,int data){
Node *temp=malloc(sizeof(Node));
temp=add_empty(temp,data);
Node *ptr=head;
while(ptr->next!=NULL){
    ptr=ptr->next;
}
ptr->next=temp;
temp->prev=ptr;
}

int main(){
Node* head=malloc(sizeof(Node));
int n,data;
printf("Enter no. of elements u want add : ");
scanf("%d",&n);
printf("Enter Element 1 : ");
scanf("%d",&data);
head=add_empty(head,data);
for(int i=1;i<n;i++){
printf("Enter Element %d : ",i+1);
scanf("%d",&data);
addAtEnd(head,data);
}
Node *ptr=head;
while(ptr!=NULL){
printf("%d ",ptr->data);
ptr=ptr->next;
}
return 0;

}
