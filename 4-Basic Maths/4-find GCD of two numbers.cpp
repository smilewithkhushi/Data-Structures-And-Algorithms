//Problem Statement: Find the gcd of two numbers.

#include <iostream>
using namespace std;

//solution 1 : brute force
int solution(int a, int b){
    int gcd=1;
    int min=(a>b) ? b : a;
    for (int i=1; i<=min;i++){
        if (a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;    
}

//solution 2 : Optimal 
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
    int result, a, b;
    cout<<"Enter two values : "<<endl;
    cin>>a;
    cin>>b;
    result=solution(a,b);
    cout<<endl<<result<<endl;
    return 0;
}

/*
Algorithm / Intuition
Solution 1: Brute force
Intuition: Simply traverse from 1 to min(a,b) and check for every number.

Approach: 
Traverse from 1 to min(a,b).
And check if i is divisible by both a and b.If yes store it in the answer.
Find the maximum value of i which divides both a and b.

Complexity Analysis
Time Complexity: O(N).
Space Complexity: O(1).
*/

/*
Optimal Approach
Algorithm / Intuition
Solution 2: Using Euclidean’s theorem.
Intuition: Gcd is the greatest number which is divided by both a and b.If a number is divided by both a and b, it is should be divided by (a-b) and b as well.

Approach:
Recursively call gcd(b,a%b) function till the base condition is hit.
b==0 is the base condition.When base condition is hit return a,as gcd(a,0) is equal to a.


Time Complexity: O(logɸmin(a,b)), where ɸ is 1.61.
Space Complexity: O(1).
*/