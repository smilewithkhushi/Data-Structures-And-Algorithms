//stores only unique values and in the randomized order
//all operations are similar to set but do not store upper and lower bound functions
//for worst case complexity goes to O(N) othrwise it is O(1)

#include<iostream>
#include<set>
using namespace std;

void explainMultiSet(){
    unordered set<int> st;

    st.insert(1);
    st.insert(1);
    st.insert(7);
    st.insert(2);
    st.insert(5);           //{1,7,2,5}

    
    int cnt=st.count(1);
    cout<<"Count of 1"<<cnt;

    st.erase(1);            //all 1s are erased

    //only single 1 erased
    st.erase(st.find(1));

    st.erase(st.find(1), st.find(1)+2);
    //other elements stay the same

}

int main(){
    explainMultiSet();
    return 0;
}