#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node* head= NULL;
void push(int val){
    struct node*newNode=malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=head;
    head=newNode;
}
void pop(){
    struct node* temp;
    if (head==NULL){
        printf("stack is empty!!\n");
        
    }else{
        printf("popped element=%d\n",head->data);
        temp=head;
        head=head->next;
        free(temp);
    }
}

void printlist(){
    struct node*temp = head ;
    while (temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
        
    }
    printf("NULL\n");
}
int main(){
    push(13);
    push(68);
    push(12);
    printf("linked list:\n");
    printlist();

    pop();
    printf("After the , the new linked list:\n");
    printlist();
    pop();
    printf("After the Pop, the new linked list is :\n");
    printlist();
    return 0;
}
