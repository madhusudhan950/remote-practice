#include<iostream>
#include<ctime>
using namespace  std;
char getuserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);

int main(){
    char player;
    int computer;
    player=getuserChoice();
    cout<<"Your choice is :";
    showChoice(player);
    computer=getComputerChoice();
    cout<<"Computer choice is :";
    showChoice(computer);
    chooseWinner(player,computer);



    return 0;
}
char getuserChoice(){
    char player;
    cout<<"Rock-paper-scissor\n";
    cout<<"********************\n";
   do{ cout<<"choose one of theese:\n";
    cout<<"'r' for Rock\n";
    cout<<"'p' for paper\n";
    cout<<"'s' for scissor\n";
     cin>>player;
     std::cin.clear();
     fflush(stdin);
}while(player!='r'&& player!='s'&& player!='p');
    return player;
}
char getComputerChoice(){
    int computer;
    srand(time(0));
    computer=rand()%3+1;
    
    switch(computer){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return computer;
}
void showChoice(char choice){
    switch(choice){
        case 'r':
        cout<<"Rock\n";
        break;
        case 'p':
        cout<<"Paper\n";
        break;
        case 's':
        cout<<"Scissor\n";
        break;
    }


}
void chooseWinner(char  player,char computer){
    switch(player){
    case 'r':
        if(computer=='r')
        cout<<"It's a Tie";
        else if(computer=='p')
        cout<<"you Loose";
        else
        cout<<"you win";
    break;
    case 'p':
        if(computer=='p')
        cout<<"Its a Tie";
        else if(computer=='s')
        cout<<"You Lose";
        else 
        cout<<"You win";
    break;
    case 's':
        if(computer=='s')
        cout<<"Its a Tie";
        else if(computer=='r')
        cout<<"You lose";
        else 
        cout<<"you win";
    break;
    }

}