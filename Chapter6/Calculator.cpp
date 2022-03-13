/*
Hi, this is my calculator project for Chapter 6.
I decided to give a little description before each project so that in the future this makes sense.
I am also writing this before I type any code.
The goal of this project is the make a working calculator that can add, subtract, multipy, divide, and find the remander of numbers
It only felt fitting as the entire chapter was about functions so guess who is using all the stuff they just learned
me!!!
Okay just compile the file and it should tell you how to use it
If you want a description of the functions I left some document comments
*/
#include <iostream>
#include <iomanip>

/**
 * @brief Adds 2 numbers together
 */
void addition(){
    float n1, n2, res;
    int  per;
    std::cout<<"First number- ";
    std::cin>>n1;
    std::cout<<"Second number- ";
    std::cin>>n2;
    res = n1+n2;
    std::cout<<"set percision (# of decimal places)- ";
    std::cin>>per;
    std::cout << std::fixed << std::showpoint; //Formatting
    std::cout << std::setprecision(per);
    std::cout<<n1<<" + "<<n2<<" = "<<res;
}

/**
 * @brief Subtracts a number from another number
 */
void subtraction(){
    float n1, n2, res;
    int  per;
    std::cout<<"First number- ";
    std::cin>>n1;
    std::cout<<"Second number- ";
    std::cin>>n2;
    res = n1-n2;
    std::cout<<"set percision (# of decimal places)- ";
    std::cin>>per;
    std::cout << std::fixed << std::showpoint; //Formatting
    std::cout << std::setprecision(per);
    std::cout<<n1<<" - "<<n2<<" = "<<res;
}

/**
 * @brief Multiplies 2 numbers together
 */
void muliplication(){
    float n1, n2, res;
    int  per;
    std::cout<<"First number- ";
    std::cin>>n1;
    std::cout<<"Second number- ";
    std::cin>>n2;
    res = n1*n2;
    std::cout<<"set percision (# of decimal places)- ";
    std::cin>>per;
    std::cout << std::fixed << std::showpoint; //Formatting
    std::cout << std::setprecision(per);
    std::cout<<n1<<" / "<<n2<<" = "<<res;
}

/**
 * @brief Divides a number from another number
 */
void division(){
    float n1, n2, res;
    int  per;
    std::cout<<"First number- ";
    std::cin>>n1;
    std::cout<<"Second number- ";
    std::cin>>n2;
    if(n2 == 0){
        n2 = 1;
        std::cout<<"You must think I'm stupid\n";
    }
    res = n1/n2;
    std::cout<<"set percision (# of decimal places)- ";
    std::cin>>per;
    std::cout << std::fixed << std::showpoint; //Formatting
    std::cout << std::setprecision(per);
    std::cout<<n1<<" + "<<n2<<" = "<<res;
}


//Operator Functions
void Operator(int n){
    if(n<1||n>4){
        std::cout<<"Not in range"<<std::endl;
    }
    switch(n)
    {
    case 1: //Addition
        addition();
        break;
    case 2: //Subtraction
        subtraction();
        break;
    case 3: //Multiplication
        muliplication();
        break;
    case 4: //Division
        division();
        break;
    default:
        break;
    }
}


/**
 * @brief Where you run the code idiot
 * @return int 
 */
int main(){
    int op;
    std::cout<<"This is a calculator"<<std::endl;
    std::cout<<"Choose an Operator (input the number)"<<std::endl;
    std::cout<<"1 = Addition, 2 = Subtraction, 3 = Multiplicaton, 4 = Division"<<std::endl;
    std::cin>>op;
    Operator(op);
    return 0;
}

//Its funny cause I just realized I could have made this whole things like 2 functions long but I waned to use a switch case so bad
//So if you're looking at this and your like damn, he is a stupid coder
//yes I am... I very much am. I don't even feel like fixing it