#include<iostream>
#include<ctime>

using namespace std;

void drawBox(char* s);
void Player(char* s,char player);
void Computer(char* s,char computer);
bool Winner(char*s ,char player,char computer);
bool Tie(char* s);
int main(){
    char s[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player='x';
    char computer='O';
    bool running=true;
    drawBox(s);
    while(running){
    
    Player(s,player);
    drawBox(s);
    if(Winner(s,player,computer)){
        running=false;
        break;
    }
    else if(Tie(s)){
        running =false;
        break;

    }
    
    Computer(s,computer);
    drawBox(s);
    if(Winner(s,player,computer)){
        running=false;
        break;
    }
    else if(Tie(s)){
        running =false;
        break;

    }
    
    }
}
void drawBox(char* s){
cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';    
cout<<"  "<<s[0]<<"  "<<"|"<<"  "<<s[1]<<"  "<<"|"<<"  "<<s[2]<<"  "<<'\n';
cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
cout<<"-----"<<"|"<<"-----"<<"|"<<"-----"<<'\n';
cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
cout<<"  "<<s[3]<<"  "<<"|"<<"  "<<s[4]<<"  "<<"|"<<"  "<<s[5]<<"  "<<'\n';
cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
cout<<"-----"<<"|"<<"-----"<<"|"<<"-----"<<'\n';
cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
cout<<"  "<<s[6]<<"  "<<"|"<<"  "<<s[7]<<"  "<<"|"<<"  "<<s[8]<<"  "<<'\n';
cout<<"     "<<"|"<<"     "<<"|"<<"     "<<'\n';
}
void Player(char* s, char player){
    int number;
   do{cout<<"Enter the place(1-9):";
    cin>>number;
    number--;
    if(s[number]==' '){
        s[number]=player;
        break;
    }
    }while(number < 0 || number > 8);

    
}
void Computer(char* s,char computer){
    int number;
    srand(time(0));
    while(true){
        number=rand() % 9;
        if(s[number]==' '){
            s[number]=computer;
            break;
        }  
    }

}
bool Winner(char*s ,char player,char computer){
    if((s[0]!=' ')&&(s[0]==s[1]&&s[1]==s[2]))
    (s[0]==player)?cout<<"YOU WIN\n":cout<<"YOU LOSE";
    else if((s[3]!=' ')&&(s[3]==s[4]&&s[4]==s[5]))
    (s[3]==player)?cout<<"YOU WIN\n":cout<<"YOU LOSE";
    else if((s[6]!=' ')&&(s[6]==s[7]&&s[7]==s[8]))
    (s[6]==player)?cout<<"YOU WIN\n":cout<<"YOU LOSE";
    else if((s[0]!=' ')&&(s[0]==s[3]&&s[3]==s[6]))
    (s[0]==player)?cout<<"YOU WIN\n":cout<<"YOU LOSE";
    else if((s[1]!=' ')&&(s[1]==s[4]&&s[4]==s[7]))
    (s[1]==player)?cout<<"YOU WIN\n":cout<<"YOU LOSE";
    else if((s[2]!=' ')&&(s[2]==s[5]&&s[5]==s[8]))
    (s[2]==player)?cout<<"YOU WIN\n":cout<<"YOU LOSE";
    else{
        return false;
    }
    return true;
}
bool Tie(char* s){
    for(int i=0;i<9;i++){
        if(s[i]==' '){
            return false;
        }
    }
    cout<<"Its  a Tie\n";
    return true;
}