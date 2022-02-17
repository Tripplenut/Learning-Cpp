#include <iostream>
//using namespace std; //Use this to get rid of the usage of all functions that use "std"
using std::cin; using std::cout; using std::endl;
//another way to use namespace for specific std functions
int main(){
    int val;
    cin>>val;
    cout<<"val- "<<val<<endl;
    //You will obviously get an error if the namespaces aren't declared
    return 0;
}