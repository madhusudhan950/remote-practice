#include<iostream>
enum day{sunday=0,monday=1,tuesday=2,wednesday=3,
            thursday=4,friday=5,saturday=6};
int main(){
    
    day today=tuesday;

    switch(today){
        case sunday:
        std::cout<<"Its sunday";
        break;
        case monday:
        std::cout<<"Its monday";
        break;
        
        case 2: //it is defined as numbers as well as strings
        std::cout<<"Its tuesday";
        break;
        
        case wednesday:
        std::cout<<"Its wednesday";
        break;
        
        case thursday:
        std::cout<<"Its thursday";
        break;
        

        case friday:
        std::cout<<"Its friday";
        break;
        
        case saturday:
        std::cout<<"Its saturday";
        break;
        
       
    }
    
    return 0;
}