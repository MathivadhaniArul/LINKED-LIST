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

Node* del_posn(Node*tail,int posn){
    if(tail->next==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    else{
Node* ptr=tail->next;
Node* ptr2;
while(posn-1!=1){
    ptr=ptr->next;
    posn--;
}

ptr2=ptr->next;
ptr->next=ptr2->next;
if(ptr2==tail){
    tail=ptr;
    free(ptr2);
    ptr2=NULL;
}
else{
free(ptr2);
ptr2=NULL;}
return tail;
}}

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
tail=addAtEnd(tail,60);
printf("Before Deletion : ");
print(tail);
tail=del_posn(tail,3);
printf("\nAfter Deletion : ");
print(tail);
return 0;

}
