#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ans;
    struct list{
        int info;
        struct list *ptr;
    };

    struct list l1;
    l1.info=15;
    l1.ptr=NULL;

    printf("Do you want to add an element in list : ");
    scanf("%s",&ans);

    if(ans=='y'||ans=='Y'){
        struct list *next= malloc(sizeof(struct list));
        (*next).info=5;
        (*next).ptr=NULL;
        l1.ptr=&next;


        printf("\n%d",l1.info);
        printf("\n%d",l1.ptr);
        printf("\n%d",(*next).info);
        printf("\n%d",(*next).ptr);
    }

    //printf("size : %d",sizeof(struct list));

    //printf("%d",l1.info);
}
