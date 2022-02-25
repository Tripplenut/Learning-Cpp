#include <iostream>
using namespace std;
int main(){
    cout<<"Input a number"<<endl;
    int num;
    cin>>num;
    string res;
    //Traditional If Else Statement
    cout<<"\nTraditional If Statement"<<endl;
    if(num>10)
        res="Number is greater than 10";
    else
        res="Number is less than 10";
    cout<<res<<endl;

    //Conditional Operator
    // var = condition ? expression1 : expression2, If condition is true expression 1 is ran else expression 2
    cout<<"\nConditional Operator"<<endl;
    res = (num>10)?"Number is greater than 10":"Number is less than 10";
    cout<<res<<endl;

    //Nested Conditinonal Operator
    cout<<"\nNested Contitional Operator"<<endl;
    res = (num>10)?"Number is greater than 10" //It doesn't need to be multiline
        :(num>0)?"Number is greater than 0 but less than 10":"Number is less than 0";
    cout<<res<<endl;
    /* var = cond1 ? expr1 : cond2 ? expr2 : expr 3
    ** If the first condition is true var is set to expr1
    ** If it is false cond2 is ran
    ** If cond2 is true var is set to expr2 else var is set to expr3
    */

    //Example, you can uncomment if you want
    /*
    cout<<"\nNested Traditional If Statement"<<endl;
    if(num>10)
        res = "Number is greater than 10";
    else if(num>0)
        res = "Number is greater than 0 but less than 10";
    else
        res = "Number is less than 0";
    cout<<res<<endl;
    */
   
    return 0;
}