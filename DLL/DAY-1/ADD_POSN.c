#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*prev;
struct node*next;

}Node;

Node* addAtBeg(Node* head,int data){
Node *temp=malloc(sizeof(Node));
temp->prev=NULL;
temp->data=data;
temp->next=NULL;

temp->next=head;
head->prev=temp;
head=temp;
return head;
}

Node* add_posn(Node*head,int posn,int data){
if(posn==1){
    head=addAtBeg(head,data);
}
else{
Node*temp1=head;
Node*temp2=NULL;
Node*newn=malloc(sizeof(Node));
newn->prev=NULL;
newn->data=data;
newn->next=NULL;
for(int i=1;i<posn;i++){
    temp1=temp1->next;
    posn--;
}
temp2=temp1->next;

temp1->next=newn;
temp2->prev=newn;
newn->prev=temp1;
newn->next=temp2;
return head;
}
}

int main(){
Node *head=malloc(sizeof(Node));
head->prev=NULL;
head->data=60;
head->next=NULL;
head=addAtBeg(head,50);
head=addAtBeg(head,40);
head=add_posn(head,3,45);
head=add_posn(head,1,20);

return 0;

}
