#include<iostream>
using namespace std;

void printNumber(int n){
    if (n==0){
        return;
    }
    cout<<n<<' ';
    n--;
    printNumber(n);
}

int main(){
    printNumber(10);
    return 0;

}