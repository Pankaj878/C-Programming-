#include<stdio.h>
struct student
{
    int no;
    char nam[10];
    float mark;
};
/*
   Or
struct student
{
 int no;
 char nam[10];
 float mark;
}sab rakesh;
*/
void main()
{
    struct student rakesh,shiv;
    scanf("%d",&rakesh.no);
    scanf("%s",&rakesh.nam);
    scanf("%f",&rakesh.mark);

    scanf("%d",&shiv.no);
    scanf("%s",&shiv.nam);
    scanf("%f",&shiv.mark);



    printf("%d\n",rakesh.no);
    printf("%s\n",rakesh.nam);
    printf("%.2f\n",rakesh.mark);

    printf("%d\n",shiv.no);
    printf("%s\n",shiv.nam);
    printf("%.2f\n",shiv.mark);

}
