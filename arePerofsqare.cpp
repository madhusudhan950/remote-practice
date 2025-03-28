#include<iostream>
using std::cout,std::cin;
//double Peri(double l,double b);
//double Area(double l,double b);
double Peri(double l,double b){
        return 2*(l+b);}
    
double Area(double l,double b){
        return l*b;}
/*int main(){
   
    double length,breadth;
    cout<<"Enter the length ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    double perimeter=Peri(length,breadth);
    double area=Area(length,breadth);
    cout<<"Perimeter of a rectangle is "<<perimeter<<'\n';
    cout<<"Area of a rectangle is "<<area<<'\n';
}*/


int main(){
    std::string n;
    double length,breadth;
LABEL: cout<<"Select one option: \n";
        cout<<"1.Area of Rectangle: \n";
        cout<<"2.Perimeter of Rectangle: \n";

    cin>>n;
    switch (n)
    {
    case 1: {
    cout<<"Enter the length ";
    std::getline(std::string(cin, n));
    cout<<"Enter the breadth: ";
    cin>>breadth;
    double area=Area(length,breadth);
    cout<<"Area of a rectangle is "<<area<<'\n';}
         break;
         exit(0);
    
    case 2:{
    cout<<"Enter the length ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
    double perimeter=Peri(length,breadth);
    cout<<"Perimeter of a rectangle is "<<perimeter<<'\n';}
        break;
        exit(0);
    default :{
        cout<<"Enter 1 or 2\n";
        break;
        return 0;
        
    }

   
    }
    goto LABEL;

    

}