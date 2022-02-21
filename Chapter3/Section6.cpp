#include <iostream>
using namespace std;
int main(){
    //Initilization
    int matrix[4][4];//Blank 4 by 4 matrix
    //All the rules of arrays apply to matrixs as well
    int matrix2[3][3] = {//The way sane people initilize with values 
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };

    int matrix3[3][2] = {0,1,2,3,4,5};//The way insane people initilize them
    
    //Traversal
    cout<<"Matrix2 Traversal"<<endl;
    for(int i=0; i<sizeof(matrix2)/sizeof(*matrix2); i++){
        for(int k=0; k<sizeof(matrix2[i])/sizeof(*matrix2[i]); k++){
            cout<<matrix2[i][k]<<",";
        }
        cout<<endl;
    }
    //I would recomend having a variable set for the sizes of so loops don't look this ugly
    return 0;
}