#include <iostream>
int main(){
    5+5; //Useless statement as the computer computes it but doesn't actively do anything
    std::cout<<5+5; //Usefull statement as something happens (output)
    // a null statement would just be a semi-colon with nothing before it
    int i = 0;
    while(i!=2){
        //This is a block of code
        i++;
        //Notice how the while statements code is between both of these curly brackets 
    }
    return 0;
}