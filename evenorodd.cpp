#include<iostream>
int main(){
    int num;
    std::cin>>num;
    /*int number;
    std::cin>>number;
    if(number%2==0)
    std::cout<<"even";
    else
    std::cout<<"odd";
    */
   num%2==0 ? std::cout<<"Even" : std::cout<<"odd";

    return 0;

}