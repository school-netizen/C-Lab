#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *prev;
    struct node *next;
}node;

node* create(int data){
    node *new;
    new = malloc(sizeof(node));
    new->next=NULL;
    new->prev=NULL;
    new->value=data;
    return new;
}

node* insert_head(node *head, int data){
    node *new;
    node *temp;
    new = create(data);
    if(head==NULL){
        return new;
    }else{
        temp=head->next;
        new->next=temp;
    }

    return head;
}

node* insert_end(node *head, int data){
    node *new;
    node *temp;
    temp=head;
    new=create(data);
    new->value=data;
    if(head==NULL){
        return new;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        //stt=temp;
        new->prev=temp;
        temp->next=new;
        new->next=NULL;
        return head;
    }
    //return head;
}

node* insert_after(node *head, int after, int data){
    int *stt;
    node *new;
    node *temp;
    new= create(data);
    temp=head;
    while(temp->value!=after){
        temp=temp->next;
    }
    stt=temp->next;
    temp->next=new;
    new->prev=temp;
    new->next=stt;
    return head;
}

node* delete_head(node *head){
    node *temp;
    if(head==NULL){
        return head;
    }else{
        /*temp=head->next;
        temp->prev=NULL;
        head=temp;*/
        head=head->next;
        head->prev=NULL;
    }
    return head;
}

node* delete_particular(node *head, int data){
    node *temp;
    node *prev_node;
    temp=head;
    if(temp==NULL){
        printf("Underflow.");
    }else{
        while(temp->value!=data){
            temp=temp->next;
        }
        prev_node=temp->prev;
        prev_node->next=temp->next;
        temp->next->prev=prev_node;
        return head;
    }
    return head;
}

void traverse(node *head){
    node *temp;
    temp = head;
    if(head==NULL){
        printf("\nLinked list is empty.\n");
    }

    while(temp!=NULL){
        //printf("%d->",temp->value);
        printf("\n%d->%d->%d->%d",temp->value,temp,temp->prev,temp->next);
        temp=temp->next;
    }
}

int main()
{
    node *head=NULL;
    head = insert_head(head,4);
    head = insert_end(head,5);
    head = insert_end(head,7);
    head = insert_end(head,8);
    head = insert_after(head,8,6);
    //head = delete_head(head);
    head = delete_particular(head,8);
    traverse(head);
}
