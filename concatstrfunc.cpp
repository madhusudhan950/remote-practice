#include<iostream>
std::string Concat(std::string string1,std::string string2,std::string string3);
int main(){
    std::string firstname="madhu" ;
    std::string lastname="sudhan";
    std::string surname="anupoju";
    std::string fullname=Concat(firstname,lastname,surname);
    std::cout<<"hello "<<fullname;
}
std::string Concat(std::string string1,std::string string2,std::string string3){
    return string1+" "+string2+" "+string3;

}