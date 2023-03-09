#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr []={1,2,3,1,5,2,5,6,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("unique elements in the array is :- \n");
    for(int i=0;i<length;i++){
        int flag = 0;
        for(int j=0;j<length;j++){
            if (arr[i]==arr[j]&&i!=j)
                flag =1;
        }
        if(flag == 0 )
            printf("%d\t\t",arr[i]);
    }
    return 0;
}