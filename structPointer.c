#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
   char name[30];
   float persent;
   int mark;
}first;

void pointing(struct student *stdt, char *nam, float per, int mar )
{
  strcpy(stdt->name,nam);
  stdt->persent=per;
  stdt->mark=mar;
}

printing(struct student *stdt)
{
  printf("%s\n",stdt->name);
  printf("%.2f\n",stdt->persent);
  printf("%d\n",stdt->mark);
}

void main()
{
  
  pointing(&first,"raja",55.6,566);
  printing(&first);
}