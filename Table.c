#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char word[30];
    int t;
    printf("Enter your word:");
    scanf("%s",word);
    for (int i = 0; i < strlen(word); i++)
    {
        word[i]=word[i]+3;
        if (word[i]>122)
        {
           t=word[i]-122 ;
           word[i]=96+t;
        }
        printf("Result:");
        printf("%c",word[i]);
    }
    
    
}