/*  Time Complexity -> O(NlogN)
*   Space Complexity -> O(1)
*   Using BST method
*/

#include<bits/stdc++.h>
using namespace std;
bool binarysearchTree(int arr[],int l, int r, int searchkey) {
    // Find middle element first for BST
    while(l <= r) {
        int m = l + (r - l) / 2;
        if(arr[m]==searchkey)
            return true;
        if(arr[m] < searchkey)
            l = m + 1;
        else
            r = m - 1;
    }
    return false;
}
bool checkSumArrayPair(int arr[],int x,int size){
    int l,r;
    sort(arr,arr+size); // O(NlogN) -> Introsort(hybrid of 3 sorting algo) = heapsort + quicksort + insertionsort
    for(int i = 0; i < size; i++){
        int searchkey = x - arr[i];
        if(binarysearchTree(arr, i + 1, size - 1, searchkey) == true){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {34,1,7,78,3,90};
    int x = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    if(checkSumArrayPair(arr,x,size))
        cout << "Found\n";
    else
        cout << "Not found in an array\n";
    return 0;
}