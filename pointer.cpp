#include<iostream>
int main(){
    std::string name="madhu";   //assigning value to the name
    int age=24;     //datatype of a pointer is should be same as the variable   *pAge=value     pAge=address
    std::string *pName=&name;   //holding address of name variable by pName container
    int *pAge=&age;
    std::string freepizza[5]={"1.pizza","2.pizza","3.pizza","4.pizza","5.pizza"};
    std::string *pFreepizza=freepizza;
    std::cout<<*pName<<'\n';          //call by reference   *=dereference
    std::cout<<name<<'\n';             //call by value
    std::cout<<&name<<'\n';            //holding address 
    std::cout<<*pAge<<"\n";
    std::cout<<pFreepizza<<'\n';
   // std::cout<<*pFreepizza;
}