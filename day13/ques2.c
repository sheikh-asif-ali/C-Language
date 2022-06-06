/* 2. Write a menu driven C program to implement “wc” (i.e NO. of lines, No. of characters and No. of words in given text file) utility of Linux.  
Take file as an input and print the following:
    a) Number of characters
    b) Number of lines
    c) Number of words */

#include<stdio.h>
#include<string.h>

void main()
{
     char text[100],ch;
     int i,c,characters=0,words=0,lines=0;
     
     printf("\nEnter the text,when complete press two times.\n");
     while(1)
     {
	      c=0;
	      while((ch=getchar())!='\n')
	      {
		     text[c]=ch;
		     c++;
		}text[c]='\0';
     
     if(text[0]=='\0')
     break;
     else
     {
	      words++;
	      for(i=0;text[i]!='\0';i++)
	      {
		      if (text[i]=='\0')
		       words++;
	      }
     }lines=lines+1;
     characters=characters+strlen(text);
     }
      
      printf("No of lines= %d\n",lines);
      printf("No of words= %d\n",words);
      printf("No of characters= %d\n",characters);   
 }     
