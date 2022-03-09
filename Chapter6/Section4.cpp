#include <iostream>
void overload(){
    std::cout<<"You didn't unput anything :("<<std::endl;
}

void overload(int n){
    std::cout<<"You inputed the number "<<n<<std::endl;
}

void overload(std::string s){

    std::cout<<"You inputed the word- "<<s<<std::endl;
}
//Notice how the above 3 methods all have the same name but different parameters

int main(){
    //You can change these if you want
    overload();
    overload(5);
    overload("poggers");

    //overload(5,pogger); Error, Non of the overload functions take an integer then string parameter
    //You should know this already bozo
    return 0;
}