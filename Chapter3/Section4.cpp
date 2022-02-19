#include <iostream>
using namespace std;
int main(){
    string s("some string");
    cout<<"s before iteration- "<<s<<endl;
    if(s.begin() != s.end()){//Makes sure the string isn't empty
        auto it = s.begin(); // var it denotes the first char in var s
        *it = toupper(*it); // Capitlized the first letter in the string
    }
    cout<<"s after iteration- "<<s<<endl;

    //Iterating multiple elements
    string s2("string some");
    cout<<"s2 before iteration- "<<s2<<endl;
    for(auto it2 = s2.begin(); it2 != s2.end(); it2++)// Traverses the string
        *it2 = toupper(*it2); //Capitlized the character
    cout<<"s2 after iteration- "<<s2<<endl;
    return 0;
}