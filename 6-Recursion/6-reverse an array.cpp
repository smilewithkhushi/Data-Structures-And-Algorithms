// Reverse an array
#include <iostream>
#include<algorithm> //for reverse() function
using namespace std;

void printarr(int arr[], int arrsize)
{

    for (int i = 0; i < arrsize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
/*
NO RECURSION
Time Complexity: O(n/2), single-pass for reversing array.
Space Complexity: O(n/2), for the extra array used.
*/
void solution(int arr[], int arrsize)
{
    int temp;
    for (int i = 0; i < (arrsize + 1) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[arrsize - i - 1];
        arr[arrsize - 1 - i] = temp;
    }
    return;
}

/*
RECURSIVE SOLUTION
Time Complexity: O(n)
Space Complexity: O(1)
*/

void recursion(int arr[], int start, int end)
{
    if (start<end)
    {
        
    swap(arr[start], arr[end]);
    recursion(arr, start + 1, end - 1);
    }
}

/*
Using library function (New Approach)
Approach: C++ and Java have inbuilt functions to reverse an array.

For C++: The std::reverse function in C++ is predefined in a header file algorithm.
Syntax: array_name.reverse(BidirectionalIterator first, BidirectionalIterator last)

Bidirectional iterators first and last indicate the starting and ending positions in the array. Elements that lie in this range are reversed. Note that this range includes the first but excludes the last element.
Time Complexity: O(n)
Space Complexity: O(1)
*/

int main()
{
    int arrnum[5] = {1, 2, 3, 4, 5};
    solution(arrnum, 5);            //solution 1
    printarr(arrnum, 5);
    recursion(arrnum, 0, 4);        //solution 2
    printarr(arrnum, 5);
    
    reverse(arrnum,arrnum+5);       //solution 3
    printarr(arrnum, 5);
    return 0;
}
