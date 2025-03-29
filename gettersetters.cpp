//Abstraction = hiding unnecessary data from outside of a class
//getter = function that makes a private attributes READABLE
//setter = function that makes a private attributes WRITEABLE

#include<iostream>
class stove{
   // public:
    //int temperature=0;//changable temperature because its a public attribute.

    private:
    int temp=0;//  trying to change the error will popup that temp is private within the context.
                //so we will use getter function to get access
    public:
    stove(int temp){
        setTemperature(temp);
    }
    int getTemperature(){
        return temp;
    }
    void setTemperature(int temp){
        if(temp<0){
            this->temp=0;
        }
        else if(temp>=25){
            this->temp=25;
        }
        else{
        this->temp=temp;
        }
    }


};
int main(){

    stove stove(-100);
   // stove.temp=10000000;
   // std::cout<<stove.temp<<'\n';  //private error 
  //std::cout<<stove.setTemperature()<<'\n';//it will reads the value from private member
                                            //but not writeable.so we will use to write the changes setter.
  // stove.setTemperature(10);
    std::cout<<"This temperature is setting to:"<<stove.getTemperature()<<'\n';
    return 0;
}
