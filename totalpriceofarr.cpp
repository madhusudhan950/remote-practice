
#include<iostream>
double getTotal(double prices[],int size);
int main(){
    double prices[]={1.12,2.23,4.45,5.43,4.32,3.21,2.12};
    int size=sizeof(prices)/sizeof(double);
    double Total=getTotal(prices,size);
    std::cout<<"Total price is:"<<Total;
    
    
    return 0;
}
double getTotal(double prices[],int size){
    double total=0;
    for(int i=0;i<size;i++){
        total+=prices[i];

    }return total;

}