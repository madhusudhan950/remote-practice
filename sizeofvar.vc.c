#include<stdio.h>
int main()
{
    int size_of_int=sizeof(int);
    char size_of_char=sizeof(char);
    float size_of_float=sizeof(float);
    double size_of_double=sizeof(double);

    printf("Sizeof the integer=%d\n",size_of_int);
    printf("size of the character=%d\n",size_of_char);
    printf("size of the float=%f\n",size_of_float);
    printf("size of the double=%lf\n",size_of_double);
return 0;
}
