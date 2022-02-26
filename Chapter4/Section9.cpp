#include <iostream>
using namespace std;
int main(){
    //Initilization
    //sizeof(type)
    //sizeof expr
    int var = 5;
    int &varR = var;
    int *varP = &var;
    int arr[] = {0,1,2,3,4};
    cout<<"var size- "<<sizeof(var)<<"\nvar reference size- "<<sizeof(varR)<<"\nvar pointer size- "<<sizeof(varP)<<"\nsize of 5- "<<sizeof 5<<endl;
    //Var and References seem to have the same bit size, The pointer seems to have double
    cout<<"arr size- "<<sizeof(arr)<<"\narr pointer size- "<<sizeof(*arr)<<"\narr size/pointer size- "<<sizeof(arr)/sizeof(*arr)<<"\nSize of multiplication expr- "<<sizeof (5*5);
    /*If the size of an integer is 4 bits, and the array has 5 integers 4+4+4+4+4 is 20 bits.
    **That is why when you take the full size of the array, all 5 integers is 20 bits, then divide it by the bit size of that type, which is int so 4
    **you get 5, which is the length of the array, or amount of integers in it.
    **Even when you multiply the same thing happens, take any int and multiply it by a number just do 4 times that number
    **Since the size of that number is 4 and your multiplying it by another value.
    **Also the pointer in the arr is a referece to the first value in the array
    **I wonder what would happen if you have an array initilized of a super class but all the values are subclasses
    */

    return 0;
}