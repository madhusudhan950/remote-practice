#include<iostream>
int main(){
    //terenary operator ? : replacement to an if /else statements
   // int grade;
   // std::cin>>grade;
    /*if(grade>=60)
    std::cout<<"You Pass";
    else
    std::cout<<"You fail";
    
    */
  // grade>=60 ? std::cout<<"You Pass" : std::cout<<"you fail";

  bool hungry=1 ;
  
 // hungry ? std::cout<<"You are Hungry" :std::cout<<"you are full";
std::cout<<(hungry ? "You are Hungry": "you are full");
    return 0;

} 