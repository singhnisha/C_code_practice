/* To get array element sum
* Time complexity: O(n)
*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[5], sum = 0;
    cout << "Enter 5 array elements" << endl;
    for ( int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum is " << sum << endl;
    return 0;
}