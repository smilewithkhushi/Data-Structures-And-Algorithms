//FIFO : first in first out data structure
#include <iostream>
#include<queue>
using namespace std;

void explainQueue(){
   queue<int> q;

   q.push(1);          //{1}
   q.push(2);          //{1,2}
   q.push(3);          //{1,2,3}
   q.push(4);          //{1,2,3,4}
   q.emplace(5);       //{1,2,3,4,5}

   cout<<"The front element of the queue is  : "<<q.front()<<endl;

    cout<<"Queue back : "<<q.back()<<endl;
    q.back()+=5;
    cout<<"Queue back after +5 : "<<q.back()<<endl;

   cout<<"size of the queue : "<<q.size()<<endl;
   cout<<"Check if queue is empty : "<<q.empty()<<endl;
   q.pop();
   cout<<"Queue after pop : "<<q.front()<<endl;

}

int main(){
    explainQueue();
    return 0;
}