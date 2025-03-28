#include<iostream>
using namespace std;
char getUserchoice();
char getComputerchoice();
void   ShowChoice(char choice);
void    Choosewinner(char player,char computer);
int main(){
    char player;
    char computer;

    player=getUserchoice();
    cout<<"Your choice is: ";
    ShowChoice(player);
    computer =getComputerchoice();
    cout<<"computer choice is: ";
    ShowChoice(computer);
    Choosewinner(player,computer);

   
    return 0;
}
char getUserchoice(){
    char player;
    cout<<"Rock-paper-scissor\n";
    cout<<"*******************\n";
do{ cout<<"r=Rock\n";
    cout<<"p=paper\n";
    cout<<"s=scissor\n";
    cin>>player;
   
}while(player!='r'&& player!='p'&& player!='s');
    
return player;
    
}
char getComputerchoice(){
    srand(time(NULL));
    int num= rand()%3+1;
    switch(num){
        case 1: return'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return num;
}
void   ShowChoice(char choice){
    switch(choice){
        case 'r': 
        cout<<"Rock\n";
        break;
        case 'p':
        cout<<"Paper\n";
        break;
        case 's':
        cout<<"scissor\n";
        break;
    }
    
}
void    Choosewinner(char player,char computer){
    switch(player){
    case 'r':
        if(computer=='p')
        cout<<"You lose!\n";
        
        else if(computer=='s')
        cout<<"You win!\n";
        else 
        cout<<"It's a Tie\n";
        break;
    case 'p':
        if(computer=='p')
        {cout<<"It's a Tie!\n";
        }
        else if(computer=='s')
        cout<<"You lose!\n";
        else 
        cout<<"You Win\n";
        break;
    case 's':
        if(computer=='p')
        cout<<"You win!\n";
        else if(computer=='s')
        cout<<"It's a Tie!\n";
        else 
        cout<<"You lose\n";
        break;
    }
}
