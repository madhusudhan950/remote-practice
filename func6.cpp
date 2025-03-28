#include<iostream>
using std::cin;
using std::cout;
double Volume (int length,int breadth,int height);
double Area(int length,int breadth);

int main(){
    double l,b,h,result1,result2;
    cout<<"Enter length of the reactangle: ";
    cin>>l;
    cout<<"Enter breadth of the reactangle: ";
    cin>>b;
    cout<<"Enter height of the reactangle: ";
    cin>>h;
    result1=Area(l,b);
    cout<<result1<<'\n';
    result2=Volume(l,b,h);
    cout<<result2;
}
double Area(int length,int breadth){
    return length*breadth;
}
double Volume (int length,int breadth,int height){
    return Area(length,breadth)*height;
}