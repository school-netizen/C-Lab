#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *ptr;
};
int main()
{
    int item,g_node,temp_loc,loc,i=0,count=0,*start;
    char conf;
    //struct Node *start;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *u_node;

    //start = malloc(sizeof(struct Node));
    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));
    fifth = malloc(sizeof(struct Node));
    u_node = malloc(sizeof(struct Node));

    start = first;
    //start->data=1;
    //start->ptr=first;

    first->data=1;
    first->ptr=second;

    second->data=2;
    second->ptr=third;

    third->data=3;
    third->ptr=fourth;

    fourth->data=4;
    fourth->ptr=fifth;

    fifth->data=5;
    fifth->ptr=NULL;

    /*
    ////////// Searching in Linked list
    printf("Enter the item which you want to search: ");
    scanf("%d",&item);

    struct Node *n=start;
    do{
        i=i+1;
        if(n->data==item){
            printf("Item found on %d location.\n",i);
            break;
        }else if(n->ptr==NULL){
            printf("Item not found\n");
            break;
        }
        n=n->ptr;
    }while(n->data!=item||n!=NULL);
    */
/*
    printf("Enter the value of the node which you want to remove : ");
    scanf("%d",&item);

    //second->ptr=fourth;
    struct Node *n=start,*locp;
    while(n->ptr!=NULL||n->data!=item){
        i=i+1;
        if(n->data==item){
            locp=n->ptr;
            printf("Item found on the location %d",i);
            break;
        }
        locp=n;
        n=n->ptr;
    }
*/
    /*

    nprev=n;
    n=n->ptr;
    /////inserting node at the first location

    printf("Enter the item you want to insert on the first node : ");
    scanf("%d",&item);

    struct Node *n=start;
    u_node->data=item;
    start=u_node;
    u_node->ptr=first;

    */




    //////////Insert on a given node or last node
    /*
    printf("Enter the node on which you want to insert the element : ");
    scanf("%d",&g_node);

    struct Node *num=start;
    do{
        count++;
        num=num->ptr;
    }while(num!=NULL);

    struct Node *n=start;
    if(g_node<count){
        //struct Node *n=start;
        while(i!=g_node||n->ptr==NULL){
            i=i+1;
            //n=n->ptr;
            temp_loc=n->ptr;
            if(i==g_node){
                n->ptr=u_node;
                u_node->ptr=temp_loc;
                u_node->data=324;
            }
            n=n->ptr;
        //i=i+1;
        }
    }else if(g_node==count){
        while(i!=g_node){
            i=i+1;
            if(i==count){
                n->ptr=u_node;
                u_node->ptr=NULL;
                u_node->data=324;
            }
            n=n->ptr;
        }
    }
    else{
        printf("Location Invalid");
        exit(0);
    }
*/

    //////deleting first node;

    printf("Do you want to delete the first element : ");
    scanf("%s",&conf);

    if(conf=='y'||conf=='Y'){
        temp_loc=first->ptr;
        start=temp_loc;
    }else{
        printf("Invalid choice");
    }


    printf("\n");
    struct Node *no=start;
    while(no!=NULL){
        printf("%d\t",no->data);
        no=no->ptr;
    }
    printf("\n");

    struct Node *nom=start;
    while(nom!=NULL){
        printf("%d\t",nom->data);
        printf("%d\n",nom->ptr);
        nom=nom->ptr;
    }
    printf("\n");

    return 0;
    ////*
}
