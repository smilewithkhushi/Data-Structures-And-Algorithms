#include<iostream>
using namespace std;

void sumNumber(int n, int sum){
    if (n==0){
        cout<<sum<<endl;
        return;
    }
    sum+=n;
    n--;
    sumNumber(n, sum);
}

int main(){
    sumNumber(2, 0);
    return 0;

}

/*
using formula , sum = n*(n-1) / 2
Time Complexity: O(1)
Space Complexity: O(1)
*/


/* RECURSION  :: 
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }
Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.
*/


/*
iterative ::
Time Complexity: O(N)
Space Complexity: O(1)*/