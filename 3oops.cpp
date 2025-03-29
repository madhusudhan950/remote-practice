
//class without using function
//drawback-no  reuability for members
#include<iostream>
using std::cout;
/*class Mobile{
    public:
    std::string model;
    std::string processor;
    int batcapacity;
    int price;

    

};
int main(){
    Mobile Mobile1;
    Mobile1.model="Mi-A2";
    Mobile1.processor="snapdragon";
    Mobile1.batcapacity=5000;
    Mobile1.price=19999;
   
    
    
        cout<<"Mobile model "<<Mobile1.model<<'\n';
        cout<<"Mobile processor "<<Mobile1.processor<<'\n';
        cout<<"Mobile Battery Capacity "<<Mobile1.batcapacity<<'\n';
        cout<<"Mobile Price "<<Mobile1.price<<'\n';

    


    return 0;
}*/


//class with using function
//code-reusability of more members
/*class Mobile{
    public:
    std::string model;
    std::string processor;
    int batcapacity;
    int price;

    void spec(){
        cout<<"Mobile model "<<model<<'\n';
        cout<<"Mobile processor "<<processor<<'\n';
        cout<<"Mobile Battery Capacity "<<batcapacity<<'\n';
        cout<<"Mobile Price "<<price<<'\n';

    }

};
int main(){
    Mobile Mobile1;
    
    Mobile1.model="Mi-A2";
    Mobile1.processor="snapdragon";
    Mobile1.batcapacity=5000;
    Mobile1.price=19999;
    Mobile1.spec();


    return 0;
}*/
//class using constructor
class Mobile{
    public:
    std::string model;
    std::string processor;
    int batcapacity;
    int price;

    void spec(){
        cout<<"Mobile model "<<model<<'\n';
        cout<<"Mobile processor "<<processor<<'\n';
        cout<<"Mobile Battery Capacity "<<batcapacity<<'\n';
        cout<<"Mobile Price "<<price<<'\n';

    }
    Mobile(std::string model,std::string processor,int batcapacity,int price){
       this-> model=model;
       this-> processor=processor;
       this-> batcapacity=batcapacity;
       this-> price=price;
    }

};
int main(){
    Mobile Mobile1{"Mi-A2","Snapdragon",5000,19999};
    Mobile1.spec();
    cout<<"\n";
    Mobile Mobile2{"Reno-6pro","Dimensity",4500,43999};
    Mobile2.spec();

  

    return 0;
}

