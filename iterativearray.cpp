#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i;
    std::string students[]={"jhon","Edward","Henry","Tom","jack","andy"};
   /*for(i=0;i<=sizeof(students);i++){
    cout<<students[i]<<'\n';
  }*/
    
   
    /* while(students[]==0){
        cout<<student[]
    }*/


int size=(sizeof(students)/sizeof(string));//calculate the elements in an array
       
while(size>0){
    cout<<students[i]<<'\n';
    i++;
}
    
  
   return 0;
}