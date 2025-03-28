#include<iostream>
#include<ctime>
using std::cout;
int main(){
    int r;
    srand(time(NULL));
    r=rand()%5+1;
    
    switch(r){
    case 1:
     cout<<"You Win 100 Rs";
    break;
    case 2:
     cout<<"You Win 200 Rs";
    break;
    case 3:
     cout<<"You Win 300 Rs";
    break;
    case 4:
     cout<<"You Win 500 Rs";
    break;
    case 5:
     cout<<"You Win 1000 Rs";
    break;
    }
}