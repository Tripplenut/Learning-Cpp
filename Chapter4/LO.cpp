//Lexicographic Order
#include <iostream>
using namespace std;

/**
 * @brief Damn look at me learning how to use documentaion, thats crazy
 * @returns Takes a string and returns it in lexicographical order
 */
int main(){
    cout<<"Input a string of letters and this program will sort it lexicographically"<<endl;
    string str;
    cin>>str;
    
    //String to char array;
    int arr[str.size()];
    int arrl = sizeof(arr)/sizeof(*arr); //array length
    for(int i=0; i<arrl; i++){
        arr[i] = str[i]+0; //converts char into int
    }
    
    //Selection sort moment
    int min; //value of smallest
    int minI; //index of smallest
    int temp; //Temp index for switch
    for(int i=0; i<arrl; i++){
        min = arr[i];
        minI = i;
        for(int k = i; k<arrl; k++){
            if(arr[k]<min){
                min = arr[k];
                minI = k;
            }
        }
        //swap
        temp = arr[i];//Saves current value
        arr[i]=min;//Swaps with min value in arr
        arr[minI] = temp;//puts current in mins spot
    }

    //Returns result string, but its actually an array
    cout<<"Lexicographically- ";
    for(int i=0; i<arrl; i++){
        cout<<(char)arr[i]; //Type casting moment
    }

    return 0;
}