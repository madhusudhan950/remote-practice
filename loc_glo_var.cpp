#include<iostream>
 //global declaration
 /*int num=14;
int MyNum();
int main(){
   // int num=11;   //local declaration in main function it requires function parameters in function declaration,function definition and calling function
    MyNum();

}
int MyNum(){
   //int num=13;
    std::cout<<num;
    return num;
}*/
//local declaration in main function
/*int Mynum(int num);
int main(){
    int num=13;
    Mynum(num);
}
int Mynum(int num){
   std::cout<<num;
    return num;
}*/
//local declaration with in a scope
int Mynum();
int main(){
    Mynum();
}
int Mynum(){
    int num=13; //declaration of num variable in function declaration
    std::cout<<num;
    return num;
}
