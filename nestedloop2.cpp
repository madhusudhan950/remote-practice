#include<iostream>
using std::cout;
using std::cin;
int main(){
     int n;
     int i,j,k;

     cout<<"Enter the Value of n: ";
     cin>>n;
     for(i=1;i<n;i++){   //for getting next line
     for(j=n;j>i;j--){   //for getting spaces
          cout<<" ";
     }
     for(k=1;k<=i;k++){ //for printing stars
          cout<<"*";
     }
          cout<<"\n";
     }
     return 0;

}
   
    
    

