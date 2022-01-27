#include <iostream>
int main(){
    //While Loop
    int sum = 0, val = 1;// Initilized sum and val
    while(val<=10){
        sum += val; //Adds val to the sum
        val++; //Increases val
    }
    std::cout<<"Sum of 1 to 10 inclusive is "<<sum<<std::endl;
    
    //For Loop
    sum = 0;
    for(int val=0; val<=10; val++){
        sum += val;
    }
    std::cout<<"Sum of 1 to 10 inclusive is "<<sum<<std::endl;
    return 0;
}