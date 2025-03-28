#include<iostream>

struct car{
    std::string name;
    std::string colour;
    int year;
};
void printcar(car car);
void paintcar(car &car,std::string colour);
int main(){

    car car1;
    car1.name="Hyundai";
    car1.colour="Black";
    car1.year=2023;
    car car2;
    car2.name="Hyundai";
    car2.colour="Blue";
    car2.year=2023;

std::cout<<&car1<<'\n';
paintcar(car1,"silver");
printcar(car1);
std::cout<<"\n";
paintcar(car2,"gold");
printcar(car2);


    
    return 0;

}
void printcar(car car){//origianal address of a car
    std::cout<<&car<<'\n';//it creates copies the structure with different address.
    std::cout<<car.name<<'\n';
    std::cout<<car.colour<<'\n';
    std::cout<<car.year<<'\n';
}
void paintcar(car &car,std::string colour){
    car.colour=colour;
}