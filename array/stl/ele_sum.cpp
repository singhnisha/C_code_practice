#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int sum_arr(vector<int> arr) {
    return accumulate(arr.begin(),arr.end(), 0);
}
int main() {
    vector<int> arr = {23,45,67,12,33,90};
    cout << "sum of given array is " << sum_arr(arr) << endl;
    return 0;
}