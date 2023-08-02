#include <iostream>
#include<list>
using namespace std;

void explainList(){
    list<int> ls;

    ls.push_back(2);        //{2}
    ls.emplace_back(4);     //{2,4}

    ls.push_front(1);       //{1,2,4}
    //very cheap in terms of time complexity as double linked list is maintained here
    ls.emplace_front(0);    //{0,1,2,4}

}

int main(){
    return 0;
}