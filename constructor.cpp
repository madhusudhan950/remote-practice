#include<iostream>

class Student{
    public:
        std::string name;
        int age;
        double per;

        Student(std::string x,int y,double  z){
       /* this-> name=name;
        this->age=age;
        this->per=per;*/

        name=x;
        age=y;
        per=z;
        }

};
int main(){
    Student student1("madhu",23,58.3);
    Student student2("sudhan",23,58.3);

    

    std::cout<<student2.name<<'\n';
    std::cout<<student2.age<<'\n';
    std::cout<<student2.per<<'\n';
    return 0;
}