#include<iostream>
int main(){
    std::string Questions[]={"1.Who invented C++?",
                             "2.What is Deprecessor?;",
                             "3.Which Year was created C++?",
                             "4.Is the Earth flat?"};
    std::string Options[][4]=   {{"A.Guido van Russum","B. Bjarne stroustrup","C.Jhon Carmark","D.Mark Jucker Berg"},
                                {"A. C","B. C++","C. C--","D. B++"},
                                {"A. 1969","B. 1948","C. 1985","D. 1989"},
                                {"A.Yes","B. No","C. Maybe","D. Sometimes"}};
    char Answer[]={'B','A','C','A'};
    int size=sizeof(Questions)/sizeof(Questions[0]);
    char guess;
    int score=0;
    
    for(int i=0;i<size;i++){
        std::cout<<"********************\n";
        std::cout<<Questions[i]<<'\n';
        std::cout<<"********************\n";
        
        for(int j=0;j<sizeof(Options[i])/sizeof(Options[i][0]);j++){
            std::cout<<Options[i][j]<<'\n';
        }
        std::cin>>guess;
        guess=toupper(guess);
            if(guess==Answer[i]){
                std::cout<<"CORRECT!"<<'\n';
                score++;
            }
            else{
                std::cout<<"WRONG!"<<'\n';
                std::cout<<Answer[i]<<'\n';
            }
    }
    std::cout<<"Your score is: "<<score<<"\n";
    std::cout<<"Your Percentage is "<<score/(double)size*100<<"%";
    

}