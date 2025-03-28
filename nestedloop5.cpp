#include<iostream>
using std::cout,std::cin;
int main(){
    int i,j,k,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(i==j||j==n-i)    //if(i==j||(i+j)=n+1)
                cout<<"*";
            else 
                cout<<" ";
         }
    cout<<"\n";
        }
    
    
/*for(i=1;i<n;i++){
    for(j=1;j<n;j++){
        if(j==i||i+j==n+1)
            cout<<"*";
        else 
            cout<<"0";
    }
    
    cout<<"\n"; 
    }*/
   return 0;
     
}
