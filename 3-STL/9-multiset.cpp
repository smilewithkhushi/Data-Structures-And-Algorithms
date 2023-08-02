//stores multiple values and in the sorted order
#include<iostream>
#include<set>
using namespace std;

void explainMultiSet(){
    std::multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);           //{1,1,1}

    
    int cnt=ms.count(1);
    cout<<"Count of 1"<<cnt;

    ms.erase(1);            //all 1s are erased

    //only single 1 erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
    //other elements stay the same

}

int main(){
    explainMultiSet();
    return 0;
}