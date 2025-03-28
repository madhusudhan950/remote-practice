#include<iostream>
#include<cmath>
int main(){
    double a,b,c;

    std::cout<<"ENter the value of A:"<<'\n';
    std::cin>>a;
    std::cout<<"ENter the value of B:"<<'\n';
    std::cin>>b;
    //c=sqrt((a*a)+(b*b)); or 
   // a=pow(a,2);
   // b=pow(b,2);
   // c=sqrt(a+b);
   c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Hypotenuse of the Triangle is "<<c<<'\n';

    
    return 0;

}