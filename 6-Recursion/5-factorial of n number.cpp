#include<iostream>
using namespace std;

void factorial(int n, int fact){
    if (n==1){
        cout<<fact<<endl;
        return;
    }
    fact*=n;
    n--;
    factorial(n, fact);
}

int main(){
    factorial(15, 1);
    return 0;

}
/* FOR RECURSION : 
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.*/

/* FOR ITERATION

Time Complexity: O(n)

Space Complexity: O(1)*/