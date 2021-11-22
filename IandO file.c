#include<stdio.h>
void main()
{ char value[55]="me hu yodha";
  FILE *pnt=NULL;
  pnt=fopen("Ex.txt","w");
  fprintf(pnt,"%s",value); 
}
