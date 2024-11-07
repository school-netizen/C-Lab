#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *left_child;
    struct node *right_child;
}node;

node* create(int value){
    node *new;
    new = malloc(sizeof(node));
    new->value=value;
    new->left_child=NULL;
    new->right_child=NULL;
    return new;
}

node* insert(int value,node *root){
    node *new = create(value);
    if(root==NULL){
        root=new;
    }else{
        if(value>=root->value){
            root->right_child=insert(value,root->right_child);
        }else{
            root->left_child=insert(value,root->left_child);
        }
    }
    return root;
}

void traverse(node *root){
    node *temp;
    temp = root;
    if(temp!=NULL){
        printf("%d->",temp->value);
        traverse(temp->left_child);
        traverse(temp->right_child);
    }
}

int main()
{
    node *root;
    root = NULL;
    root = insert(20,root);
    insert(17,root);
    insert(12,root);
    insert(19,root);
    insert(27,root);
    insert(25,root);
    insert(28,root);
    //root = insert(17,root);
    traverse(root);
}
