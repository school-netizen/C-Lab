#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int a[10]={5,4,8,2,1,3,7,6,10,9};
    int i,loc,item,choice,temp,j,mid,lb=0,ub=10;
    char ans;

    do{
        system("cls");
        printf("\nEnter 1 for Insertion in the array.");
        printf("\nEnter 2 for Deletion in the array.");
        printf("\nEnter 3 to Sort the array.");
        printf("\nEnter 4 for Linear Search in the array.");
        printf("\nEnter 5 for Binary Search in the array.");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\nCurrent array is : \n");
                for(i=0;i<ub;i++){
                    printf("%d\t",a[i]);
                }

                printf("\nEnter the loc : ");
                scanf("%d",&loc);
                if(loc<1||loc>ub){
                    printf("Invalid location.");
                    exit(0);
                }
                printf("Enter the element : ");
                scanf("%d",&item);

                for(i=ub;i>=loc;i--){
                    a[i]=a[i-1];
                }

                a[loc-1]=item;

                for(i=0;i<ub;i++){
                    printf("%d\t",a[i]);
                }

                break;
            case 2:
                printf("\nEnter the loc which you want to delete : ");
                scanf("%d",&loc);
                if(loc<1||loc>ub){
                    printf("Invalid location.");
                    exit(0);
                }

                for(i=loc;i<ub;i++){
                    a[i-1]=a[i];
                }

                for(i=0;i<ub-1;i++){
                    printf("%d\t",a[i]);
                }

                break;
            case 3:
                printf("\nCurrent array is : \n");
                for(i=0;i<10;i++){
                    printf("%d\t",a[i]);
                }
                for(i=0;i<ub;i++){
                    for(j=0;j<ub;j++){
                        if(a[j]>a[j+1]){
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                    }
                }
                printf("\nSorted array is : \n");
                for(i=0;i<10;i++){
                    printf("%d\t",a[i]);
                }

                break;

            case 4:
                printf("\nEnter the element you want to search : ");
                scanf("%d",&item);
                for(i=0;i<10;i++){
                    if(item==a[i]){
                        loc=i;
                        break;
                    }else{
                        loc=0;
                    }
                }
                loc=loc+1;
                if(loc!=0){
                    printf("%d is found on the location %d",item,loc);
                }else{
                    printf("Item is not found.");
                }

                break;

            case 5:
                printf("\nEnter the element you want to search : ");
                scanf("%d",&item);

                ////////////sorting the array

                for(i=0;i<ub;i++){
                    for(j=0;j<ub;j++){
                        if(a[j]>a[j+1]){
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                    }
                }

                printf("\nSorted array is : \n");
                for(i=0;i<10;i++){
                    printf("%d\t",a[i]);
                }
                printf("\n");

                mid=(ub+lb)/2;

                do{
                    if(a[mid]==item){
                        //printf("\nItem %d vi location par chupa hua baitha hai.\n",mid+1);
                        break;
                    }else if(item<a[mid]){
                        ub=mid-1;
                    }else{
                        lb=mid+1;
                    }
                    mid=(lb+ub)/2;
                }while(item==a[mid]||lb<=ub);
                if(item==a[mid]){
                        printf("\nItem %d vi location par chupa hua baitha hai.\n",mid+1);
                        //break;
                }else{
                    printf("\nMere pas nahi hai ye Item.\n");
                }
                ub=10,lb=0;
                //if(item!=a[mid]){
                 //   printf("not found");
                //}

        }
        printf("\nDo you want to continue : ");
        scanf("%s",&ans);
    }while(ans=='y'||ans=='Y');
}
