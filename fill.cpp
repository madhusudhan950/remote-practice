#include<iostream>
int main(){
   int size;
   const int i=3;
   std::cout<<"enter the item count:";
   std::cin>>size;
   // std::string food[]={"pizza","pizza","pizza","pizza"};
   std::string food[i*size];
   fill(food,food+size,"pizza");
   fill(food+size,food+size*2,"sandwitch");
   fill(food+size*2,food+size*3,"burger");
    for(std::string item:food){
        std::cout<<item<<'\n';
    }
}