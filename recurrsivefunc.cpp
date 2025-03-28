#include<iostream>

void func(int num);
int main(){
    
    func(10);
    
    
    return 0;

}
void func(int num){
    if(num>0){
        
        std::cout<<"function\n";
        func(num-1);
    }
}