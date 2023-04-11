/*Write a C program to read name input from user after asking
him the maximum length for it then print the name he entered
and the frequency of the most repeated character on it*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max_length;
    printf("Enter maximum length\t");
    scanf("%d",&max_length);
    char *name=(char*)malloc(max_length*sizeof(char));
     if (name==NULL){
        printf("Failed to Allocate");
    }else{
         printf("Enter The name\t");
         getchar();
         gets(name);
         printf("The name\t%s",name);
         int freq[256]={0},max_freq;
         for(int i=0;name[i]!='\0';i++)
            freq[name[i]]++;
         for(int i=0; i<256;i++)
         {
             if(freq[i]>freq[max_freq])
                max_freq=i;
         }
    printf("\nThe most repeated character is {%c} ant The Max Freq is  %d",max_freq,freq[max_freq]);
    }






    return 0;
}
