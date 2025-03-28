#include<iostream>
#include<ctime>
using std::cout,std::cin;

int main(){
    int num;
    int guess;
 LABEL:     cout<<"guess number between 1-10:";
        cin>>num;
        srand(time(NULL));
        guess=rand()%10+1;
        if(num==guess)
        cout<<"Hurrah you win!\n";
        else
        cout<<"Try again!"<<"\n";
    goto LABEL;

}