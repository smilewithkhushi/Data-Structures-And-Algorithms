// Selection Sort Algorithm
// Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

// Examples:

// Example 1:
// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52
// Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

// Example 2:
// Input: N=5, array[] = {5,4,3,2,1}
// Output: 1,2,3,4,5
// Explanation: After sorting the array is: 1, 2, 3, 4, 5

#include <iostream>
using namespace std;
void printArr(int arr[], int len)
{
    // input
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}
void bubbleSort()
{
    int arrsize;
    cin >> arrsize;
    int arr[arrsize];
    // input
    for (int i = 0; i < arrsize; i++)
    {
        cin >> arr[i];
    }

    // selectionsort
    for (int i = 0; i < arrsize; i++)
    {
        for (int j = 0; j < arrsize - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // output
    printArr(arr, arrsize);
}

int main()
{
    bubbleSort();
    return 0;
}

// Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
// Reason: If we carefully observe, we can notice that the outer loop, say i, is running from n-1 to 0 i.e. n times, and for each i, the inner loop j runs from 0 to i-1. For, i = n-1, the inner loop runs n-1 times, for i = n-2, the inner loop runs n-2 times, and so on. So, the total steps will be approximately the following: (n-1) + (n-2) + (n-3) + ……..+ 3 + 2 + 1. The summation is approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n2/2 + n/2). Previously, we have learned that we can ignore the lower values as well as the constant coefficients. So, the time complexity is O(n2). Here the value of n is N i.e. the size of the array.

// Space Complexity: O(1)