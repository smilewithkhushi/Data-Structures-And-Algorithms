
// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;
 
void explainPair()
{
    pair<int, int> m = {1, 3};
    cout << m.first << " " << m.second;
    // OUTPUT : 1 3

    // nested property of pair
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second << endl;

    cout << p.second.second << " " << p.second.first << endl;
    // OUTPUT : 4 3

    // Pair array
    pair<int, int> arr[] = { {1, 2},
                             {2, 5},
                             {5, 1} };

    cout<< arr[1].second << endl;
    // OUTPUT : 5
}


int main() {
    // Your code goes here

    explainPair();

    return 0;
}
