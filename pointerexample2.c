#include<stdio.h>
int main()
{
    int a[6]={3,2,5,7,9,18};
    int *p;
    p = &a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",a[0]);
    //printf("%d\n",a[1]);
    //printf("%d\n",a[2]);
    //printf("%d\n",a[3]);
    printf("%d\n",++*p);
    printf("%d\n",*++p);
    printf("%d\n",*p++);
    printf("%d\n",*(p++));
    printf("%d\n",(*p)++);
    return 0;
}