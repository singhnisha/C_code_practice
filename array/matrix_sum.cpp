/* Matrix multiplication
* Time compolexity -> O(r1*c2*r2)
* Space complexity -> O(r1*c2)
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[2][2] = {{1,1},{2,2}};
    int arr2[2][3] = {{1,1,1},{2,2,2}};
    int r1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "r1 = " << r1 << endl;
    int c1 = sizeof(arr1[0])/sizeof(arr1[0][0]);
    cout << "c1 = " << c1 << endl;
    int r2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "r2 = " << r2 << endl;
    int c2 = sizeof(arr2[0])/sizeof(arr2[0][0]);
    cout << "c2 = " << c2 << endl;
    int res[r1][c2];
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for(int k = 0; k < r2; k++) {
                res[i][j] += (arr1[i][k] * arr2[k][j]);
                //cout << res[i][j] << "\t";
            }
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}