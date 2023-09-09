#include<iostream>
using namespace std;

void printNumber(int i, int n){
    if (i==n+1){
        return;
    }
    cout<<i<<' ';
    i++;
    printNumber(i,n);
}

int main(){
    printNumber(1, 10);
    return 0;

}