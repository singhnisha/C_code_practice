/* Check if pair with given Sum exists in Array
* Given an array A[] of n numbers and another number x, the task is to 
* check whether or not there exist two elements in A[] whose sum is exactly x.
* Time complexity -> O(N^2)
* Space complexity -> O(1)
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {23,45,67,89,0,1,33};
    int x = 1;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(x == (arr[i]+arr[j])) {
                cout << arr[i] << " & " << arr[j] << " sum is x value" << endl;
            }
        }
    }
    return 0;
}