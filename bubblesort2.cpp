#include<iostream>
void sort(int array[],int size);
int main(){

    int num[]={33,55,87,66,11,44,0,9,4,2,3,7,46,72,01,84,63};
    int size=sizeof(num)/sizeof(num[0]);
    sort(num,size);
    for(int element:num){
        std::cout<<element<<" ";
    }
}
void sort(int array[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}