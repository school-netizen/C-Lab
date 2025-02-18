#include <stdio.h>
#include <stdlib.h>

void quick_sort(int number[10],int first,int last){
    int i, j, pivot, temp;
    if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while((number[i]<=number[pivot])&&(i<last)){
            i++;
         }
         while((number[j]>number[pivot])){
            j--;
         }
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quick_sort(number,first,j-1);
      quick_sort(number,j+1,last);
   }
}
int main()
{
    int array[10]={5,8,2,4,1,0,34,33,13,12};
    int first = 0, last = 9,i=0;
    quick_sort(array,first,last);
    for(i=0;i<10;i++){
        printf("%d\t",array[i]);
    }
    return 0;

}
