#include<iostream>
using namespace std;

class queueType{
    int front, rear, size;
    int queue[100];

    public:
    void addElement(int e);
    void deleteElement();
    void display();
    bool isEmpty();
    bool isFull();
    queueType(int s){
        size=s;
        front=rear=-1;
        int queue[size];
    }
};
void queueType::addElement(int e){
    cout<<"Adding element : "<<e<<endl;
    if (isEmpty()==true){
        front=rear=0;
        queue[rear]=e;
    }else if(rear==size-1){
        rear=0;
        queue[rear];
    }else{
        rear++;
        queue[rear]=e;
    }
}

void queueType::deleteElement(){
    cout<<"front : "<<front<<endl;
    int ele;
    if (front==rear){
        ele=queue[front];
        front=rear=-1;
    }else if (front=size-1){
        ele=queue[front];
        front=0;
    }else{
        ele=queue[front];
        front++;
    }
    cout<<"Deleted element: "<<ele<<endl;
        
}
void queueType::display(){
    cout<<"Displaying queue : ";
    for (int i=0; i<front; i++){
       cout<<" _ ";
    }
    for (int i=front; i<=rear; i++){
        cout<<queue[i]<<" ";
    }
    for (int i=rear+1; i<size; i++){
        cout<<" _ ";
    }
    cout<<endl;
}
bool queueType::isEmpty(){
    if (front==-1){
        return true;
    }else return false;
}
bool queueType::isFull(){
    if (front=rear+1 || (front==-1 && rear==size-1)) return true;
    else return false;
}
int main(){
    int num;
    cout<<"Enter the size of the queue : ";
    cin>>num;
    queueType qt=queueType(num);
    qt.addElement(11);
    qt.display();
    qt.addElement(22);
    qt.display();
    qt.addElement(33);
    qt.display();
    qt.addElement(44);
    qt.display();
    qt.deleteElement();
    qt.display();
    qt.deleteElement();
    qt.display();
    qt.deleteElement();
    qt.display();
    qt.addElement(55);
    qt.display();
    qt.addElement(66);
    qt.display();
    qt.addElement(77);
    qt.display();
    qt.addElement(88);


}