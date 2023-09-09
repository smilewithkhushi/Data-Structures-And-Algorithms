#include<iostream>
using namespace std;

struct node{
    int info;
    node *next;
};

class linkedqueue{
    node *rear=new(node);
    node *front=new(node);
    

    public:
    node *createNode(int ele);
    void addNode(node *ptr);
    void deleteNode();
    bool isEmpty();
    void display();
    int count();

    linkedqueue(){
        rear=front=NULL;
    }
};

void linkedqueue::display(){
    cout<<"--> The Queue : ";
    node *temp;
    temp=new(node);
    for (temp=front; temp!=NULL; temp=temp->next){
        cout<<temp->info<<"  ";
    }
}

node *linkedqueue ::createNode(int ele){
    node *newptr=new(node);
    newptr->info=ele;
    newptr->next=NULL;
    return newptr;
}

void linkedqueue:: addNode(node *ptr){
    if (front==NULL){
        front=rear=ptr;
    }else{
        rear->next=ptr;
        rear=ptr;
    }
}
void linkedqueue:: deleteNode(){
    node*temp;
    temp=new(node);
    int deleted;
    if (front==rear){
        temp=front;
        deleted=temp->info;
        cout<<"Deleted element : "<<deleted<<endl;
        front=rear=NULL;
        delete temp;
    }//only one element in queue
    else{
        temp=front;
        deleted=temp->info;
        cout<<"Deleted element : "<<deleted<<endl;
        front=front->next;
        delete temp;
    }
}

int main(){
    linkedqueue lq=linkedqueue();
    node *nd;
    nd=new(node);
    int ele;
    for (int i=0; i<5; i++){
        cout<<"\nEnter element : ";
        cin>>ele;
        nd=lq.createNode(ele);
        lq.addNode(nd);
        lq.display();
}
lq.deleteNode();
lq.display();
lq.deleteNode();
lq.display();
lq.deleteNode();
lq.display();
}

/*
#include<iostream>
using namespace std;

template <class t> struct node{
    t info;
    node *next;
};

template<class t>class linkedqueue{
    node<t> *rear;
    node<t> *front;

    public:
    node<t> *createNode(t ele);
    void addNode(node<t> *ptr);
    void deleteNode();
    bool isEmpty();
    void display();
    int count();

    linkedqueue(){
        rear=new(node<t>);
        front=new(node<t>);
        rear=front=NULL;
    }
};

template <class t> void linkedqueue<t>::display(){
    cout<<"--> The Queue : ";
    node<t> *temp;
    temp=new(node<t>);
    for (temp=front; temp!=NULL; temp=temp->next){
        cout<<temp->info<<"  ";
    }
}

template<class t> node<t> *linkedqueue<t> ::createNode(t ele){
    node<t> *newptr=new(node<t>);
    newptr->info=ele;
    newptr->next=NULL;
    return newptr;
}

template<class t> void linkedqueue<t> :: addNode(node<t> *ptr){
    if (front==rear==NULL){
        front->next=ptr;
        rear->next=ptr;
        front=rear=ptr;
    }else{
        rear->next=ptr;
        rear=ptr;
    }
}
template<class t> void linkedqueue<t> :: deleteNode(){
    node<t> *temp;
    temp=new(node<t>);
    t deleted;
    if (front==rear){
        temp=front;
        deleted=temp->info;
        cout<<"Deleted element : "<<deleted<<endl;
        front=rear=NULL;
        delete temp;
    }//only one element in queue
    else{
        temp=front;
        deleted=temp->info;
        cout<<"Deleted element : "<<deleted<<endl;
        front=front->next;
        delete temp;
    }
}

int main(){
    linkedqueue<int> lq=linkedqueue<int>();
    node<int>* nd;
    nd=new(node<int>);
    int ele;
    for (int i=0; i<5; i++){
        cout<<"Enter element : ";
        cin>>ele;
        nd=lq.createNode(ele);
        lq.addNode(nd);
        lq.display();
}
} */