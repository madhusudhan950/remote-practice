#include<iostream>
using namespace std;
/*double Area(double area);
int main(){

    double Area(a);
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    
  

}
double Area(double area){
    return area*area*area;
}*/
double square(double length);
double cubic(double length);
int main(){
    double length;
    cout<<"Enter the value of length:";
    cin>>length;
    double area=square(length);
    double cube=cubic(length);
    cout<<"Square value of rectangle is "<<area<<'\n';
    cout<<"Cubic value of cube is"<<cube<<"\n";

}
double square(double length){
    double result=length*length;
    return result;
}
double cubic(double length){
    return length*length*length;
}