#include<stdio.h>
int main(void)
{
char s1[]="this is fun";
char s2[]="fin";
int loc = thef (s1,s2);
printf("%d",loc);
printf("\n");
return 0;
}
int thef(char s1[],char s2[])
{
int i=0;
int loc = -1;
while (s1[i] !='\0')
{
int j = 0;
while (s2[j] != '\0')
{
if (s2[j] == s1[i])
{
loc = (int)s1[i];
return loc;
}
j++;
}
i++;
}
return loc;
}
