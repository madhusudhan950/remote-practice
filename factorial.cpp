#include<iostream>
void fact(int num);
int facts(int num);
int main(){
    facts(5);
    std::cout<<facts(5);
    return 0;
    
}
void fact(int num){
    int result=1;
    for(int i=1;i<=num;i++){
        result=result*i;
        std::cout<<result<<'\n';        //iterative function
    }
    
}
int facts(int num){
   
    if(num>1){
        return num*facts(num-1);    //recursive function
    }
    else{
        return 1;
    }
    
    
}        