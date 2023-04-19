#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,56,1,1,1,2,3,1,1,1,};
    int size = sizeof(arr) / sizeof(arr[0]);
    //cout << size << endl;
    int maxcount = size / 2;
    //cout << maxcount << endl;
    int count, n;
    for(int i = 0; i < size; i++) {
        count = 0;
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]) {
                n = arr[i];
                count++;
            }
        }
        if(count > maxcount)
            cout << "number is " << n << endl;
    }
    return 0;
}