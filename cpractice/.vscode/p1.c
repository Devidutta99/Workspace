#include<stdio.h>
int main()
{
    char c;
    int small,capital;
    printf("Enter the Alphabet:");
    scanf("%c",&c);
    small=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    capital=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(small==capital){
        printf("%c is a vowel\n",c);
    }
    else{
        printf("%c is a consonant\n",c);
    }

}