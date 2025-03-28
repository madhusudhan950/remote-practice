//Type conversions can be done by Implicit and explicit implicit means compiler hanges the value by ASCII format internally and explicit can be done by user wanted to change the value to ASCII vise-versa

//Implicit
#include<iostream>
int main()
{
    /*
   // int x=3.14; //0.14 trunkated by the complier because we assign the value to the imteger
    std::cout<<x<<'\n';
    double y=(int)2.234;//0.234 trunckated by the user by using int variable in  double
    std::cout<<y<<'\n';
    char z=100;
    std::cout<<z<<'\n';
    int a=100;
    std::cout<<(char)a<<'\n';

*/
int questions_correct=8;
int Total_questions=10;
double score=questions_correct/(double)Total_questions*100;
std::cout<<score<<"%"<<'\n';
}