
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

int searching(Node*tail,int search){
    int index=0;
Node* ptr=tail->next;
do{
if(ptr->data==search){
    return index;
    break;
}
ptr=ptr->next;
index++;
}while(ptr!=tail->next);
return -1;

if(tail==NULL){
    return -2;
}}

int main(){
Node* tail=malloc(sizeof(Node));
tail=circular_ll(30);
tail=addAtEnd(tail,40);
tail=addAtEnd(tail,50);

int search;
printf("Enter the element u want to search: ");
scanf("%d",&search);
int n=searching(tail,search);
if(n==-1){
    printf("%d is not present int the list",search);
}
else if(n==-2){
    printf("list is empty");
}
else{
    printf("%d is present at index %d",search,n);
}

return 0;

}
