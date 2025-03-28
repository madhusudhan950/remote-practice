#include<iostream>
int main(){
//1  int i,j;

    std::string foods[][3]={{"pizza","burger","sandwitch"},
                            {"cococola","thumbsup","limca"},
                            {"vanila","chocolate","butterscotch"}};
int row=sizeof(foods)/sizeof(foods[0]);
int coloumn=sizeof(foods[0])/sizeof(foods[0][0]);
    /*std::cout<<foods[0][0]<<" ";
    std::cout<<foods[0][1]<<" ";
    std::cout<<foods[0][2]<<"\n";
    std::cout<<foods[1][0]<<" ";
    std::cout<<foods[1][1]<<" ";
    std::cout<<foods[1][2]<<"\n";
    std::cout<<foods[2][0]<<" ";
    std::cout<<foods[2][1]<<" ";
    std::cout<<foods[3][2]<<"\n";*/
 
/*1  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            std::cout<<foods[i][j]<<" ";
           
        }
        std::cout<<"\n";
    }*/
   for(int i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        std::cout<<foods[i][j]<<" ";
    }
    std::cout<<"\n";
   }
}