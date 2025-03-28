#include<iostream>
int main(){
    for(int i=0;i<10;i++){
       
        if(i==6){           //break condition is used to break the loop
                            //continue condition is used to skip the condition in loop
            continue;
        }
        std::cout<<i<<"\n";
    }
    return 0;
}