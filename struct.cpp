#include<iostream>
struct car{
    std::string name;
    std::string colour;
    int year;
};
int main(){

    car car1;
    car1.name="Hyundai";
    car1.colour="Black";
    car1.year=2023;
    car car2;
    car2.name="Hyundai";
    car2.colour="Blue";
    car2.year=2023;


    std::cout<<car1.name<<'\n';
    std::cout<<car1.colour<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<'\n';
    std::cout<<car2.name<<'\n';
    std::cout<<car2.colour<<'\n';
    std::cout<<car2.year<<'\n';

    return 0;

}