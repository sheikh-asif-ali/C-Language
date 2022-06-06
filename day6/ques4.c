/*4. Write a program to print out all rotations of a string typed in. For eg:if the input is “Space”, the output should be: space paces acesp cespa espac.*/

#include<stdio.h>

void main(void)
{
    char s[100];
    int i, j;
    printf("Enter String:");
    gets(s);

    for(i=0; s[i]!=0; i++)
    {
        for(j=i; s[j]!=0; j++)
            printf("%c",s[j]);

        for(j=0; j<i; j++)
            printf("%c",s[j]);
        printf("\n");
    }

}

