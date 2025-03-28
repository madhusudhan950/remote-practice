#include<iostream>
void sort(int array[],int size);
int main(){
    int num[]={1,4,5,7,0,9,2,3,6,8};    //array declaration
    int size=sizeof(num)/sizeof(num[0]);    //index declaration
    sort(num,size);             //calling function of sort()
    for(int element:num){
    std::cout<<element<<" ";
    }
    
    
    return 0;
}
void sort(int array[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
       if(array[j]>array[j+1]){
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
            }
        }

    }
}