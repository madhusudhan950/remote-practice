#include<iostream>
using std::cout;
using std::cin;
int main(){
    int i,j,k,n,z=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=z;k++){
        cout<<"*";
        }
          z+=2;  
            cout<<"\n";
    }
    
    return 0;

}