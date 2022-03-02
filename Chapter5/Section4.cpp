#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Iterative Statements
    vector<int> v = {1,2,3,4,5};
    int i=0;
    //While Loop
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
    i = 0;
    cout<<endl;

    //Do While Loop
    do{
        cout<<v[i]<<" ";
        i++;
    }while(i<v.size());
    cout<<endl;

    //For Loop
    for(int n=0; n<v.size(); n++)
        cout<<v[n]<<" ";
    cout<<endl;

    //For Each Loop
    for(int k : v)
        cout<<k<<" ";
    
    return 0;
}