//&&->both conditions are satisfied
//|| check of atleast one condition is true of two conditions
//! reverse the logical state of its operand
//example
#include<iostream>
int main(){
    int temp;
    std::cin>>temp;
    /*if(temp>=0 && temp<=40)
    std::cout<<"Temperature is good";
    else
    std::cout<<"Temperature is bad";
    */
   if(temp<=0||temp>=30)
   std::cout<<"Temperature is bad\n";
   else 
   std::cout<<"Temperature is good\n";
   bool sunny=true;
   if(!sunny)
   std::cout<<"It is sunny outside";
   else 
   std::cout<<"It is cloudy outside";

}