#include <iostream>
#include<string>
#include<vector>
namespace first{
   int x=10;

}
namespace second{
    int x=7;
 
 }
 
 typedef std::vector<std::pair<std::string,int>> pairlist_t;
//typedef std::string text_t;     using instead of typedef keyword by replacing using calling func=called function(using text_t=std::string;) keyword
using text_t=std::string;
typedef int number_t; 
//using std::cout;
//using std::string;
//using std::endl;
//using namespace std;


int main(){
// comment-single line

/*multi 
line comment


    std::cout<<"hello world"<<std::endl;
    std::cout<<"Its really good"<<std::endl;

int x=6;
double y=6.58;
//x=5;
std::cout<<x<<std::endl;
std::cout<<y<<std::endl;
std::cout<<x+y<<std::endl;


int roll=34;
std::string name="madhu";
float percentage=69.30;
char grade='B';


std::cout<<roll<<std::endl;
std::cout<<"Hello "<<name<<std::endl;
std::cout<<percentage<<std::endl;
std::cout<<grade<<std::endl;


long long int number=6301507552;//integer contains 4 bytes
std::string name="oneplus";
float price=45999.79;
char grade='A';
std::string addr="9-2-4,katthulagudem,pithapuram,533-450";


std::cout<<"phone="<<number<<std::endl;
std::cout<<"name="<<name<<std::endl;
std::cout<<"price="<<price<<std::endl;
std::cout<<"grade="<<grade<<std::endl;
std::cout<<"Grade="<<addr<<std::endl;

const int x=6; //read only variable it will not update with 7
x=7;
std::cout<<x<<std::endl;

doublr pi=3.14;//const double pi=3.143456;
//pi=2345.987
double radius=10;
double circumference=2*pi*radius*radius;
std::cout<<circumference<<"cm"<<std::endl;

int x=5;
std::cout<<"first namespace "<<first::x<<'\n';  //-> instead of scope declaration std::cout<<"first namespace "<<first::x<<'\n'; we will write as simple like multi line command 
using namespace first;
std::cout<<x; <-//
std::cout<<"second namespace "<<second::   x<<'\n';
std::cout<<"local "<<   x<<'\n';

//using namespace first;
using namespace second;
std::cout<<x;


std::string name="madhu";
std::string surname="anupoju";
std::string fathers_name="Rajasekhar";
std::string mothers_name="parvathi";

std::cout<<name<<std::endl;
std::cout<<surname<<std::endl;
std::cout<<fathers_name<<std::endl;
std::cout<<mothers_name<<std::endl;

using std::string;
using std::cout;
using std::endl;

string name="madhu";
string surname="anupoju";
string father_name="rajasekhar";
string mother_name="parvathi";
cout<<name<<endl;
cout<<surname<<endl;
cout<<father_name<<endl;
cout<<mother_name<<endl;

//using std::string;
//using std::cout;
//string name="madhu";
//cout<<name;
*/


//pairlist_t pairlist;
text_t Firstname="Madhu";
number_t Roll=23456876;
std::cout<<"Hello "<<Firstname<<std::endl;
std::cout<<"Your Roll no "<<Roll<<std::endl;


return 0;
}