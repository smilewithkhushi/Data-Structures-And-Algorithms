// Problem Statement: Given an integer N, write a program to count the number of digits in N.
/*
    SOLUTIONS : 
    1. Store the integer in a variable X and initialize a counter variable to count the number of digits using any loop or datatype
    2. Convert the integer into a string.Find the length of the string      
    3. Use logarithm base 10 to count the number of digits. As
        The number of digits in an integer = the upper bound of log10(n).
*/
#include <iostream>
#include <vector>
using namespace std;

int solution(int N)
{
    vector<int> v;
    while (N != 0)
    {
        int digit = N % 10;
        v.insert(v.begin(), digit);
        N /= 10;
    }
    int res = v.size();
    return res;
}
/*
Complexity Analysis
Time Complexity: O (n) where n is the number of digits in the given integer
Space Complexity: O(1)
*/

int count_digits(int n)
{
    string x = to_string(n);
    return x.length();
}
/*
Complexity Analysis
Time Complexity: O (1) 
Space Complexity: O(1)
*/
int count_digits_with_log(int n)
{
    int digits = floor(log10(n) + 1);
    return digits;
}

/*
Time Complexity: O (1) 
Space Complexity: O(1)
*/

int main()
{
    int N = 12345;
    int result;
    result = solution(N);
    cout << result << endl;
    return 0;
}
