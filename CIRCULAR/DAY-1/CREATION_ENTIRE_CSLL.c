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
newp->data=data;
newp->next=tail->next;
tail->next=newp;
return newp;

}

int main(){
Node* tail=malloc(sizeof(Node));
int n,data;
printf("Enter no. of elements : ");
scanf("%d",&n);

if(n>0){
printf("Enter Element 1 : ");
scanf("%d",&data);
tail=circular_ll(data);
for(int i=1;i<n;i++){
printf("Enter Element %d : ",i+1);
scanf("%d",&data);
tail=addAtEnd(tail,data);
}

Node* ptr=tail->next;
do{
printf("%d ",ptr->data);
ptr=ptr->next;
}while(ptr!=tail->next);
}
  
if(n==0){
    printf("list is empty ");
}
return 0;

}
