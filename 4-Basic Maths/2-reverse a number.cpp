/* Problem Statement: Given a number N reverse the number and print it. */

#include <iostream>
#include <vector>
using namespace std;

int solution(int N){
    //vector ese hi banaya tha
    vector<int> v;
    int rev=0;
    while (N!=0){
        int digit=N%10;
        rev*=10;
        rev+=digit;
        v.insert(v.end(), digit);
        N/=10;
    }
    return rev;
}

int main() {
    
    int result, N;
    N=123;
    result=solution(N);
    cout<<result<<endl;

    return 0;
}

/*
Time Complexity: O(n), where n is the length of the given number

Space Complexity: O(1)

*/
/*
Approach:
Run a while loop until the given number N is equal to zero while(N!=0)
Initialize a variable reverse = 0;
now in each step take the remainder of the given number N and store it as a variable digit, digit = N % 10
Also, Divide the number by 10. N= N / 10
in each step, the variable reverse get updated as reverse = reverse*10+digit.
*/