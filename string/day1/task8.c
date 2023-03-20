#include <stdio.h>
#include <string.h>
int main(){ 
    char s[50];
     int i,alphabets=0,digits=0,specialchar=0;
     printf("Enter  the string : ");
      gets(s);
      for(i=0;i<=s[i];i++)
       {
         if(s[i]>='0' && s[i]<='9')
         digits++;
         else if
         ((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z') )
         alphabets++; 
         else
         specialchar++;
         }printf("Alphabets = %d\n",alphabets);
         printf("Digits = %d\n",digits);
         printf("Special characters = %d", specialchar);
         }