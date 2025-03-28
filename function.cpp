#include<iostream>
/*void func1(std::string chinnu);     //function is a reusable block of code
int main(){                         //func1=function name
                                    //(std::string chinnu)=function parameter parameter doesn't require a specific name to declaring
std::string name="madhu";
    func1(name);
    return 0;
}
void func1(std::string chinnu){
    std::cout<<"Function name is "<<chinnu;
}*/


void func1(std::string name,int age,int clas);

int main(){
    std::string name="madhu";
    int age=17,clas=10;

    func1(name,age,clas);
    return 0;
}
void func1(std::string name,int age,int clas){
    std::cout<<"hello "<<name<<'\n';
    std::cout<<"Your age "<<age<<'\n';
    std::cout<<"you are in "<<clas<<"th class\n";
}