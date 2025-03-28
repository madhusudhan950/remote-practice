#include<iostream>
using namespace std;
int main(){

   string students[]={"patrik","Henry","Robin","Ritwik","corbo","Ricky"};
   
for(std::string name : students){

   cout<<name<<'\n';
}
}


/*for (data_type  variable_name : container_name) {

   operations using variable_name

}*/