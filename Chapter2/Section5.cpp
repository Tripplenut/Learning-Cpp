#include <iostream>
#include <string>
int main(){
    //Type Aliases
    //Formatting- typedef (the type) (alias name)
    typedef double db;
    db val = 3.141592;
    std::cout<<"val- "<<val<<std::endl;
    
    //using (alias name) = (the type)
    using i = int;
    i val2 = 3;
    std::cout<<"val2- "<<val2<<std::endl;

    //Auto Type Specifier
    //You can store expressions variables with auto
    i val3 = 2;
    auto v = val2+val3;
    std::cout<<"v- "<<v<<std::endl;
    val3 = 3;
    std::cout<<"v- "<<v<<", val2+val3- "<<val2+val3<<std::endl;
    //Well it definitely doesn't update with the variables but ya know.
    return 0;
}