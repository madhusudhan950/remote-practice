#include<iostream>
using std::cin;
using std::cout;
int main(){
    std::string name;
    
   cout<<"ENter your name:";
   getline(cin,name);
  // if(name.length()>12)                                                       //lenth of string syntax: name.length()
   // cout<<"Your name cant be over 12 letters";                                //empty of string syntax name,empty()
   //name.clear();
   //cout<<"Hello"<<name;                                                       //clear of string syntax name.clear()
    
   //else if(name.empty())                                                      //append of string syntax name.append("Next string") append =string1+string 2
    //cout<<"You did not enter your name";
    ///else                                                                     //name.at(index value) index of the letter
   // cout<<name;                                                               //name.insert(index,value) adding letter to the index value
                                                                                //name.find("char") it will pop up the index value of letter
   // name.append("@gmail.com");                                                //name.eraze(begging index,ending index) it will removefrom starting index to ending index
    //cout<<name.at(2);
    //cout<<name.insert(0,"@");
   // cout<<name.find("z");
    cout<<name.erase(0,3);

    
       
    return 0;

}