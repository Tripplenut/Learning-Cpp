#include <iostream>
int main(){
    //References
    std::cout<<"References"<<std::endl;
    int val = 3;
    int &ref1 = val; //All references need a '&' before them
    //int &ref2; Error, All references need to be initialized
    //int &ref3 = 1; Error, All references need to be an object
    std::cout<<"val- "<<ref1<<std::endl;
    std::cout<<"ref1- "<<ref1<<std::endl;
    ref1 = 2; //Returns 2 as ref1 changes val to 2
    std::cout<<"val- "<<val<<std::endl;
    std::cout<<"ref1- "<<ref1<<std::endl;

    //Pointers
    std::cout<<"\nPointers"<<std::endl;
    int val2 = 4;
    int *point = &val2; //Address of val2
    //Pointers always need a '*' before them and a & before the name of the variable
    //They can also only be casted to variables but also voids and nulls(idk how)
    std::cout<<"val2- "<<val2<<std::endl;
    std::cout<<"point- "<<point<<std::endl;

    return 0;
}