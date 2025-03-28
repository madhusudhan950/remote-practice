#include<iostream>
#include<iomanip>
using namespace std;
double Showbalance(double balance);
double Deposit();
double Withdraw(double balance);
int main(){
    double balance=0;
    int choice;
do{ cout<<"********************\n";
    cout<<"Enter your choice:\n ";
    cout<<"********************\n";
    cout<<"1.Show Balance\n";
    cout<<"2.Deposit\n";
    cout<<"3.Withdraw\n";
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
        cout<<"Thanks for visiting!!!";
        break;
        default:
        cout<<"enter the correct choice\n";
    }}while(choice!=4);
    return 0;
}
double Showbalance(double balance){
    cout<<"Your current Balance is $"<<setprecision(2)<<fixed<<balance<<'\n';
    return 0;
}
double Deposit(){
    double amount=0;
    cout<<"Enter the amount to deposit: ";
    cin>>amount;
    if(amount<0){
        cout<<"Enter valid  amount\n";
    }
    else{
    return amount;
    }
    return 0;
}
double Withdraw(double balance){
    double amount=0;
    cout<<"Enter the amount to be withdrawl:";
    cin>>amount;
    if(amount>balance){
        cout<<"Insufficient Balance\n";
    }
    else if(amount<0){
        cout<<"Enter valid amount\n";
    }
    else{
    return amount;
    }
    return 0;
}

