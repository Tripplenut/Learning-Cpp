#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector; using std::string;
int main(){
    vector<int> ivec; //ivec holds objects of type int , Its also empty
    vector<vector<string>> vecvec; // vecvec holds vectors that hold Strings
    vector<int> ivec2(ivec);
    vector<int> ivec3 = ivec;
    //To be honest I have absolutely no clue how to add values
    //The author literally just wrote "//Add values" like we know how to do that shit
    //nvm he explains it but it make so sense so im not even gonna try
    return 0;
}