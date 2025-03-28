#include<iostream>
using std::cout;
void bakePizza();
void bakePizza(std::string string1);
void bakePizza(std::string string1,std::string string2);
void bakePizza(std::string string1,std::string string2,std::string string3);
int main(){
   /* std::string name;
    cout<<"Enter your preferences: ";
    std::getline(std::cin,name);
    bakePizza(name);*/
    bakePizza("oninon","pepper","cheese");
}
void bakePizza(){
    cout<<"Here is your pizza";
}
void bakePizza(std::string string1){
    cout<<"Here is your "<<string1<<" pizza";
}
void bakePizza(std::string string1,std::string string2){
    cout<<"Here is your "<<string1<<" and "<<string2<<" pizza";
}
void bakePizza(std::string string1,std::string string2,std::string string3){
    cout<<"Here is your "<<string1<<", "<<string2<<" and "<<string3<<" pizza";
}