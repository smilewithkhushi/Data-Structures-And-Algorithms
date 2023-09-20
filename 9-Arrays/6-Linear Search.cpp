// Linear Search in C
// Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

// Examples:

// Example 1:
// Input: arr[]= 1 2 3 4 5, num = 3
// Output: 2
// Explanation: 3 is present in the 2nd index

// Example 2:
// Input: arr[]= 5 4 3 2 1, num = 5
// Output: 0
// Explanation: 5 is present in the 0th index


#include <iostream>
#include <vector>
using namespace std;

void linearsearch(vector<int> arr, int ele, int q)
{
    for (int i = 0; i < q; i++)
    {
        if (arr[i] == ele)
        {
            cout << "Element found at position : ";
            cout << i << endl;
        }
    }
   // cout << "Element not found" << endl;

}
int main()
{
    
    cout<<"Enter array size: ";
    int q;
    cin >> q; // size of the vector
    vector<int> arr(q);
    cout<<"Enter the array : ";
    for (int i = 0; i < q; i++)
    {
        cin >> arr[i];
    } // take input for the elements

    int ele;
    cout << "Enter element to be found : ";
    cin >> ele;
    // element to be found taken

    linearsearch(arr, ele, q);
    return 0;
}