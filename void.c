#include<stdio.h>
int main()
{
int var=30;
int *ptr=&var;
printf("%d",*(int*)ptr);
printf("%d",ptr);
return 0;
}
