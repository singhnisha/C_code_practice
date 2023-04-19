#include<iostream>
using namespace std;
static int sum = 0;
int ele_sum(int arr[], int ele) {
    if(ele == 0) {
        return 0;
    } else {
        return (arr[0] + ele_sum(arr+1, ele-1));
    }
}
int main()
{
    int arr[5], ele = 0;
    cout << "enter 5 elements" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    ele = sizeof(arr) / sizeof(arr[0]);
    cout << "sum is " << ele_sum(arr,ele);
    return 0;
}