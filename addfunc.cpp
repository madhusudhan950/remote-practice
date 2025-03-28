#include<iostream>
using std::cout;
using std::cin;
void sumOftwonum(int sum1,int sum2,int sum3);
int main(){
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    sumOftwonum(a,b,c);
}
void sumOftwonum(int sum1,int sum2,int sum3){
    sum3=sum1+sum2;
    cout<<"sum of "<<sum1<<" and "<<sum2<<"="<<sum3;

}
