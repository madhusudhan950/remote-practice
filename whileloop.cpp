#include<iostream>
int main(){
    std::string name;
    int i=1;

   /* while(name.empty()){
        std::cout<<"Enter your name: ";
        std::getline(std::cin,name);

    }*/
   while(i<=100){ //1==1 always satisfies so  this condition remains infinite loop
    std::cout<<i<<".Hello\n";
    i++;
    if(i==10){
        std::cout<<"enter your name ";
        std::getline(std::cin, name);
        std::cout<<"Hello "<<name;
    }
   }
    
  /* while(i==i){ //1==1 always satisfies so  this condition remains infinite loop
    std::cout<<i<<".Hello\n";
    i++;
   }*/
   std::cout<<"Hello "<<name;
}