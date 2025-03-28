#include<iostream>
#include<ctime>
using std::cout,std::cin;
int main(){
    int num;
    int guess;
    int trail=0;
    cout<<"**********NUMBER GUESS GAME****************\n";
    srand(time(NULL));
    num=(rand()%100)+1;
    
    do{
        cout<<"Enter the guessed number(1-100):";
        cin>>guess;
        trail++;
        if(guess>num){
        cout<<"Higher number entered: "<<guess<<'\n';
    }
        else if(guess<num){
        cout<<"Lower number entered:"<<guess<<'\n';
        }
        else{
        cout<<"Hurrah you guessed it: "<<trail<<'\n';
         }
    }while(guess!=num);
    cout<<"********************************************\n";
    return 0;

}