#include<iostream>
using std::cout;
using std::cin;
int main(){
    int i,j,k,n;
cout<<"enter the value of n:";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==(n/2)+1||j==(n/2)+1){
        cout<<"*";
        }
        else{
            cout<<"0";
        }
    }
    cout<<"\n";
}
}