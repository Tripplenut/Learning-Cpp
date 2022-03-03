#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
    bool j = false;
    jump:
    for(int i=0; i<v.size(); i++){
        if(i==2&&!j){
            cout<<"Jumping back to the start\n";
            j = true;
            goto jump;//Goes to jump on line 7
        }
        if(i==4)
            break; //Stops the loop
        if(i==1)
            continue; //Goes to the next iteration
        cout<<v[i]<<" ";
    }

    return 0;
}