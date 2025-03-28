#include<iostream>
void Printinfo(std::string name,int age);
int main(){
    
    std::string name="madhu";
    int age=25;
    Printinfo(name,age);
}
//void Printinfo(std::string name,int age){   //with out const func it will changes the funtion values 
                                            //by the replacing of main function values
void Printinfo(const std::string name,const int age){   //it will pop-ups the error that contains read-only error
                                                        //parameters of name & age.. it dont have permission to change the main function paramters of name &age.
   name="sudhan";
    age=0;
    

    std::cout<<name<<'\n';
    std::cout<<age<<'\n';
}