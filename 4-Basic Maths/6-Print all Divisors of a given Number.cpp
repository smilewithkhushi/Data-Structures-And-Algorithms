//Print all Divisors of a given Number
//Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives the remainder as zero when divided.



#include<iostream>
using namespace std;

void solution(int N){
    for (int i=1; i<=N; i++){
      if (N%i==0)  cout<<i<<" ";
    }
  cout<<endl;
}

int main(){
  int N;
  cout<<"Input : ";
  cin>>N;
  solution(N);
  return 0;
}

