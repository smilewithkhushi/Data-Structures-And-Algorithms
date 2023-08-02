// it stores lexiocographically largest string on the top
#include <iostream>
#include <queue>
using namespace std;

void explainPQ()
{
    // maximum heap
    std::priority_queue<int> pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    cout << "Topmost element : " << pq.top() << endl;
    pq.emplace(15); //{15,10,5,3}
    cout << "Topmost element : " << pq.top() << endl;

    pq.pop();
    cout << "After pop function topmost element : " << pq.top() << endl;

    // other functions: swap, size and empty

    // minimum heap
    cout << "\t minheap : " << endl;
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(3);
    pq2.push(10);
    pq2.emplace(15); 
    cout << "topmost element : " << pq2.top() << endl;

    //time complexity in various operations
    // push : log n
    // pop : log n
    // top : O(1)
}

int main()
{
    explainPQ();
    return 0;
}