#include<iostream>
int main(){
    char grade;
    std::cout<<"enetr your grade:";
    std::cin>>grade;

    switch(grade){
    case 'A':
    std::cout<<"You did great";
    break;
    case 'B':
    std::cout<<"You did good";
    break;
    case 'C':
    std::cout<<"you did better";
    break;
    case 'D':
    std::cout<<"you did okay";
    break;
    case 'E':
    std::cout<<"You did not Better";
    break;
    case 'F':
    std::cout<<"Better luck next time";
    break;
    default:
    std::cout<<"Enter grade between capital(A-F)";
    }
    return 0;
}