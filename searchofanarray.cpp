#include<iostream>
using namespace std;
int searchArray(int array[],int size,int element);
int main(){

    int num[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(num)/sizeof(num[0]);
    int index,mynum;
    cout<<"Enter the element to search for: ";
    cin>>mynum;
    index=searchArray(num,size,mynum);
    
    if(index!=-1){
        cout<<mynum<<" is in index of "<<index;
    }
    else{    
    cout<<"No element found";
    }
    

    return 0;
}
int searchArray(int array[],int size,int element){

    for(int i=0;i<size;i++){
       if(array[i]==element){
         return i;
        }
    }
    return -1;

}