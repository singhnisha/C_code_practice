/* Check if pair with given Sum exists in Array
* Time Complexity -> O(NlogN)
* Space Complexity -> O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    int arr[] = {12,23,45,1,11,90,0,45};
    int x = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);    //O(NlogN)
    l = 0;
    r = n-1;
    while(l < r) {
        if (x == (arr[l]+arr[r])) {
            cout << "Sum found with arr[l] is " << arr[l] << "arr[r] is " << arr[r] << endl;
        }
        else if(x < (arr[l]+arr[r]))
            r--;
        else
            l++;
    }
    return 0;
}