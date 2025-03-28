#include<iostream>
int searchFood(std::string Array[],int size,  std::string element);

int main(){
std::string foods[]={"burger","pizza","sandwitch","nuggets"};
int size=sizeof(foods)/sizeof(foods[0]);

int index;
std::string myfood;
    std::cout<<"Enter your food: ";
    std::getline(std::cin, myfood);
    index=searchFood(foods,size,myfood);
    if(index!=-1){
        std::cout<<myfood<<" is in index of "<<index;
    }
    else 
    std::cout<<"your food "<<myfood <<" is not in the menu";
    return 0;
}
int searchFood(std::string Array[],int size, std::string element){
for(int i=0;i<size;i++){
    if(Array[i]==element){
        return i;
    }
}return -1;



}