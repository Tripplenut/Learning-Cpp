#include <iostream>

/** Default Arguments Method
 * Realize how you need to give the parameters values for it to work
 * It is also in order of importance so you cannot alter num without altering str, but you can do vice versa
 * You can also not have a default argument at all but you need to put that after the rest.
*/
void DefArg(std::string str = "default",int num = 5){
    std::cout<<"str- "<<str<<", num-"<<num<<std::endl;
}

int main(){
    DefArg();
    DefArg("Altered");
    DefArg("Altered",69);
    //DefArg(,69); Error, You can't call a later arguement without calling one to the left of it
    return 0;
}