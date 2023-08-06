#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);

      int x = n*2-1; 
      for(int i =0;i<x;i++){
        // printf("\t\t\t");
        for(int j =0;j<x;j++){
            int c = i < j ? i : j;
            c = c < (x - i - 1) ? c : (x - i - 1);
            c = c < (x - j - 1) ? c : (x - j - 1);
            int num = n - c;
            printf("%d ", num);
            }
        printf("\n");
                }
    return 0;
}
