#include<iostream>
class car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string colour;

        void accelerate(){
            std::cout<<"You step on accelerator\n";
        }

        void brake(){
            std::cout<<"you step on break\n";
        }


};



int main(){
    car car1;
    car1.make="ford";
    car1.model="Mustang";
    car1.year=2023;
    car1.colour="Black";

    std::cout<<car1.make<<'\n';
    std::cout<<car1.model<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<car1.colour<<'\n';
    
    car1.accelerate();
    car1.brake();

}