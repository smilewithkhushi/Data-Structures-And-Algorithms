#include<iostream>
using namespace std;

void explainString(){
    string name="Hi there";
    cout<<"String : "<<name<<endl;

    string age;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<endl<<"Age entered : "<<age<<endl;
}
int main(){
    void explainString();
    return 0;
}