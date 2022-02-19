#include <iostream>
using namespace std;
int main(){
    //Initilization
    int arr[5]; //Initilizing an array with a size of 5;
    const int n = 5; //vars that go into arrays need to be constant since the size of arrays can't change
    //int n2 = 5; //If inputed into the array below there would be an error as n2 isn't constant
    int arr2[n]; //an array of 5 as n is a constant integer with a value of 5
    cout<<"arr- "<<arr<<endl; //prints the address (pointer) of the array
    cout<<"arr2- "<<arr2[0]<<endl; //prints the var in the first spot of the array

    int arr3[] = {0,1,2}; //Array with a size of 3 and values- 0,1,2
    int arr4[5] = {0,1,2}; //Array with a size of 5 and values- 0,1,2,0,0
    //int arr5[2] = {0,1,2} Error, Initilized with a size of 2 so you can't put 3 values
    //There is some special rule with charater arrays and their initilization but im too lazy to type all of it out

    //Traversal
    int i=0;
    cout<<"arr3:"<<endl;
    while (i<sizeof(arr3)/sizeof(*arr3)){
        cout<<"arr["<<i<<"] = "<<arr3[i]<<endl;
        i++;
    }
    //If the loop goes to a value that it out of the range of the array you will get an error (or just a bunch of 0s as i just found out)
    cout<<"\narr4:"<<endl;
    for(int i=0; i<sizeof(arr4)/sizeof(*arr4); i++){
        cout<<"arr["<<i<<"] = "<<arr4[i]<<endl;
    }
    //For some reason getting the size of an array is difficult for absolutly no reason
    //There is also array object but you can look that up on your own

    return 0;
}