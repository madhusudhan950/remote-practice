#include<iostream>
using std::cout,std::cin;
int main(){
    int i,j,n;
cout<<"Enter the value of n:";
cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n)
                cout<<"*";
            else
                cout<<"0";
        }
        cout<<"\n";
    }
}