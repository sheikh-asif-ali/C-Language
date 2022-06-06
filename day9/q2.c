/*2. Uppercase to Lower case: Convert a string from upper case to lowercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. 
*/
#include<stdio.h>
void main()
{
        char str[100];
        printf("Enter any upper case string: \n");
        scanf("%s",str);
        for(int i=0; str[i]!='\0'; i++)
        {
                if(str[i]>='A' && str[i]<='Z')
                {
                        str[i]=str[i]+32;
                }
        }
        printf("Converted Lowercase String is: %s\n",str);
}
