#include <iostream>
#include<deque>
using namespace std;

void explainDeque(){
    deque<int> dq;
    dq.push_back(2);        //{2}
    dq.emplace_back(4);     //{2,4}

    dq.push_front(1);       //{1,2,4}
    dq.emplace_front(0);     //{0,1,2,4}

    dq.pop_back();          //{0,1,2}
    dq.pop_front();         //{1,2}

    dq.back();
    dq.front();

    //other functions are similar to vector
    //begin, end, rbegin, rend, clear, inseart, size, swap
}

int main(){
    return 0;
}