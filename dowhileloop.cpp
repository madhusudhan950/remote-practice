#include<iostream>
int main(){
    int number; //num is not declared so it internally initializes to zero 0
    std::string name;

 //using while loop
   /* std::cout<<"please Enter the number: ";
    std::cin>>number;       //number initializes to user

    while(number<0){
        std::cout<<"please Enter the positive number: ";
        std::cin>>number;
    }*/
    //executing the same top condition using do while loop

    do{
        std::cout<<"please Enter the positive number: ";
        std::cin>>number;
    }while(number<0);       //; is mandatory  for ending of while condition


    std::cout<<"Your Number is "<<number;
    
   //std::cout<<"please Enter your name please ";
   //std::getline(std::cin, name);
   /*do{
    std::cout<<"please Enter your name please ";
    std::getline(std::cin, name);
   }while(name.empty());
   std::cout<<"Hello "<<name;
   */
  return 0;
}