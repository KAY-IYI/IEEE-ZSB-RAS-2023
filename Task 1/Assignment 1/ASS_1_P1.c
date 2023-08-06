<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
      int count =0;
      int arr []  = {1,2,3,1,3,8,5,2,8};
      int length = sizeof(arr)/sizeof(arr[0]);
      for (int i =0 ; i < length;i++){
        for (int j =i+1 ; j < length;j++){
            if (arr[i]==arr[j]){
                count ++;
                break;
            }
        }
      }
       printf(" Nom of Duplicate elements is : %d", count);

    return 0;
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
      int count =0;
      int arr []  = {1,2,3,1,3,8,5,2,8};
      int length = sizeof(arr)/sizeof(arr[0]);
      for (int i =0 ; i < length;i++){
        for (int j =i+1 ; j < length;j++){
            if (arr[i]==arr[j]){
                count ++;
                break;
            }
        }
      }
       printf(" Nom of Duplicate elements is : %d", count);

    return 0;
>>>>>>> main
}