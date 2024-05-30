#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int data;
struct node*prev;
struct node*next;

}Node;

int main(){
Node *head=malloc(sizeof(Node));
head->prev=NULL;
head->data=15;
head->next=NULL;
printf("%d ",head->data);

return 0;
}
