#include<iostream>
class Pizza{
    public:
        std::string topping;
        std::string topping2;
        std::string topping3;
        Pizza(){

            

        }
      
        Pizza(std::string topping){

            this->topping=topping;

        }
        Pizza(std::string topping,std::string topping2){

            this->topping=topping;
            this->topping2=topping2;

        }
        Pizza(std::string topping,std::string topping2,std::string topping3){

            this->topping=topping;
            this->topping2=topping2;
            this->topping3=topping3;

        }

};
int main(){
    Pizza pizza;
    Pizza pizza1("pepporoni");
    Pizza pizza2("pepporoni","onion");
    Pizza pizza3("onion","pepporoni","cheesy");
    std::cout<<pizza<<'\n';
    std::cout<<pizza1.topping<<'\n';
    std::cout<<pizza2.topping<<" "<<pizza2.topping2<<'\n';
    std::cout<<pizza3.topping<<" "<<pizza3.topping2<<" "<<pizza3.topping3<<'\n';
    
    return 0;
}