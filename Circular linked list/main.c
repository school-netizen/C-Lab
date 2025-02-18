#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* create(int value){
    node *new;
    new=malloc(sizeof(node));
    new->data=value;
    new->next=NULL;
    return new;
}

node* insert(node *head, int value){
    node* new = create(value);
    node* temp;
    temp=head;
    if(head==NULL){
        temp=new;
        temp->next=temp;
        head = temp;
        return head;
        //return new;
    }else{
        new->next=temp;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=new;
        //new->next=head;
        return head;
    }
}

node* delete_first(node *head){
    int var;
    if(head==NULL){
        printf("Underflow\n");
    }else{
        node *temp;
        temp= head;
        head=head->next;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp=temp->next;
//        while()

    }
    return head;
}

void search(node *head,int value){
    node *temp;
    int i=0;
    temp=head;
    while(temp->next!=head){
        i=i+1;
        if(temp->data==value){
            printf("\n%d is found on the %d location.\n",temp->data,i);
        }
        temp=temp->next;
    }
}

void traverse(node *head){
    node* temp;
    temp=head;
    if(head==NULL){
        printf("List is empty");
    }
    if(head!=NULL){
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp!=head);
}
}

void main()
{
    node *head=NULL;
    //head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    head = insert(head,5);
    head = insert(head,6);

    head = delete_first(head);

    search(head,3);
    traverse(head);
    free(head);
}
