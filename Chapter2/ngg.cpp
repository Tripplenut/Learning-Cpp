//Number Guessing Game
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    bool win = false;
    srand ( time(NULL) );//Creates a random number seed based off time
    int secret = (rand()%10)+1;//Creates random number with random time seed
    int count = 1;
    int guess;
    std::cout<<"Number Guessing Game"<<std::endl;
    while(!win){
        std::cout<<"Guess a Number"<<std::endl;
        std::cin>>guess;
        if(guess>secret){
            std::cout<<"The number is smaller than "<<guess<<std::endl;
            count++;
            continue;
        }
        if(guess<secret){
            std::cout<<"The number is larger than "<<guess<<std::endl;
            count++;
            continue;
        }
        break;//If the number is right
    }
    std::cout<<"Good Job on guessing the correct number"<<std::endl;
    std::cout<<"It took you "<<count<<" tries "<<std::endl;
    return 0;
}