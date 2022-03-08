#include <iostream>
//Calling a paremeter by reference
void callRef(int n){
    n = 5;
}

//Passing a parameter by reference
void passRef(int &n){
    n = 5;
}

int main(){
    int i = 0;
    std::cout<<"i before any functions- "<<i<<std::endl;
    callRef(i);
    std::cout<<"i after calling by reference- "<<i<<std::endl;
    passRef(i);
    std::cout<<"i after passing by refeence- "<<i<<std::endl;
    return 0;
}