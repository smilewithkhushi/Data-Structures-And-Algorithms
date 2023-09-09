#include<iostream>
#include<set>
using namespace std;

//set does not store duplicated data types and stores the data in a sorted order
//tree is maintained
//every function takes log N time complexity in sets
void explainSet(){

    set<int> st;
    st.insert(1);       //{1}
    st.insert(2);       //{1,2}
    st.emplace(2);      //{1,2}
    st.insert(5);       //{1,2,5}
    st.insert(3);       //{1,2,3,5}
    st.insert(4);       //{1,2,3,4,5}

    //functionality of insert in vector can be also used, only increases efficiency
    //{1,2,3,4,5}
    auto it=st.find(3);             //iterator
    auto it2=st.find(6);            //when the element isn't present, the iterator points to the st.end()

    //{1,2,3,4,5}
    st.erase(5);                    //erases 5, take logarithmic time
    //erase(start, end);
    st.insert(7);

    auto it3=st.find(7);
    st.erase(it,it3);              //multiple deletions

    int cnd = st.count(1);          //0 for no occurence
    cout<<"count of one - "<<cnd<<endl;

    auto it4 = st.lower_bound(2);
    auto it5 = st.upper_bound(3);  


}


int main(){
    explainSet();
    return 0;
}