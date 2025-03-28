#include<iostream>
using std::string;
using std::cout;
void func1(string name,int age,int clas);
int main(){
   string name="madhu";
    int age=20;
    int clas=10;
    func1(name,age,clas);
}
void func1(string name,int age,int clas){
    cout<<"your "<<name<<'\n';
    cout<<"your "<<age<<'\n';
    cout<<"your "<<clas<<'\n';
}
