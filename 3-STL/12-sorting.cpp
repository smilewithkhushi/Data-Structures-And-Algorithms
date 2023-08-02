#include<iostream>
#include <vector>
#include<utility>
using namespace std;

void explainSort(){
    
    int a;
    int n;

    vector<int> v(5,10);

    sort(a , a+n );                 //sort (starting iterator, ending iterator)
    sort(v.begin(), v.end());
    sort(a+2, a+4);                                //sort only selective elements

    //sort in descending order
    sort(a, a+n, greater<int>);   //sort(starting it, ending it, comparator ) 

}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second<p2.second)    return true;
    //p1 then p2, this is correct order as per question
    if (p1.second>p2,second)    return false;
    //p1 and then p2, and p1 is greater, then they will be swapped
    if (p1.second==p2.second){
        //when both second elements are same
        if (p1.first>p2.first)      return true;
        else                        return false;
    }
}

void demo(){
    pair<int, int> a[] = {{1,2}, {4,8}, {3,6}, {9,18}, {0,2}};

    //sort it according to increasing second element
    //if second element is same , sort according ot first element but in descending order

    std::sort(a.begin(). a.end(), comp)
    //comp is the comparator with bool declared above

    for (auto it: a){
        cout<<*(it.first)<<","<<*(it.second)<<endl;
    }

}
int main(){
    demo();
    return 0;

}