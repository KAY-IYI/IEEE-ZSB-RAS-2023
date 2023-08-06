#include <stdio.h>
#include <stdlib.h>

#define Func Ascending_order
#ifdef Func

void Ascending_order(){
    int arr [10] ,temp;
    for(int i=0;i<10;i++){
        printf("\n Enter num_%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j =0 ;j<10;j++){
        for(int k = j+1;k<10;k++){
            if (arr[k]<arr[j]){
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    printf("\nArranging Numbers in Ascending order : ");
    for(int i=0;i<10;i++){
        printf("%d \t ",arr[i]);
    }
}
void Descending_order(){
    int arr [10] ,temp;
    for(int i=0;i<10;i++){
        printf("Enter num_%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j =0 ;j<10;j++){
        for(int k = j+1;k<10;k++){
            if (arr[k]>arr[j]){
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    printf("\nArranging Numbers in Descending order : ");
    for(int i=0;i<5;i++){
        printf("%d \t ",arr[i]);
    }
}
#endif
#ifndef Function
    #warning "Please define the order"
#endif

int main(){
    Func();
    return 0;
}
