/*Write a C program to continuously ask the user
for a string input and prints only the unique
characters from that string and only stops if the
user entered a string containing a Stop code
characters predefined earlier for example”!!”*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[50];
    int unique[125]={0};
    while(1)
        {
            printf("\nEnter string input\t");
            gets(input);
            if (strcmp(input,"!!")!=0)
            {
                int len = strlen(input);
                for (int i=0; i<len;i++)
                    unique[(int)input[i]]=1;

                printf("Unique Char \t");

                for (int i=0; i<125;i++)
                {
                    if(unique[i]==1)
                    {
                        printf("%c\t",(char)i);
                        unique[i]=0;
                    }
                }
            }else
                break;
        }
    return 0;
}
