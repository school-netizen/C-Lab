#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* create(int value){
    node *new;
    new=malloc(sizeof(node));
    new->data = value;
    new->next = NULL;
    return new;
}
//insertion
node* insert(node *head, int value){
    node *new = create(value);
    if(head==NULL){
        return new;
    }else{
        node* temp;
        temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=new;
        return head;
    }
}
//insert after a particular node
node* insert_after(int after,node *head,int value){
    node *new= create(value);
    node *temp,*stt;
    temp=head;
    while(temp->data!=after){
            temp=temp->next;
    }
    stt=temp->next;
    temp->next=new;
    new->next=stt;
    return head;
}
//delete the first node
node* delete_first(node *head){
    if(head==NULL){
        printf("Under flow");
    }else{
        head=head->next;
    }
    return head;
}
//delete a node with particular value
node* delete_particular(node *head,int value){
    node *temp,*ptemp;
    ptemp=NULL;
    temp=head;
    while(temp->next!=NULL){
        if(temp->data==value){
            if(temp==head){
                head=head->next;
                free(temp);
                temp=head;
            }else{
                ptemp->next=temp->next;
                free(temp);
                temp=ptemp->next;
            }
        }else{
            ptemp=temp;
            temp=temp->next;
        }
    }
    if(temp->data==NULL){
        return head;
    }
    return head;
}
//searching an element
void search(node *head,int item){
    int i=1;
    node *temp;
    temp=head;
    if(head==NULL){
        printf("List is EMPTY.");
    }
    else{
        while(temp->next!=NULL||temp->data!=item){
            if(temp->data==item){
                printf("\n%d found on %d location.",item,i);
                break;
            }
            if(temp->data!=item&&temp->next==NULL){
                 printf("\n%d not found in the list",item);
                 break;
            }
            temp=temp->next;
            i=i+1;
        }
    }
}
//traverse the linked list
void traverse(node *head){
    node *temp;
    temp= head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void main()
{
    node *head = NULL;
    head = insert(head,12);
    head = insert(head,13);
    head = insert(head,14);
    head = insert(head,15);
    head = insert_after(13,head,16);
    head = delete_particular(head,13);
    traverse(head);
    //search(head,12);
    free(head);
    //return 0;
}
