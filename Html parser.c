#include<stdio.h>
#include<conio.h>
#include<string.h>

void parse(char* line)
{
 int an=0;
 int first=0;
 for (int i;i<strlen(line);i++)
 {
  if (line[i]=='<')
  { an=0;
    continue;
  }
  else if(line[i]=='>')
  {
    an=1;
    continue;
  }
  if (an==1)
  {
   line[first]=line[i];
   first++;
  }
 }
 line[first]='\0';
 while (line[0]==' ')
 {
 for(int i=0;i<strlen(line);i++)
 {
  line[i]=line[i+1];
 }
 }
// while(line[strlen(line)-1]==' ')
//{
// for(int j=0;j<strlen(line);j++)
//    strlen(line)=strlen(line)-1;
//}
}

void main()
{
 char ar[]="<kk>  Ram is a good boy  <jj>";
 parse(ar);
 printf("%s",ar);
}
