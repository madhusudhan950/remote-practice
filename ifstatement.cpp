#include<iostream>
int main(){
    
   /* int age;
    std::cout<<"Enter your age"<<'\n';
    std::cin>>age;
    if(age<0){
        std::cout<<"you are not born yet "<<age<<'\n';
     }
    else if(age>=18&&age<=100){
        std::cout<<"You are major "<<age<<'\n';
    }
    
    else if(age>=101){
        std::cout<<"you are ghost "<<age<<'\n';
    }
    else{
        std::cout<<"You are minor "<<age<<'\n';
    }*/
   int month;
   std::cout<<"Enter the value of month:";
   std::cin>>month;
   if(month==1)
   std::cout<<"january";
   else if (month==2)
   std::cout<<"February";
   else if (month==3)
   std::cout<<"March";
    else if (month==4)
    std::cout<<"Apr";
    else if (month==5)
    std::cout<<"May";
    else if(month==6)
    std::cout<<"June";
    else if(month==7)
    std::cout<<"July";
    else if (month==8)
    std::cout<<"August";
    else if(month==9)
    std::cout<<"September";
    else if(month==10)
    std::cout<<"October";
    else if (month==11)
    std::cout<<"November";
    else if(month==12)
    std::cout<<"December";
    else
    std::cout<<"months selecting 1-12 only";

    return 0;
}