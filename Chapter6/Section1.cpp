#include <iostream>
//This is a method that returns the factorial of an inputed number between 1 and 32 inclusive
unsigned int factorial(int n){
    unsigned int t = 1;
    while(n!=0){
        t *= n;
        n--;
    }
    return t;
}

int main(){
    std::cout<<"Factorial Moment\nEnter a number"<<std::endl;
    int input;
    std::cin>>input;
    if(input<0||input>33)//For those who try to break my code
        input = 1;
    std::cout<<"Factorial of "<<input<<" is "<<factorial(input)<<std::endl;
    //Calls the factorial method at the start of the file
    return 0;
}