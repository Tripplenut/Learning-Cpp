#include <iostream>
using namespace std;
int main(){
    //Unclear while loop
    int i = 0;
    int c = 0;
    int max = 5;
    cout<<"Unclear while loop"<<endl;
    while(i!=max){ //Max is the condition where the loop ends
        cout<<i<<" ";
        i++;
    }

    //Clear while loop
    i = 0;
    c = 0;
    max = 5;
    cout<<"\nClear while loop"<<endl;
    while((i++)!=max){ //By putting i++ in the condition we can make the loop clearer as we know what will make i reach the condition for the loop to stop
        cout<<i<<" ";
    }
    //This is obviously more effective the larger the loop or if you set a value to i and not just increment it (the better use for it)
    //One problem is that i++ will run at the very beginning of the loop so you need to account for that if it is used

    return 0;
}