#include<iostream>
using namespace std;
int mynum=3;
int Printnum(int num);

int main(){
    int mynum=1;
    cout<<mynum<<'\n';
    Printnum(mynum);
    cout<<::mynum<<'\n';
    return 0;
}

int Printnum(int num){
    int mynum=4;

    cout<<mynum<<'\n';
    return mynum;
    
}