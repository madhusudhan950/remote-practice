#include<iostream>
#include<iomanip>
using namespace std;
void Showbalance(double balance);

double Deposit();

double Withdraw(double balance);

int main(){
    int choice;
    double balance=0;
do{
    cout<<"*****************\n";
    cout<<"1.Show Balance\n";
    cout<<"2.Deposit\n";
    cout<<"3.Withdrawl\n";
    cout<<"4.Exit\n";
    cin>>choice;
    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1:
            Showbalance(balance);
            break;
 
    
        case 2:
            balance+=Deposit();
                Showbalance(balance);

            break;
        case 3:
            balance-=Withdraw(balance);
            Showbalance(balance);
            break;

        case 4:
            cout<<"Thanks for visisting\n";
            break;
    default:
            cout<<"Enter correct choice\n";
   }
   
}while(choice!=4);
return 0;
}

void Showbalance(double balance){
    cout<<"Your balance is $"<<std::setprecision(2)<<std::fixed<<balance<<'\n';

}
double Deposit(){
    double amount=0;
    cout<<"Enter amount to be deposited: ";
    cin>>amount;
    if(amount>0){
    
        return amount;
    }
    else
    {
       cout<<"Thats not a valid amount!!!" ;
    }
    return 0;
    
}

double Withdraw(double balance){
    double amount=0;
    std::cout<<"Enter the amount to be withdraw: ";
    std::cin>>amount;
    if(amount>balance){
        cout<<"Insufficient balance\n";
    }
    else{
        return amount;
    }
    return 0;
    
  
}

