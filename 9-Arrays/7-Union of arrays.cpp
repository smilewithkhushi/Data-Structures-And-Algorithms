// Union of Two Sorted Arrays
// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

// The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order.

// Examples
// Example 1:
// Input:
// n = 5,m = 5.
// arr1[] = {1,2,3,4,5}
// arr2[] = {2,3,4,4,5}
// Output:
//  {1,2,3,4,5}

#include <iostream>
#include <vector>
using namespace std;

void output(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void unionarr(vector<int> arr1, vector<int> arr2, int m, int n)
{
    for (auto x : arr2)
    {
        arr1.push_back(x);
    }
    sort(arr1.begin(), arr2.end());
    int i = 0;
    while (i < arr1.size() - 1)
    {
        if (arr1[i] == arr1[i + 1])
        {
            arr1.erase(arr1.begin() + i + 1)
        }
        i++;
    }
    output(arr1);
}

int main()
{
    int m, n;
    cout << "Enter array1 size: ";
    cin >> m; // size of the vector1
    cout << "Enter array2 size: ";
    cin >> n; // size of the vector2
    vector<int> arr1(m);
    vector<int> arr2(n);
    cout << "Enter the array1 : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    } // take input for the elements
    cout << "Enter the array2 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    } // take input for the elements

    unionarr(arr1, arr2, m, n);
    return 0;
}