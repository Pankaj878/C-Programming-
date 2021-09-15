#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char arr[100];
    scanf("Enter your word :%s", &arr);
    int n, count;
    n = strlen(arr);
    printf("%d", n);
    if (n % 2 == 0)
    {
        for (int i = 0; i <= n / 2; i++)
        {
            if (arr[i] == arr[n - i])
            {
                count = 0;
            }
            else
            {
                count = 1;
                break;
            }
        }
    }
    else
    {
        n = n / 2 + 1;
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] == arr[n - i])
            {
                count = 0;
            }
            else
            {
                count = 1;
                break;
            }
        }
    }
    if (count == 0)
    {
        printf("Yes string is returnable");
    }
    else
    {
        printf("No string is not returnable");
    }
}
