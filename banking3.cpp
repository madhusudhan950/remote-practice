#include<iostream>
using namespace std;
double showBalance(double balance);
double Deposit();
double Withdraw(double balance);


int main(){
    double balance=0;
    int choice;
   std::cin.clear();
   fflush(stdin);

    do{
        cout<<"Enter the choice:\n";
        cout<<"1.Show balance\n";
        cout<<"2.Deposit Amount\n";
        cout<<"3.Withdraw Amount\n";
        cout<<"4.Exit\n";
        cin>>choice;
    switch(choice){
        case 1:
        showBalance(balance);
        break;
        case 2:
        balance+=Deposit();
        showBalance(balance);

        break;
        case 3:
        balance-=Withdraw(balance);
        showBalance(balance);

        break;
        case 4:
        cout<<"Thanks you for visiting\n";
        break;

    }}while(choice!=4);
}

double showBalance(double balance){
    cout<<"Your Balance:"<<balance<<'\n';
    return 0;
}
double Deposit(){
    double amount=0;
   cout<<"Enter amount to deposit:";
   cin>>amount;
   if(amount<0){
    cout<<"Invalid amount!!!\n";
   }
   else{
   return amount;
    }
    return 0;
}
double Withdraw(double balance){
   double amount=0;
   cout<<"Enter amount to withdraw:";
   cin>>amount;
   if(amount>balance){
    cout<<"Insufficient funds\n";

   }
   else if(amount<0){
    cout<<"invalid amount\n";
   }
   else
   {
    
    return amount;
   }
   return 0;
}