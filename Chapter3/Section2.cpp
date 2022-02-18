#include <iostream>
using std::string; using std::cout; using std::endl;
int main(){
    //Initilization
    string s1; //Empty String
    string s2 = s1; //Copies S1 String
    string s3 = "Hello World"; //Copy of "Hello World"
    string s4("Hello World");//Sets obj to "Hello World"
    string s5(5,'s'); // char s 5 times so "sssss"
    cout<<"s1- "<<s1<<"\ns2- "<<s2<<"\ns3- "<<s3<<"\ns4- "<<s4<<"\ns5- "<<s5<<endl;

    //String Operators
    //os<<s writes s onto output stream os, returns os
    //is>>s reads white space separeted strings. returns is
    //getline(is,s) reads a lofe on inpit from is into s, returns is
    //s.empty() returns true if the string is empty
    //s.size() Returns the number chars in s
    //s[n] returns the char at n position
    //s1+s2  Concatenates the strings
    //s1 = s2 Makes s2 of s1
    //s1 == s2 If strings are equal returns true (not by memory)
    //s1 != s2 If strings are not equal returns true
    //<,<=,>,>= Comparison Operators

    return 0;
}