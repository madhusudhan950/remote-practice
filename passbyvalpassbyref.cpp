#include<iostream>
void swap(std::string &x,std::string &y);// pass by reference by  adding & along with arguments swap(std::string &x,std::string &y)
int main(){
    std::string x="madhu";
    std::string y="chinnu";
    

    swap(x,y);

    std::cout<<"x:"<<&x<<'\n';  //x:0x4622fff800
    std::cout<<"Y:"<<&y;        //Y:0x4622fff7e0

}
void swap(std::string &x,std::string &y){
    std::string temp;
    temp=x;
    x=y;
    y=temp;
    std::cout<<"x:"<<&x<<'\n';  //x:0x4622fff800
    std::cout<<"Y:"<<&y<<'\n';  //Y:0x4622fff7e0

}
/*#include<iostream>
void swap(std::string x,std::string y);// pass by reference by  adding & along with arguments swap(std::string &x,std::string &y)
int main(){
    std::string x="madhu";
    std::string y="chinnu";
    

    swap(x,y);
    
    std::cout<<"x:"<<&x<<'\n';          //x:0x31a83ff680            //in the functions of swap contains different memory containers so the value of swap function contains different values
    std::cout<<"Y:"<<&y<<'\n';          //Y:0x31a83ff660


}
void swap(std::string x,std::string y){
 
    std::cout<<"x:"<<&x<<'\n';          //x:0x31a83ff6d0
    std::cout<<"Y:"<<&y<<'\n';          //Y:0x31a83ff6b0

}*/

/*void swap(std::string x,std::string y);   //pass   by value swap(std::string x,std::string y) swap function doesn't work
                                             with pass by value and the case is adding adress symbol along with function arguments
int main(){
    std::string x="madhu";
    std::string y="chinnu";
    

    swap(x,y);

    std::cout<<"x:"<<x<<'\n';
    std::cout<<"Y:"<<y;

}
void swap(std::string x,std::string y){
    std::string temp;
    temp=x;
    x=y;
    y=temp;

}*/