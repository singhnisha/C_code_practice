/* Time complexity -> O(N) // as traverse whole array atleast once
*   Space complexity -> O(N)    //as array(unordered_set) is used to store and compare the values
*/

#include<bits\stdc++.h>
using namespace std;

void printPairs (int arr[], int sum, int size) {
    unordered_set<int> s;
    for(int i = 0; i < size; i++) {
        int temp = sum - arr[i];
        if(s.find(temp) != s.end()) {
            cout << "Found\n" ;
            return;
        }
        s.insert(arr[i]);
    }
    cout << "Not found\n";
}
int main(){
    int arr[] = {0,-1,-2,67,3,22};
    //int x = 2;
    int x = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    printPairs(arr, x, size);
    return 0;
}