#include <iostream>
int main(){
    //If Statements
    bool stupid;
    std::cout<<"0 or 1"<<std::endl;
    std::cin>>stupid;
    if(stupid == true)
        std::cout<<"good job stupid lol"<<std::endl;
    //Its an if statement goofy

    //Switch Statement
    int n;
    bool end;//Ends the loop after default is send
    std::cout<<"Pick a number from 1 to 5"<<std::endl;
    while(std::cin>>n&&!end){
        switch (n)//Checks n if it is equal to the cases
        {
            case 1: //runs this until break if n is 1
                std::cout<<"This ";
                break;
            
            case 2:
                std::cout<<"is ";
                break;
            
            case 3:
                std::cout<<"a ";
                break;

            case 4:
                std::cout<<"switch ";
                break;

            case 5:
                std::cout<<"statement ";
                break;

            default: //if n is not 1,2,3,4,5 (cases) calls you a dickhead and forces the loop to end
                std::cout<<"\nDick head";
                end = true;
                break;
        }
    }
    return 0;
}