#include<iostream>
using namespace std;
class Human{
    public:
        std::string name="madhu";   //default attributes
        std::string work="student";//default attributes
        int age=24;//default attributes
    
        void eat(){
            cout<<"Eating\n";
        }
        void drink(){
            cout<<"Drinkking\n";
        }
        void sleep(){
            cout<<"sleeping";
        }

};


int main(){
    Human Human1;
    Human Human2;
    Human1.name="sudhan";//override attributes
    Human1.work="boy";   //override attributes
    Human1.age=23;      //override attributes
    //Human2.name;
    //Human2.work;   //default functions from public class
    //Human2.age;

    cout<<Human1.name<<'\n';
    cout<<Human1.work<<'\n';
    cout<<Human1.age<<'\n';

    Human1.eat();
    Human1.drink();
    Human1.sleep();

    cout<<Human2.name<<'\n';
    cout<<Human2.work<<'\n';
    cout<<Human2.age<<'\n';
    
    Human2.eat();
    Human2.drink();
    Human2.sleep();

    return 0;
}