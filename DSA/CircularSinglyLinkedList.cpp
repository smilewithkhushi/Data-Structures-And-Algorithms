#include<iostream>
using namespace std;

struct node{
    int info;
    node* next;
};

class CLL{
    node *cursor; //at the end of the CLL

    public:
    void addElement(int ele);
    void display();
    CLL(){
        cursor=NULL;
    }
};

void CLL::addElement(int ele){
    node *newptr;
    newptr=new(node);
    newptr->info=ele;

    if(cursor==NULL){ 
        //the CLL is empty
        newptr->next=newptr;
        cursor=newptr;
    }
    else{
        //CLL contains more than one element
        node *temp;
        newptr->next=cursor;
        cursor->next=newptr;
    }

}
void CLL::display(){
    cout<<"Displaying the elements : ";
    node* temp;
    temp=cursor;
    do{
        cout<<" , "<<temp->info;
        temp=temp->next;
    }while(temp!=cursor);

}
int main(){
    CLL cll;
    cll.addElement(1);
    cll.addElement(2);
    cll.addElement(3);
    cll.addElement(4);
    cll.addElement(5);
    cll.display();

}