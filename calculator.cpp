#include<iostream>
int main()
{
    char oper;
    double num2;
    double num1;
    double result;
    std::cout<<"**************CALCULATOR**************\n";
    std::cout<<"Select one operator in +-*/% :";
    std::cin>>oper;
    std::cout<<"Enter the value of number 1:";
    std::cin>>num1;
    std::cout<<"Enter the value of num2:";
    std::cin>>num2;
    switch(oper){

        case '+':
        result=num1+num2;
        std::cout<<"Result="<<result<<'\n';
        break;
        case '-':
        result=num1-num2;
        std::cout<<"REsult="<<result<<'\n';
        break;
        case '*':
        result=num1*num2;
        std::cout<<"Result="<<result<<'\n';
        break;
        case '/':
        result=num1/num2;
        std::cout<<"Result="<<result<<'\n';
        break;
        case '%':
        result=(int)num1%(int)num2;
        std::cout<<"Result="<<result<<'\n';
        break;
        default:
        std::cout<<"your selected operator is under maintainance";

    }

    std::cout<<"**************************************\n";
}