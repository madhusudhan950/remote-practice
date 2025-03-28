#include<iostream>
int getTotal(int numbers[],int size);
int main(){
    int numbers[]={23,45,67,45,66,9,11,023,87,55};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int Total=getTotal(numbers,size);
    std::cout<<"Total numbers is: "<<Total;
    
    return 0;

}
int getTotal(int numbers[],int size){
    int total=0;
   for(int i=0;i<size;i++){
    total+=numbers[i];
   }return total;
}