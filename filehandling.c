#include<stdio.h>
#include<conio.h>
int main()
{
  char arr[23];
  scanf("%s",arr);
  FILE *ptr=fopen("Ex.txt","r+");
  fprintf(ptr,"%s",arr);
  return 0;
}