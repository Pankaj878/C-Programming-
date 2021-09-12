#include <stdio.h>
#include <conio.h>

// void reverse(char *ar)
// {
//   char a,b;
//   for (int i = 0; ar[i]!='\0' ; i++)
//   {
//      printf("%s",ar[i]);
//   }

// }

void main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
     for (int i = 0; i<n; i++)
    {
        scanf("%c",arr[i]);
        
    }
   

    // char a, b;
    for (int i = 0; i<n; i++)
    {
        printf("%c", arr[i]);
    }
}