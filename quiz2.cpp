#include<iostream>
int main(){
    std::string Questions[]={"1.What is RAM?",  //i=0
                          "2.What  is ROM?",    //i=1
                          "#.What is HDD?",     //i=2
                          "4.What  is SSD?"};   //i=sizeof(Questions)/sizeof(Questions[0])
    std::string Options[][4]={{"A. Random access memory","B. Random accessbility memory","C. Read access memory","D. None of the above"},//j=00,01,02,03
                          {"A. Read online memory","B. Ramdom only memeory","C. Read-only memory","D. None of the above"},//j=10,11,12,13
                          {"A. Hard disk disk","B. Hard drive drift","C. Hard drift dive","D. Hard disk drive"},//j=20,21,22,23
                          {"A. Solid  states drive","B. Solide spectacle drive","C. Solid State drive","D. Soft disk  drive"}};//j=30,31,32,33
    char Answers[]={'A','C','D','C'};
    int size=sizeof(Questions)/sizeof(Questions[0]) ;
    char Guess;
    int Score=0;
for(int i=0;i<size;i++){
    std::cout<<"**************************\n";
    std::cout<<Questions[i]<<'\n';
    std::cout<<"**************************\n";
    for(int j=0;j<sizeof(Options[i])/sizeof(Options[i][0]);j++){
        std::cout<<Options[i][j]<<'\n';
            
    }
    std::cin>>Guess;
    Guess=toupper(Guess);
    if(Guess==Answers[i]){
    std::cout<<"CORRECT"<<'\n';
    Score++;
    }
    else{
    std::cout<<"WRONG"<<'\n';
    std::cout<<"Correct Option is "<<Answers[i]<<'\n';
    }
}
std::cout<<"Your Score is: "<<Score<<'\n';      
std::cout<<"Your Percentage is: "<<Score/double(size)*100<<"%"<<'\n';
     

}