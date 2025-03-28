#include<iostream>
//To convert Fahrenheit to Celsius, you can use the formula °C = (°F - 32) × 5/9. 
//To convert Celsius to Kelvin, you can use the formula K = °C + 273.15. 
//To convert Fahrenheit to Kelvin, you can use the formula K = °F + 457.87. 
//The formula for converting Celsius to Fahrenheit is °F = (°C × 9/5) + 32
//using std::cout;
int main(){
    
int temp;
char unit;
double faren;
double cel;
double kel;
std::cout<<"************Temperature conversion*************\n";
std::cout<<"F=Farenheit\n";
std::cout<<"C=Celsius\n";
std::cout<<"K=Kelvin\n";
std::cout<<"Select the unit for conversion to:";
LABEL: std::cin>>unit;
if(unit=='F'||unit=='f'){
    std::cout<<"enter the degrees conver  celsius to  Farenheit :";
    std::cin>>temp;
    faren=(temp*1.8)+32;
    std::cout<<faren<<"degrees\n";
    
}
else if(unit=='C'||unit=='c'){
std::cout<<"Enter the degrees to convert farenheit to celsius:  ";
std::cin>>temp;
cel=(temp-32)/1.8;
std::cout<<cel<<"degrees\n";
}
else if(unit=='k'||unit=='K'){
    std::cout<<"Enter the degree to convert farenheit to kelvin:\n";
    std::cin>>kel;  //K = °F + 457.87
    kel= (temp-32)+5/9+273.15;
    std::cout<<kel<<"degrees\n";
}
else{
    std::cout<<"Enter only c or f\n";
    goto LABEL;
}
std::cout<<"*********************************************\n";
return 0;
}