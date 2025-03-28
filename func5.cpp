#include<iostream>
using namespace std;
double Square(int length);
double Cube(int length);  

int main(){
    double length;
    cout<<"Enter the length: ";
    cin>>length;
    double area=Square(length);
    double cube=Cube(length);
    cout<<area<<'\n';
    cout<<cube<<'\n';

}
double Square(int length){
    return length*length;

}
double Cube(int length){
    return length*length*length;
}