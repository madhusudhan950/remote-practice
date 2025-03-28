#include<iostream>
#include<ctime>
using std::cout;
using std::cin;
int main(){
    int num,guess,tries=1;
LABEL:  cout<<"Enter the number between 1-6 negative numbers and above 6 numbers are not allowed: ";
    cin>>num;
    srand(time(NULL));
    guess=(rand()%6)+1;
   
    if(num<1){
        cout<<"Enter the number between 1-6 only!!! negative number is not allowed\n";
    }
    else if(num>6){
        cout<<"Enter number between 1-6 only!!!\n";
    }
    else if(num>guess)
    cout<<"Entered number is too high"<<num<<'\n';
    else if(num<guess)
    cout<<"Entered number is too low: "<<num<<'\n';
    else if(num==guess){
    cout<<"Hurrah You win in "<<tries<<"tries";
    exit(0);
    }
    
    
    tries++;
    goto LABEL;
}