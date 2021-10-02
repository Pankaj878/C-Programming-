#include<stdio.h>

typedef struct child
{
    int age;
    float hight;
    char name[9];
} chl; // struct child ko chl se represent kr do


void main()
{
    struct child a;
    scanf("%d",&a.age);
    scanf("%s",&a.name);
    printf("%d\n",a.age);
    printf("%s\n",a.name);
}
