/*3. Write a program to convert lower case string to upper case string and vice versa.*/

#include <stdio.h>

void main()
 {
   char str[50];
   int i;
   printf("\nEnter a string : ");
   gets(str);

   for (i = 0; str[i]!='\0'; i++) 
   {
      if(str[i] >= 'a' && str[i] <= 'z') 
      {
         str[i] = str[i] - 32;
      }
   }
   printf("\nString in Upper Case = %s", str);
}
