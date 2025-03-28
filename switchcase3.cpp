std::string name=madhu;
std::string demo;
std::cout<<"Enter your demo:";
getline(std::cin,demo);
//getline(cin,name);
switch(demo){
    case length:
    if(name.length()>=12) 
    cout<<"Your name cant be over 12 letters"; 
    break;
    case empty:
    if(name.empty())
    cout<<"You didn't enter your name";
    break;
    case clear:
    if(name.clear())
    cout<<"your anme is cleared";
    break;
    case append:
    if(name.append("@gmail.com"))
    cout<<"Your mail address is "<<name;
    break;
}