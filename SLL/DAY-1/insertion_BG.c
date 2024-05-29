#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};
struct node* addb(struct node *head, int n){
struct node * ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=n;
ptr->link=head;
head=ptr;
return head;
};

int main(){
struct node *head;
head=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
struct node * bg;
bg=(struct node*)malloc(sizeof(struct node));
bg->data=89;
bg->link=NULL;
head->link=bg;
int d=4;
head=addb(head,d);
bg=head;
while(head->link!=NULL){
printf("%d ",bg->data);
bg=bg->link;
}
return 0;
}
