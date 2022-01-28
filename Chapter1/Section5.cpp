#include <iostream>
class TestClass{       //The Class
  public:             //Access specifier (public, protected, and private), all your methods will keep the specifier
    int Num;        //Attributes / Class variables
    std::string Name;
    TestClass(int ni, std::string ns){ //Constructor (Has to be same as class name)
        Num = ni;
        Name = ns;
    }
    
    std::string check(){ //Methods
        return "praying this works";
    }
};

//Main always need to be below the rest of the classes
int main() {
    TestClass test(5,"Anthony");//Initilizes a class
    std::cout<<"Name- " <<test.Name<<", Number- "<<test.Num<<std::endl;
    std::cout<<test.check();
}
