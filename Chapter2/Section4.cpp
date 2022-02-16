#include <iostream>
int main(){
    //Const keyword
    const int val = 5; //Sets val as 5, variable can't be changed
    //val++; Error, value of variable can't be changed
    //const int val2; Error, can't be uninitialized but can be initialized at run time

    //They are only local to a file so to get them from another you need to do this
    //extern const int val;
    //You don't need to reinitialize

    //You can reference a const
    const int &ref1 = val; 
    //but the reference would need to be const aswell or else you get an error
    //this is cause you obviously can't change the original variable so why would you be able to change it from the reference
    
    int val2 = 2;
    int &ref2 = val2;
    const int &ref3 = val2;
    std::cout<<"val2- "<<val2<<"\nref2- "<<ref2<<"\nref3- "<<ref3<<std::endl;
    ref2 = 3;
    //ref3 = 3; Error, Since the reference is constant
    std::cout<<"\nval2- "<<val2<<"\nref2- "<<ref2<<"\nref3- "<<ref3<<std::endl;
    //ref3 actually changes since it is a reference of the value even though you can't change the value from the const
    
    //You can also make the const an expression but only of other const's or else you get an error
    const int val3 = val + 1;
    //const int val4 = val2 + 1; Error, variable can't be an expression of a nonconstant variable
    constexpr int val5 = val + 1;//The same as the val 3 constant but just typed as constexpr for conveniance
    return 0;
}