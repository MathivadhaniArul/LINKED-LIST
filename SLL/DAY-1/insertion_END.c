#include<stdio.h>
#include<stdlib.h>

struct node{
int data ;
struct node *link;

};

//adding an element at the end
void add(struct node *head,int data)
{
    struct node *ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;

}

int main(){
struct node *head=NULL;
head=(struct node*)malloc(sizeof(struct node));
head->data =47;
head->link=NULL;
add(head,77);
add(head,45);
add(head,67);
return 0;
}

