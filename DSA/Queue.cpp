#include <iostream>
using namespace std;

class queuetype
{
    int front, rear, size;
    int queue[100];

public:
    queuetype(int n)
    {
        size = n;
        front = rear = -1;
    }
    bool isEmpty();
    bool isFull();
    void addElement(int ele);
    int removeElement();
    void display();
};

int queuetype::removeElement(){
    int temp=queue[front];
    cout<<"-> Element Deleted : "<<temp<<endl;
    front++;
}
bool queuetype::isEmpty()
{
    if (front == rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool queuetype::isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void queuetype::addElement(int ele)
{
    // overflow
    if (isFull())
    {
        cout << "Error adding element! Queue is full" << endl;
    }
    else if (front == -1)
    {
        front = rear = 0;
        queue[front] = ele;
        rear++;
    }
    else
    {
        queue[rear]=ele;
        rear++;
    }
}

void queuetype::display()
{
    cout << "Queue : ";

    for (int i = 0; i <rear; i++)
    {
        if (i<front)    cout << " ___ ";
        else cout<<queue[i]<<" ";
    }
    for (int i = rear; i < size; i++)
    {
        cout << " ___ ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of queue : ";
    cin >> size;

    queuetype qt = queuetype(size);
    bool res = qt.isEmpty();
    if (res == true)
    {
        cout << "Queue is empty" << endl;
    }
    else
        cout << "Queue is not empty" << endl;

    qt.addElement(1);
    qt.addElement(2);
    qt.addElement(3);
    qt.addElement(4);
    qt.display();
    qt.removeElement();
    qt.removeElement();
    qt.removeElement();
    qt.display();
    qt.addElement(11);
    qt.addElement(22);
    qt.addElement(33);
    qt.addElement(44);
    qt.display();
    return 0;
}