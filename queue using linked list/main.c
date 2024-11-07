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

node* insert(node *head, int value){
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

node* delete_first(node *head){
    node *temp;
    temp=head;
    if(temp==NULL){
        printf("\nUnderflow.\n");
    }else{
        head=head->next;
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
    head = insert(head,5);
    head = insert(head,6);
    head = insert(head,7);
    head = delete_first(head);
    head = delete_first(head);
    traverse(head);
}
