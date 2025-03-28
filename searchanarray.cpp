#include<iostream>
using namespace std;
int searchArray(int array[],int size,int mynum);
int main(){
    int number[]={1,2,3,4,5,6,7,8,9,0,11,23};
    int size=sizeof(number)/sizeof(number[0]);
    int index,mynum;
    cout<<"Enter a element to search for: ";
    cin>>mynum;
    index=searchArray(number,size,mynum);
    if(index!=-1){
        cout<<mynum <<"is in"<<index<<" index";
    }
    else
    cout<<"no element found";
    return 0;
}
int searchArray(int array[],int size,int mynum){
int i;
    for( i=0;i<size;i++){
        if(array[i]==mynum)
        {
            return i;
        }
        
    }return -1;
}