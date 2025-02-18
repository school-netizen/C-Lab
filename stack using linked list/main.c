#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}node;

node* create(int value){
    node *new;
    new=malloc(sizeof(node));
    new->value=value;
    new->next=NULL;
    return new;
}

node* push(node *head, int value){
    node *temp,*new;
    new=create(value);
    temp=head;
    if(head==NULL){
        return new;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
        return head;
    }
    return head;
}

node* pop(node *head){
    node *temp;
    node *stt;
    temp=head;
    if(temp==NULL){
        printf("\nUnderflow.\n");
    }else{
        while(temp->next!=NULL){
            stt=temp;
            temp=temp->next;
        }
        stt->next=NULL;
    }
    return head;
}

void traverse(node *head){
    node *temp;
    temp=head;
    if(head==NULL){
        printf("List is empty");
    }else{
        while(temp!=NULL){
            printf("%d->",temp->value);
            temp=temp->next;
        }
    }
}
int main()
{
    node *head=NULL;
    head = push(head,5);
    head = push(head,6);
    head = push(head,7);
    pop(head);
    pop(head);
    traverse(head);
}
