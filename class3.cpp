#include<iostream>
class Car{
    public:
    std::string make;
    std::string model;
    int year;
    std::string colour;
    Car(std::string make, std::string model, int year, std::string colour){
    this->make=make;
    this->model=model;
    this->year=year;
    this->colour=colour;
    }
};
int main(){
    Car car1("Ford","Mustang",2023,"Black");

    std::cout<<car1.make<<'\n';
    std::cout<<car1.model<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<car1.colour<<'\n';

}