#include<iostream>
class Animals{
    public:
    bool alive=true;
    void eat(){
        std::cout<<"ANimal are eating\n";
    }
    void sleep(){
        std::cout<<"Animal are  sleeping\n";
    }
    
};
class Dog : public Animals{
    public:
    void bark(){
        std::cout<<"The dog is bow bow\n";
    }
   

};
class cat: public Animals{
    public:
    void meow(){
        std::cout<<"The cat is meow\n";
    }
};
int main(){

    Dog dog;
    cat cat;
    std::cout<<dog.alive<<'\n';
    dog.eat();
    dog.bark();
    cat.meow();

    return 0;
}