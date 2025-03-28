#include<iostream>
int main(){
//cin=insertion operator
//cout extraction operator
    std::string name;
    int age;
    std::cout<<"Enter the value :"<<'\n';
    std::getline(std::cin>>std::ws,name);    //getline function is used of includes white spaces and next line characters between the two strings in single input
    std::cout<<"whats your age:"<<'\n';
    std::cin>> age;

    std::cout<<name<<'\n';
    std::cout<<age<<'\n';
    return 0;
}