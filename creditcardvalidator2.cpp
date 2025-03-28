#include<iostream>
int getdigit(int cardnumber);
int oddnumber(std::string cardnumber);
int evennumber(std::string cardnumber);
int main(){
    int result=0;
    std::string cardnumber;
    std::cout<<"Enter credit card number: ";
    std::cin>>cardnumber;

    
    result=oddnumber(cardnumber)+evennumber(cardnumber);
    
    (result%10==0) ? std::cout<<"Valid" : std::cout<<"Not Valid";
}

int getdigit(int cardnumber){
        //18=18%10=8+18/10=1%10=1=>8+1=9
    return cardnumber%10+cardnumber/10%10;
}
int oddnumber(std::string cardnumber){
    int result=0;
    for(int i=cardnumber.size()-1;i>0;i-=2){
        result+=getdigit(cardnumber[i]-'0');
        

    }return result;
}
int evennumber(std::string cardnumber){
    int result=0;
    for(int i=cardnumber.size()-2;i>=0;i-=2){
        result+=getdigit((cardnumber[i]-'0')*2);
        

    }return result;
}


