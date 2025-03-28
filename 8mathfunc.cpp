#include<iostream>
#include<cmath>
int main(){

    double x=-2;
    double y=3.9;
    double z=16;
    double a;
    double b;
    double c;
    double d,e;
    z=std::min(x,y);
    z=std::max(x,y);
    z=pow(x,y);
    a = sqrt(z);
    b=abs(y);
    c=round(y);
    d=ceil(y);
    e=floor(y);

    std::cout<<e<<'\n';
}