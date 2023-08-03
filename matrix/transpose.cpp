/*
Transpose sqaure matrix NxN
1) Basically row ele will get shifted to col ele
2) so swap row and col
3) diagonal elements gona remain same if you notice
4) so swap upper diagonal elements with lower elements
*/

#include<iostream>
using namespace std;

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //Print input matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;
    for(int i=0; i<3; i++){
        //need to swap upper diagonal elements only with lower diagonal elements
        for(int j=i; j<3; j++){
            //swap row with column
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    //Print the output transpose matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}