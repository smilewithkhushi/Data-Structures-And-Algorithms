#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    printTriangle(5)
    
    return 0;
}

void printTriangle(int n) {
        for (int i=0; i<n; i++){
            for (int j=0; j<i+1; j++){
                cout<<"* ";
            }
        cout<<endl;
            
        }
        
}