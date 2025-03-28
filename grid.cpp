#include<iostream>
using namespace std;
int main(){
char space[9]={'A','B','C','E','D','F','G','H','I'};

cout<<"     |     |     \n";
    cout<<"  "<<space[0]<<"  "<<"|"<<"  "<<space[1]<<"  "<<"|"<<"  "<<space[2]<<"  "<<'\n';
    cout<<"     |     |     \n";
    cout<<"__________________\n";
    cout<<"     |     |     \n";
    cout<<"  "<<space[3]<<"  "<<"|"<<"  "<<space[4]<<"  "<<"|"<<"  "<<space[5]<<"  "<<'\n';
    cout<<"     |     |     \n";
    cout<<"__________________\n";
    cout<<"     |     |     \n";
    cout<<"  "<<space[6]<<"  "<<"|"<<"  "<<space[7]<<"  "<<"|"<<"  "<<space[8]<<"  "<<'\n';
    cout<<"     |     |     \n";
    cout<<'\n';
return 0;
}