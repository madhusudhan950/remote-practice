#include<iostream>
int getDigits(const int number);
int sumofOdddigits(const std::string cardnumber);
int sumofEvendigits(const std::string cardnumber);
int main(){
    int result=0;
    std::string cardnumber;
    std::cout<<"Enter credit card number: ";
    std::cin>>cardnumber;
    result=sumofOdddigits(cardnumber)+sumofEvendigits(cardnumber);
    
    if(result%10==0)
    std::cout<<cardnumber<<"Card is valid!";
    else 
    std::cout<<cardnumber<<"Card is not valid!";    

return 0;
}
int getDigits(const int number){

//suppose number=18 18%10=8+    18/10=1%10=1    =>8+1=9
            return number % 10 + number / 10 % 10;
}
int sumofOdddigits(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1;i>=0;i-=2){
        sum+=getDigits(cardnumber[i]-'0');
       
    }
    return sum;

}
int sumofEvendigits(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-2;i>=0;i-=2){
        sum+=getDigits((cardnumber[i]-'0')*2);
        
    }
    return sum;

}