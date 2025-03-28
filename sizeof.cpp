#include<iostream>
int main(){
    int num=63015075;
    std::string name="madhu";
    double per=57.9;
    char grade='D';
    char passgrades[]={'A','B','C','D','E','F'};    //6-elements.
    std::string students[]={"robinhood","jimmy","henry","edward"};
    std::cout<<sizeof(num)<<"bytes\n";
    std::cout<<sizeof(name)<<"Bytes\n";
    std::cout<<sizeof(per)<<"bytes\n";
    std::cout<<sizeof(grade)<<"Bytes\n";
    std::cout<<sizeof(passgrades)<<"Bytes\n";
    std::cout<<sizeof(students)<<"Bytes\n";
    std::cout<<sizeof(passgrades)/sizeof(passgrades[0])<<"Elements\n";// we can pick char instead of (passgrades[any index]
    std::cout<<sizeof(passgrades)/sizeof(char)<<"Elements\n";
    std::cout<<sizeof(students)/sizeof(std::string)<<"Elements\n";

return 0;
}