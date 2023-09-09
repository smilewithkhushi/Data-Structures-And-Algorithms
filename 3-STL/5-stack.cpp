//LIFO : last in first out data structure
#include <iostream>
#include<stack>
using namespace std;

void explainStack(){
   stack<int> st;

   st.push(1);          //{1}
   st.push(2);          //{2,1}
   st.push(3);          //{3,2,1}
   st.push(4);          //{4,3,2,1}
   st.emplace(5);       //{5,4,3,2,1}

   cout<<"The top element of the stack is  : "<<st.top()<<endl;

   st.pop();            //{4,3,2,1}
   cout<<"Top element after pop () : "<<st.top()<<endl;
   cout<<"size of the stack : "<<st.size()<<endl;
   cout<<"Check if stack is empty : "<<st.empty()<<endl;

    cout<<"Elements of the stack : ";
    int size=st.size();
   for(int i=0; i<size; i++){
    cout<<st.top()<<" ";
    st.pop();
   }
   cout<<endl;

   stack<int> s1,s2;
   s1.swap(s2);

}

int main(){
    explainStack();
    return 0;
}