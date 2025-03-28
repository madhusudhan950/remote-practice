#include<iostream>
#include<ctime>
using std::cout;
int main(){
    /*srand(time(NULL));      //num=rand() prints random numbers so we modulus num=rand()%6 that o/p number with 6 we will getting the o/p as 0-5 and dice contains 1-6 number so we will add the number +1 with num=((rand()%6)+1)then the o/p is 1-6 with random o/ps
    int num=(rand()%6)+1;
    cout<<num;
    */
   srand(time(NULL));
   int num1=(rand()%6)+1;
   int num2=(rand()%6)+1;
   int num3=(rand()%6)+1;
   cout<<num1<<'\n';
   cout<<num2<<'\n';
   cout<<num3<<'\n';
}