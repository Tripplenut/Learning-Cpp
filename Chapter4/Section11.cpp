#include <iostream>
using namespace std;
int main(){

    int var = 3.5+4; //Loss of percision, you could get an error or warning
    float var2 = 3.5;
    double var3 = 2.5;
    cout<<"var- "<<var<<", var2 - "<<var2<<", var+var2- "<<var+var2<<endl;
    //double or float plus an int turns the expression into a float or double automatically
    //It goes short to int to float to double. Anything plus a double turns it into a double, a short plus any other type goes to that other type
    
    var = var3; //Turns double into int automatically using truncation, aslways rounds down
    cout<<"new var- "<<var;
    /* Extras
    ** Any character plus a number type will turn the character into its number value
    ** This is probably how Lexicographic order works, takes the number value and sorts it in that sense
    ** If you equat a boolean to any number if its a 0 the bool will be false else it will be true
    ** unsigned vars will only convert to a higher type if the number is low enough.
    ** You can also cast into type but your gonna have to research that for yourself. It makes no sense to me still
    */

    return 0;
}